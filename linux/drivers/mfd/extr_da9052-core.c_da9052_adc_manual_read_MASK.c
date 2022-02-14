
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int auxadc_lock; int dev; int done; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char* VAR_8 ;
 int FUNC_0 (struct da9052*,int ) ;
 int FUNC_1 (struct da9052*,int ,unsigned char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(struct da9052 *VAR_9, unsigned char VAR_10)
{
 int VAR_11;
 unsigned short VAR_12;
 unsigned short VAR_13;
 unsigned char VAR_14;

 if (VAR_10 > VAR_5)
  return -VAR_6;

 FUNC_4(&VAR_9->auxadc_lock);

 FUNC_6(&VAR_9->done);


 VAR_14 = VAR_8[VAR_10] | VAR_0;

 VAR_11 = FUNC_1(VAR_9, VAR_1, VAR_14);
 if (VAR_11 < 0)
  goto err;


 if (!FUNC_7(&VAR_9->done,
      FUNC_3(500))) {
  FUNC_2(VAR_9->dev,
   "timeout waiting for ADC conversion interrupt\n");
  VAR_11 = -VAR_7;
  goto err;
 }

 VAR_11 = FUNC_0(VAR_9, VAR_2);
 if (VAR_11 < 0)
  goto err;

 VAR_12 = (unsigned short)VAR_11;
 VAR_13 = VAR_12 << 2;

 VAR_11 = FUNC_0(VAR_9, VAR_4);
 if (VAR_11 < 0)
  goto err;

 VAR_12 = (unsigned short)(VAR_11 & VAR_3);
 VAR_13 |= VAR_12;

 VAR_11 = VAR_13;

err:
 FUNC_5(&VAR_9->auxadc_lock);
 return VAR_11;
}
