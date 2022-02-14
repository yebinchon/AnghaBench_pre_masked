
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* bssid; } ;
struct rtllib_device {int dev; int (* SetHwRegHandler ) (int ,int ,int*) ;TYPE_1__ current_network; void* OpMode; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct rtllib_device*) ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct rtllib_device *VAR_5)
{
 u8 VAR_6;
 u8 VAR_7;
 bool VAR_8 = 0;

 VAR_5->state = VAR_3;

 for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
  VAR_5->current_network.bssid[VAR_7] = 0x55;

 VAR_5->OpMode = VAR_4;
 VAR_5->SetHwRegHandler(VAR_5->dev, VAR_0,
    VAR_5->current_network.bssid);
 VAR_6 = VAR_4;
 VAR_5->SetHwRegHandler(VAR_5->dev, VAR_2, &VAR_6);
 FUNC_1(VAR_5);

 VAR_8 = 0;
 VAR_5->SetHwRegHandler(VAR_5->dev, VAR_1,
    (u8 *)(&VAR_8));
 FUNC_0(VAR_5);

}
