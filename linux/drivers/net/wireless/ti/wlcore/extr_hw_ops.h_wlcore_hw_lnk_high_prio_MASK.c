
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl1271_link {int dummy; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* lnk_high_prio ) (struct wl1271*,int ,struct wl1271_link*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wl1271*,int ,struct wl1271_link*) ;

__attribute__((used)) static inline bool
FUNC_2(struct wl1271 *VAR_0, u8 VAR_1,
   struct wl1271_link *VAR_2)
{
 if (!VAR_0->ops->lnk_high_prio)
  FUNC_0(1);

 return VAR_0->ops->lnk_high_prio(VAR_0, VAR_1, VAR_2);
}
