
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct lock_class_key {int dummy; } ;
struct kernfs_ops {scalar_t__ release; scalar_t__ mmap; scalar_t__ seq_show; } ;
struct TYPE_2__ {int size; struct kernfs_ops const* ops; } ;
struct kernfs_node {int flags; int dep_map; void* priv; void const* ns; TYPE_1__ attr; } ;
typedef int loff_t ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 struct kernfs_node* FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_2 (struct kernfs_node*,char const*,int,int ,int ,unsigned int) ;
 int FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (int *,char*,struct lock_class_key*,int ) ;

struct kernfs_node *FUNC_5(struct kernfs_node *VAR_8,
      const char *VAR_9,
      umode_t VAR_10, kuid_t VAR_11, kgid_t VAR_12,
      loff_t VAR_13,
      const struct kernfs_ops *VAR_14,
      void *VAR_15, const void *VAR_16,
      struct lock_class_key *VAR_17)
{
 struct kernfs_node *VAR_18;
 unsigned VAR_19;
 int VAR_20;

 VAR_19 = VAR_1;

 VAR_18 = FUNC_2(VAR_8, VAR_9, (VAR_10 & VAR_6) | VAR_7,
        VAR_11, VAR_12, VAR_19);
 if (!VAR_18)
  return FUNC_0(-VAR_0);

 VAR_18->attr.ops = VAR_14;
 VAR_18->attr.size = VAR_13;
 VAR_18->ns = VAR_16;
 VAR_18->priv = VAR_15;
 if (VAR_14->seq_show)
  VAR_18->flags |= VAR_4;
 if (VAR_14->mmap)
  VAR_18->flags |= VAR_2;
 if (VAR_14->release)
  VAR_18->flags |= VAR_3;

 VAR_20 = FUNC_1(VAR_18);
 if (VAR_20) {
  FUNC_3(VAR_18);
  return FUNC_0(VAR_20);
 }
 return VAR_18;
}
