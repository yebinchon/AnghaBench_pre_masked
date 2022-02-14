
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int log_mutex; } ;
struct btrfs_log_ctx {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct btrfs_root *VAR_0,
     struct btrfs_log_ctx *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_1(&VAR_0->log_mutex);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_0->log_mutex);
}
