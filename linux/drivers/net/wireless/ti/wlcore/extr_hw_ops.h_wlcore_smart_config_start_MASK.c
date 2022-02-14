
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* smart_config_start ) (struct wl1271*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct wl1271 *VAR_1, u32 VAR_2)
{
 if (!VAR_1->ops->smart_config_start)
  return -VAR_0;

 return VAR_1->ops->smart_config_start(VAR_1, VAR_2);
}
