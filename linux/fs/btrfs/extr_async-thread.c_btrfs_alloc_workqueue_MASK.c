
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_workqueue {void* normal; void* high; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (struct btrfs_fs_info*,char const*,unsigned int,int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct btrfs_workqueue*) ;
 struct btrfs_workqueue* FUNC_3 (int,int ) ;

struct btrfs_workqueue *FUNC_4(struct btrfs_fs_info *VAR_2,
           const char *VAR_3,
           unsigned int VAR_4,
           int VAR_5,
           int VAR_6)
{
 struct btrfs_workqueue *VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0);

 if (!VAR_7)
  return ((void*)0);

 VAR_7->normal = FUNC_0(VAR_2, VAR_3,
           VAR_4 & ~VAR_1,
           VAR_5, VAR_6);
 if (!VAR_7->normal) {
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 if (VAR_4 & VAR_1) {
  VAR_7->high = FUNC_0(VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6);
  if (!VAR_7->high) {
   FUNC_1(VAR_7->normal);
   FUNC_2(VAR_7);
   return ((void*)0);
  }
 }
 return VAR_7;
}
