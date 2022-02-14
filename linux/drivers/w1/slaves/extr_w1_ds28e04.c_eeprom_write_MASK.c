
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {TYPE_1__* master; int dev; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct w1_slave* FUNC_2 (struct kobject*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_7 ;
 size_t FUNC_5 (size_t,size_t,int ) ;
 scalar_t__ FUNC_6 (struct w1_slave*,int,int,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_8, struct kobject *VAR_9,
       struct bin_attribute *VAR_10, char *VAR_11,
       loff_t VAR_12, size_t VAR_13)

{
 struct w1_slave *VAR_14 = FUNC_2(VAR_9);
 int VAR_15, VAR_16, VAR_17;

 VAR_13 = FUNC_5(VAR_12, VAR_13, VAR_4);
 if (VAR_13 == 0)
  return 0;

 if (VAR_7) {

  if ((VAR_12 & VAR_5) || (VAR_13 & VAR_5)) {
   FUNC_1(&VAR_14->dev, "invalid offset/count off=%d cnt=%zd\n",
    (int)VAR_12, VAR_13);
   return -VAR_2;
  }


  for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17 += VAR_6) {
   if (FUNC_0(VAR_0, &VAR_11[VAR_17], VAR_6)
    != VAR_1) {
    FUNC_1(&VAR_14->dev, "bad CRC at offset %d\n",
     (int)VAR_12);
    return -VAR_2;
   }
  }
 }

 FUNC_3(&VAR_14->master->mutex);


 VAR_17 = 0;
 while (VAR_17 < VAR_13) {
  VAR_15 = VAR_12 + VAR_17;
  VAR_16 = VAR_6 - (VAR_15 & VAR_5);
  if (VAR_16 > (VAR_13 - VAR_17))
   VAR_16 = VAR_13 - VAR_17;

  if (FUNC_6(VAR_14, VAR_15, VAR_16, &VAR_11[VAR_17]) < 0) {
   VAR_13 = -VAR_3;
   goto out_up;
  }
  VAR_17 += VAR_16;
 }

out_up:
 FUNC_4(&VAR_14->master->mutex);

 return VAR_13;
}
