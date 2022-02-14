
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cur_channel; } ;
struct adapter {TYPE_1__ mlmeextpriv; } ;
struct TYPE_4__ {scalar_t__ oper_channel; unsigned long on_oper_ch_time; } ;


 TYPE_2__* FUNC_0 (struct adapter*) ;

inline unsigned long FUNC_1(struct adapter *VAR_0)
{
 if (VAR_0->mlmeextpriv.cur_channel == FUNC_0(VAR_0)->oper_channel)
  return FUNC_0(VAR_0)->on_oper_ch_time;
 else
  return 0;
}
