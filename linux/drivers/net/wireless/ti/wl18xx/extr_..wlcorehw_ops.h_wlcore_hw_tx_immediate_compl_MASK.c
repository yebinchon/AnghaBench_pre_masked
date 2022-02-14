
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* tx_immediate_compl ) (struct wl1271*) ;} ;


 int FUNC_0 (struct wl1271*) ;

__attribute__((used)) static inline void FUNC_1(struct wl1271 *VAR_0)
{
 if (VAR_0->ops->tx_immediate_compl)
  VAR_0->ops->tx_immediate_compl(VAR_0);
}
