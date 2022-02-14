
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* smart_config_set_group_key ) (struct wl1271*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,int ,int ,int *) ;

__attribute__((used)) static inline int
FUNC_1(struct wl1271 *VAR_1, u16 VAR_2,
      u8 VAR_3, u8 *VAR_4)
{
 if (!VAR_1->ops->smart_config_set_group_key)
  return -VAR_0;

 return VAR_1->ops->smart_config_set_group_key(VAR_1, VAR_2, VAR_3, VAR_4);
}
