
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_3__ {int sec_counter; } ;
struct TYPE_4__ {TYPE_1__ idc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_adapter *VAR_3,
      int VAR_4)
{
 u64 VAR_5;

 VAR_5 = VAR_2 / VAR_1 - VAR_3->ahw->idc.sec_counter;
 if (VAR_5 <= VAR_4)
  return 0;
 else
  return -VAR_0;
}
