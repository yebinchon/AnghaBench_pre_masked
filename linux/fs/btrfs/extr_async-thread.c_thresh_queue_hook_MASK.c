
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __btrfs_workqueue {scalar_t__ thresh; int pending; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct __btrfs_workqueue *VAR_1)
{
 if (VAR_1->thresh == VAR_0)
  return;
 FUNC_0(&VAR_1->pending);
}
