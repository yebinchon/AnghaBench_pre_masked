
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct be_rx_obj {int dummy; } ;
struct be_adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ rx_drops_no_frags; } ;


 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (scalar_t__*,int ) ;
 TYPE_1__* FUNC_2 (struct be_rx_obj*) ;

__attribute__((used)) static void FUNC_3(struct be_adapter *VAR_0,
          struct be_rx_obj *VAR_1, u32 VAR_2)
{
 if (!FUNC_0(VAR_0))
  FUNC_2(VAR_1)->rx_drops_no_frags = VAR_2;
 else



  FUNC_1(&FUNC_2(VAR_1)->rx_drops_no_frags,
         (u16)VAR_2);
}
