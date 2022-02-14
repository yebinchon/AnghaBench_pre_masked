
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl1271 {TYPE_1__* ops; } ;
typedef enum wl_rx_buf_align { ____Placeholder_wl_rx_buf_align } wl_rx_buf_align ;
struct TYPE_2__ {int (* get_rx_buf_align ) (struct wl1271*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wl1271*,int ) ;

__attribute__((used)) static inline enum wl_rx_buf_align
FUNC_2(struct wl1271 *VAR_0, u32 VAR_1)
{

 if (!VAR_0->ops->get_rx_buf_align)
  FUNC_0(1);

 return VAR_0->ops->get_rx_buf_align(VAR_0, VAR_1);
}
