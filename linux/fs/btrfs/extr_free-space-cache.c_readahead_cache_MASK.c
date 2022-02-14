
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct file_ra_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file_ra_state*,int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file_ra_state*) ;
 struct file_ra_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct file_ra_state*,int *,int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_2)
{
 struct file_ra_state *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 FUNC_0(VAR_3, VAR_2->i_mapping);
 VAR_4 = (FUNC_1(VAR_2) - 1) >> VAR_1;

 FUNC_4(VAR_2->i_mapping, VAR_3, ((void*)0), 0, VAR_4);

 FUNC_2(VAR_3);
}
