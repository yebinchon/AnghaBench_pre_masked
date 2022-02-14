
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {int usb_dev; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,unsigned int,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,unsigned int,int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wahc *VAR_5, unsigned VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = &VAR_5->usb_iface->dev;

 VAR_7 = FUNC_1(
  VAR_5->usb_dev, FUNC_2(VAR_5->usb_dev, 0),
  VAR_3,
  VAR_1 | VAR_4 | VAR_2,
  0, VAR_6, ((void*)0), 0, VAR_0);
 if (VAR_7 < 0)
  FUNC_0(VAR_8, "rpipe %u: reset failed: %d\n",
   VAR_6, VAR_7);
 return VAR_7;
}
