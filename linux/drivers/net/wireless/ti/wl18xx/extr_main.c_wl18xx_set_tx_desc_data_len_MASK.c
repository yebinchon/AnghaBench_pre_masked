
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_mem_blocks; scalar_t__ ctrl; } ;
struct wl1271_tx_hw_descr {TYPE_1__ wl18xx_mem; int life_time; int length; int hlid; } ;
struct wl1271 {int quirks; } ;
struct sk_buff {int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct wl1271 *VAR_3, struct wl1271_tx_hw_descr *VAR_4,
       struct sk_buff *VAR_5)
{
 VAR_4->length = FUNC_0(VAR_5->len);


 if (VAR_3->quirks & VAR_2)
  VAR_4->wl18xx_mem.ctrl = VAR_1;
 else
  VAR_4->wl18xx_mem.ctrl = 0;

 FUNC_2(VAR_0, "tx_fill_hdr: hlid: %d "
       "len: %d life: %d mem: %d", VAR_4->hlid,
       FUNC_1(VAR_4->length),
       FUNC_1(VAR_4->life_time),
       VAR_4->wl18xx_mem.total_mem_blocks);
}
