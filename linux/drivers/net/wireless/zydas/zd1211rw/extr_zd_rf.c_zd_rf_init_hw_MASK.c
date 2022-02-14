
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_rf {int type; int (* init_hw ) (struct zd_rf*) ;} ;
struct zd_chip {int mutex; } ;





 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_rf*) ;
 int FUNC_4 (struct zd_chip*) ;
 int FUNC_5 (struct zd_chip*) ;
 int FUNC_6 (struct zd_chip*) ;
 int FUNC_7 (struct zd_rf*) ;
 int FUNC_8 (struct zd_rf*) ;
 int FUNC_9 (struct zd_rf*) ;
 int FUNC_10 (struct zd_rf*) ;
 int FUNC_11 (int) ;
 struct zd_chip* FUNC_12 (struct zd_rf*) ;

int FUNC_13(struct zd_rf *VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 struct zd_chip *VAR_5 = FUNC_12(VAR_1);

 FUNC_0(FUNC_2(&VAR_5->mutex));
 switch (VAR_2) {
 case 129:
  VAR_3 = FUNC_9(VAR_1);
  break;
 case 132:
 case 133:
  VAR_3 = FUNC_7(VAR_1);
  break;
 case 131:
  VAR_3 = FUNC_8(VAR_1);
  break;
 case 130:
 case 128:
  VAR_3 = FUNC_10(VAR_1);
  break;
 default:
  FUNC_1(FUNC_4(VAR_5),
   "RF %s %#x is not supported\n", FUNC_11(VAR_2), VAR_2);
  VAR_1->type = 0;
  return -VAR_0;
 }

 if (VAR_3)
  return VAR_3;

 VAR_1->type = VAR_2;

 VAR_3 = FUNC_5(VAR_5);
 if (VAR_3)
  return VAR_3;
 VAR_4 = VAR_1->init_hw(VAR_1);
 VAR_3 = FUNC_6(VAR_5);
 if (VAR_4)
  VAR_3 = VAR_4;
 return VAR_3;
}
