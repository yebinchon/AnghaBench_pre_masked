
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_ant {int rssi_history; } ;
struct TYPE_2__ {struct link_ant ant; } ;
struct rt2x00_dev {TYPE_1__ link; } ;



__attribute__((used)) static void FUNC_0(struct rt2x00_dev *VAR_0,
         int VAR_1)
{
 struct link_ant *VAR_2 = &VAR_0->link.ant;
 VAR_2->rssi_history = VAR_1;
}
