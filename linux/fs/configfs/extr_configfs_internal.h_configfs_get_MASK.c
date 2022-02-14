
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_dirent {int s_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct configfs_dirent * FUNC_3(struct configfs_dirent * VAR_0)
{
 if (VAR_0) {
  FUNC_0(!FUNC_2(&VAR_0->s_count));
  FUNC_1(&VAR_0->s_count);
 }
 return VAR_0;
}
