
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_oos_message {int code; } ;
struct dasd_device {TYPE_1__* discipline; TYPE_2__* cdev; } ;
typedef int __u8 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* check_attention ) (struct dasd_device*,int ) ;} ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct dasd_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct dasd_device *VAR_0, void *VAR_1,
     __u8 VAR_2)
{
 struct dasd_oos_message *VAR_3 = VAR_1;

 switch (VAR_3->code) {
 case 128:
 case 131:
  FUNC_3(&VAR_0->cdev->dev,
    "Extent pool usage has reached a critical value\n");
  FUNC_0(VAR_0);
  break;
 case 130:
 case 133:
  FUNC_3(&VAR_0->cdev->dev,
    "Extent pool is exhausted\n");
  break;
 case 129:
 case 132:
  FUNC_2(&VAR_0->cdev->dev,
    "Extent pool physical space constraint has been relieved\n");
  break;
 }


 FUNC_1(VAR_0);


 VAR_0->discipline->check_attention(VAR_0, VAR_2);
}
