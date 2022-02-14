
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_vers; int chip; } ;
struct adapter {int pdev_dev; int chip; TYPE_1__ params; } ;


 unsigned int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct adapter*,int *) ;

int FUNC_6(struct adapter *VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22 = FUNC_0(VAR_13->params.chip);

 VAR_15 = FUNC_5(VAR_13, &VAR_13->params.fw_vers);

 for (VAR_14 = 0; (VAR_15 == -VAR_1 || VAR_15 == -VAR_0) && VAR_14 < 3; VAR_14++)
  VAR_15 = FUNC_5(VAR_13, &VAR_13->params.fw_vers);

 if (VAR_15)
  return VAR_15;

 VAR_16 = FUNC_1(VAR_13->params.fw_vers);
 VAR_17 = FUNC_3(VAR_13->params.fw_vers);
 VAR_18 = FUNC_2(VAR_13->params.fw_vers);

 switch (VAR_22) {
 case 130:
  VAR_19 = VAR_4;
  VAR_20 = VAR_6;
  VAR_21 = VAR_5;
  break;
 case 129:
  VAR_19 = VAR_7;
  VAR_20 = VAR_9;
  VAR_21 = VAR_8;
  break;
 case 128:
  VAR_19 = VAR_10;
  VAR_20 = VAR_12;
  VAR_21 = VAR_11;
  break;
 default:
  FUNC_4(VAR_13->pdev_dev, "Unsupported chip type, %x\n",
   VAR_13->chip);
  return -VAR_3;
 }

 if (VAR_16 < VAR_19 || (VAR_16 == VAR_19 && VAR_17 < VAR_20) ||
     (VAR_16 == VAR_19 && VAR_17 == VAR_20 && VAR_18 < VAR_21)) {
  FUNC_4(VAR_13->pdev_dev,
   "Card has firmware version %u.%u.%u, minimum "
   "supported firmware is %u.%u.%u.\n", VAR_16, VAR_17,
   VAR_18, VAR_19, VAR_20, VAR_21);
  return -VAR_2;
 }
 return 0;
}
