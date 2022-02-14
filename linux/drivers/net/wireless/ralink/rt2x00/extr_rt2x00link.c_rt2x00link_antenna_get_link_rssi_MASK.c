
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rx_success; } ;
struct link_ant {int rssi_ant; } ;
struct TYPE_4__ {TYPE_1__ qual; struct link_ant ant; } ;
struct rt2x00_dev {TYPE_2__ link; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct rt2x00_dev *VAR_1)
{
 struct link_ant *VAR_2 = &VAR_1->link.ant;

 if (VAR_1->link.qual.rx_success)
  return FUNC_0(&VAR_2->rssi_ant);

 return VAR_0;
}
