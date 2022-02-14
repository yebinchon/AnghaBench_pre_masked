
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* interrupt_notify ) (struct wl1271*,int) ;} ;


 int FUNC_0 (struct wl1271*,int) ;

__attribute__((used)) static inline int
FUNC_1(struct wl1271 *VAR_0, bool VAR_1)
{
 if (VAR_0->ops->interrupt_notify)
  return VAR_0->ops->interrupt_notify(VAR_0, VAR_1);
 return 0;
}
