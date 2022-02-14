
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bssid; } ;
struct rtllib_device {int state; TYPE_1__ current_network; int dev; int (* SetHwRegHandler ) (int ,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtllib_device*,int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(
 struct rtllib_device *VAR_2,
 u8 VAR_3
)
{
 bool VAR_4 = 0;

 VAR_4 = 0;
 VAR_2->SetHwRegHandler(VAR_2->dev, VAR_0,
    (u8 *)(&VAR_4));
 FUNC_0(VAR_2, VAR_2->current_network.bssid,
           VAR_3);

 VAR_2->state = VAR_1;
}
