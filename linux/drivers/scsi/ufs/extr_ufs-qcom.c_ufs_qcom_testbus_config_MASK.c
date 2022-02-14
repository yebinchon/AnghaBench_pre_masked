
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int select_major; scalar_t__ select_minor; } ;
struct ufs_qcom_host {TYPE_2__* hba; TYPE_1__ testbus; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ufs_qcom_host*) ;
 int FUNC_4 (struct ufs_qcom_host*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int,int,int) ;

int FUNC_8(struct ufs_qcom_host *VAR_9)
{
 int VAR_10;
 int VAR_11;
 u32 VAR_12 = VAR_4;

 if (!VAR_9)
  return -VAR_0;

 if (!FUNC_4(VAR_9))
  return -VAR_1;

 switch (VAR_9->testbus.select_major) {
 case 131:
  VAR_10 = VAR_5;
  VAR_11 = 24;
  break;
 case 132:
  VAR_10 = VAR_5;
  VAR_11 = 16;
  break;
 case 133:
  VAR_10 = VAR_5;
  VAR_11 = 8;
  break;
 case 136:
  VAR_10 = VAR_5;
  VAR_11 = 0;
  break;
 case 138:
  VAR_10 = VAR_6;
  VAR_11 = 24;
  break;
 case 134:
  VAR_10 = VAR_6;
  VAR_11 = 16;
  break;
 case 135:
  VAR_10 = VAR_6;
  VAR_11 = 8;
  break;
 case 137:
  VAR_10 = VAR_6;
  VAR_11 = 0;
  break;
 case 128:
  VAR_10 = VAR_7;
  VAR_11 = 16;
  break;
 case 139:
  VAR_10 = VAR_7;
  VAR_11 = 8;
  break;
 case 129:
  VAR_10 = VAR_7;
  VAR_11 = 0;
  break;
 case 130:
  VAR_10 = VAR_8;
  VAR_11 = 20;
  VAR_12 = 0xFFF;
  break;





 }
 VAR_12 <<= VAR_11;

 FUNC_1(VAR_9->hba->dev);
 FUNC_5(VAR_9->hba, 0);
 FUNC_7(VAR_9->hba, VAR_3,
      (u32)VAR_9->testbus.select_major << 19,
      VAR_2);
 FUNC_7(VAR_9->hba, VAR_12,
      (u32)VAR_9->testbus.select_minor << VAR_11,
      VAR_10);
 FUNC_3(VAR_9);




 FUNC_0();
 FUNC_6(VAR_9->hba);
 FUNC_2(VAR_9->hba->dev);

 return 0;
}
