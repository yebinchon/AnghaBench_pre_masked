
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct iavf_adapter {int link_speed; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;






 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct iavf_adapter *VAR_1,
          u64 VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;

 switch (VAR_1->link_speed) {
 case 128:
  VAR_3 = 40000;
  break;
 case 129:
  VAR_3 = 25000;
  break;
 case 130:
  VAR_3 = 20000;
  break;
 case 132:
  VAR_3 = 10000;
  break;
 case 131:
  VAR_3 = 1000;
  break;
 case 133:
  VAR_3 = 100;
  break;
 default:
  break;
 }

 if (VAR_2 > VAR_3) {
  FUNC_0(&VAR_1->pdev->dev,
   "Invalid tx rate specified\n");
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
