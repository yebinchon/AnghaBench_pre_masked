
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int ctrl; } ;
struct wl1271_tx_hw_descr {TYPE_1__ wl18xx_mem; } ;
struct wl1271 {int quirks; scalar_t__ aggr_buf; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_1(struct wl1271 *VAR_3,
          u32 VAR_4, u32 VAR_5)
{
 if (VAR_3->quirks & VAR_2) {
  struct wl1271_tx_hw_descr *VAR_6;


  VAR_6 = (struct wl1271_tx_hw_descr *)(VAR_3->aggr_buf +
       VAR_4 - VAR_5);


  VAR_6->wl18xx_mem.ctrl &= ~VAR_1;
  return FUNC_0(VAR_4, VAR_0);
 }


 return VAR_4;
}
