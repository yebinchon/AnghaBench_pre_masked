
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl1271_tx_hw_descr {int dummy; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {void (* set_tx_desc_blocks ) (struct wl1271*,struct wl1271_tx_hw_descr*,int ,int ) ;} ;


 int FUNC_0 (int) ;
 void FUNC_1 (struct wl1271*,struct wl1271_tx_hw_descr*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct wl1271 *VAR_0, struct wl1271_tx_hw_descr *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 if (!VAR_0->ops->set_tx_desc_blocks)
  FUNC_0(1);

 return VAR_0->ops->set_tx_desc_blocks(VAR_0, VAR_1, VAR_2, VAR_3);
}
