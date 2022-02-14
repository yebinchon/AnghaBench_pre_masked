
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* smart_config_stop ) (struct wl1271*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*) ;

__attribute__((used)) static inline int
FUNC_1(struct wl1271 *VAR_1)
{
 if (!VAR_1->ops->smart_config_stop)
  return -VAR_0;

 return VAR_1->ops->smart_config_stop(VAR_1);
}
