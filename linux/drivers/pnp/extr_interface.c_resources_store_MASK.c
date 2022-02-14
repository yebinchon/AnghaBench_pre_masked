
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int status; scalar_t__ active; TYPE_1__* protocol; int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int resource_size_t ;
struct TYPE_2__ {int (* get ) (struct pnp_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pnp_dev*) ;
 int FUNC_4 (struct pnp_dev*,int ,int ) ;
 int FUNC_5 (struct pnp_dev*,int ,unsigned long) ;
 int FUNC_6 (struct pnp_dev*,int ,int ,unsigned long) ;
 int FUNC_7 (struct pnp_dev*,int ,unsigned long) ;
 int FUNC_8 (struct pnp_dev*,int ,int ,unsigned long) ;
 int FUNC_9 (struct pnp_dev*) ;
 scalar_t__ FUNC_10 (struct pnp_dev*) ;
 int FUNC_11 (struct pnp_dev*) ;
 char* FUNC_12 (char*,int ,int *,int *,unsigned long*) ;
 int FUNC_13 (struct pnp_dev*) ;
 int VAR_7 ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_17 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_18(struct device *VAR_8,
          struct device_attribute *VAR_9, const char *VAR_10,
          size_t VAR_11)
{
 struct pnp_dev *VAR_12 = FUNC_17(VAR_8);
 char *VAR_13 = (void *)VAR_10;
 int VAR_14 = 0;

 if (VAR_12->status & VAR_6) {
  VAR_14 = -VAR_0;
  FUNC_0(&VAR_12->dev, "in use; can't configure\n");
  goto done;
 }

 VAR_13 = FUNC_14(VAR_13);
 if (!FUNC_15(VAR_13, "disable", 7)) {
  VAR_14 = FUNC_11(VAR_12);
  goto done;
 }
 if (!FUNC_15(VAR_13, "activate", 8)) {
  VAR_14 = FUNC_3(VAR_12);
  goto done;
 }
 if (!FUNC_15(VAR_13, "fill", 4)) {
  if (VAR_12->active)
   goto done;
  VAR_14 = FUNC_9(VAR_12);
  goto done;
 }
 if (!FUNC_15(VAR_13, "auto", 4)) {
  if (VAR_12->active)
   goto done;
  FUNC_13(VAR_12);
  VAR_14 = FUNC_9(VAR_12);
  goto done;
 }
 if (!FUNC_15(VAR_13, "clear", 5)) {
  if (VAR_12->active)
   goto done;
  FUNC_13(VAR_12);
  goto done;
 }
 if (!FUNC_15(VAR_13, "get", 3)) {
  FUNC_1(&VAR_7);
  if (FUNC_10(VAR_12))
   VAR_12->protocol->get(VAR_12);
  FUNC_2(&VAR_7);
  goto done;
 }
 if (!FUNC_15(VAR_13, "set", 3)) {
  resource_size_t VAR_15;
  resource_size_t VAR_16;
  unsigned long VAR_17;

  if (VAR_12->active)
   goto done;
  VAR_13 += 3;
  FUNC_13(VAR_12);
  FUNC_1(&VAR_7);
  while (1) {
   VAR_13 = FUNC_14(VAR_13);
   if (!FUNC_15(VAR_13, "io", 2)) {
    VAR_13 = FUNC_12(VAR_13 + 2,
            VAR_3,
            &VAR_15, &VAR_16,
            &VAR_17);
    FUNC_6(VAR_12, VAR_15, VAR_16, VAR_17);
   } else if (!FUNC_15(VAR_13, "mem", 3)) {
    VAR_13 = FUNC_12(VAR_13 + 3,
            VAR_5,
            &VAR_15, &VAR_16,
            &VAR_17);
    FUNC_8(VAR_12, VAR_15, VAR_16, VAR_17);
   } else if (!FUNC_15(VAR_13, "irq", 3)) {
    VAR_13 = FUNC_12(VAR_13 + 3,
            VAR_4,
            &VAR_15, ((void*)0),
            &VAR_17);
    FUNC_7(VAR_12, VAR_15, VAR_17);
   } else if (!FUNC_15(VAR_13, "dma", 3)) {
    VAR_13 = FUNC_12(VAR_13 + 3,
            VAR_2,
            &VAR_15, ((void*)0),
            &VAR_17);
    FUNC_5(VAR_12, VAR_15, VAR_17);
   } else if (!FUNC_15(VAR_13, "bus", 3)) {
    VAR_13 = FUNC_12(VAR_13 + 3,
            VAR_1,
            &VAR_15, &VAR_16,
            ((void*)0));
    FUNC_4(VAR_12, VAR_15, VAR_16);
   } else
    break;
  }
  FUNC_2(&VAR_7);
  goto done;
 }

done:
 if (VAR_14 < 0)
  return VAR_14;
 return VAR_11;
}
