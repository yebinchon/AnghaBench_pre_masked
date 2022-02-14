
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* bssid; } ;
struct rtllib_device {TYPE_1__ current_network; int dev; int (* SetHwRegHandler ) (int ,int ,int*) ;void* OpMode; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct rtllib_device*,int*) ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (struct rtllib_device*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct rtllib_device *VAR_4,
        u8 *VAR_5, u8 VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;

 FUNC_0(VAR_4, VAR_5);

 if (FUNC_1(VAR_4->current_network.bssid, VAR_5, 6) == 0) {
  VAR_4->state = VAR_2;

  for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
   VAR_4->current_network.bssid[VAR_7] = 0x22;
  VAR_8 = VAR_3;
  VAR_4->OpMode = VAR_3;
  VAR_4->SetHwRegHandler(VAR_4->dev, VAR_1,
     (u8 *)(&VAR_8));
  FUNC_2(VAR_4);

  VAR_4->SetHwRegHandler(VAR_4->dev, VAR_0,
     VAR_4->current_network.bssid);

 }

}
