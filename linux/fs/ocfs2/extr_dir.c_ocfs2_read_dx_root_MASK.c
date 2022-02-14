
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_dinode {int i_dx_root; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct buffer_head**,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct ocfs2_dinode *VAR_2,
         struct buffer_head **VAR_3)
{
 int VAR_4;
 u64 VAR_5 = FUNC_1(VAR_2->i_dx_root);
 struct buffer_head *VAR_6 = *VAR_3;

 VAR_4 = FUNC_2(FUNC_0(VAR_1), VAR_5, &VAR_6,
          VAR_0);


 if (!VAR_4 && !*VAR_3)
  *VAR_3 = VAR_6;

 return VAR_4;
}
