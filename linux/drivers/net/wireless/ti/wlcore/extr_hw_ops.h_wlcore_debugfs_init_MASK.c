
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {TYPE_1__* ops; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* debugfs_init ) (struct wl1271*,struct dentry*) ;} ;


 int FUNC_0 (struct wl1271*,struct dentry*) ;

__attribute__((used)) static inline int
FUNC_1(struct wl1271 *VAR_0, struct dentry *VAR_1)
{
 if (VAR_0->ops->debugfs_init)
  return VAR_0->ops->debugfs_init(VAR_0, VAR_1);

 return 0;
}
