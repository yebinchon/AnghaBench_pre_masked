
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_fragment {int frag_dead; int frag_sem; int frag_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct configfs_fragment* FUNC_2 (int,int ) ;

__attribute__((used)) static struct configfs_fragment *FUNC_3(void)
{
 struct configfs_fragment *VAR_1;

 VAR_1 = FUNC_2(sizeof(struct configfs_fragment), VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_1->frag_count, 1);
  FUNC_1(&VAR_1->frag_sem);
  VAR_1->frag_dead = 0;
 }
 return VAR_1;
}
