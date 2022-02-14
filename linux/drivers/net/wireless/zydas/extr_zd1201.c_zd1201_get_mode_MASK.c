
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd1201 {scalar_t__ monitor; TYPE_1__* usb; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int FUNC_0 (int *,char*,short) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*,int ,short*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_7,
    struct iw_request_info *VAR_8, __u32 *VAR_9, char *VAR_10)
{
 struct zd1201 *VAR_11 = FUNC_1(VAR_7);
 short VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_11, VAR_6, &VAR_12);
 if (VAR_13)
  return VAR_13;
 switch(VAR_12) {
  case 130:
   *VAR_9 = VAR_0;
   break;
  case 131:
   *VAR_9 = VAR_2;
   break;
  case 128:
   *VAR_9 = VAR_5;
   break;
  case 129:
   *VAR_9 = 8;
   break;
  case 132:
   *VAR_9 = VAR_3;
   break;
  default:
   FUNC_0(&VAR_11->usb->dev, "Unknown porttype: %d\n",
       VAR_12);
   *VAR_9 = VAR_1;
 }
 if (VAR_11->monitor)
  *VAR_9 = VAR_4;

 return 0;
}
