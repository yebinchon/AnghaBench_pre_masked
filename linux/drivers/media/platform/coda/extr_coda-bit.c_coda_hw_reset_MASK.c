
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coda_dev {TYPE_1__* devtype; int rstc; int coda_mutex; } ;
struct coda_ctx {struct coda_dev* dev; } ;
struct TYPE_2__ {scalar_t__ product; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct coda_dev*,int ) ;
 int FUNC_1 (struct coda_dev*) ;
 int FUNC_2 (struct coda_dev*,unsigned int,int ) ;
 int FUNC_3 () ;
 unsigned long VAR_10 ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

int FUNC_8(struct coda_ctx *VAR_11)
{
 struct coda_dev *VAR_12 = VAR_11->dev;
 unsigned long VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 FUNC_4(&VAR_12->coda_mutex);

 if (!VAR_12->rstc)
  return -VAR_8;

 VAR_14 = FUNC_0(VAR_12, VAR_6);

 if (VAR_12->devtype->product == VAR_2) {
  VAR_13 = VAR_10 + FUNC_5(100);
  FUNC_2(VAR_12, 0x11, VAR_0);
  while (FUNC_0(VAR_12, VAR_1) != 0x77) {
   if (FUNC_7(VAR_10, VAR_13))
    return -VAR_9;
   FUNC_3();
  }
 }

 VAR_15 = FUNC_6(VAR_12->rstc);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_12->devtype->product == VAR_2)
  FUNC_2(VAR_12, 0x00, VAR_0);
 FUNC_2(VAR_12, VAR_4, VAR_3);
 FUNC_2(VAR_12, VAR_7, VAR_5);
 VAR_15 = FUNC_1(VAR_12);
 FUNC_2(VAR_12, VAR_14, VAR_6);

 return VAR_15;
}
