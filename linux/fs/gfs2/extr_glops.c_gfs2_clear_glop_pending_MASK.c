
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct gfs2_inode *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_0, &VAR_1->i_flags);
 FUNC_1(&VAR_1->i_flags, VAR_0);
}
