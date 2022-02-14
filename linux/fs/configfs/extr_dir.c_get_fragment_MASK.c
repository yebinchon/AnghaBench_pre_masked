
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_fragment {int frag_count; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct configfs_fragment*) ;

struct configfs_fragment *FUNC_2(struct configfs_fragment *VAR_0)
{
 if (FUNC_1(VAR_0))
  FUNC_0(&VAR_0->frag_count);
 return VAR_0;
}
