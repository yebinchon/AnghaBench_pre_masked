
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int slot_num; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 struct inode* FUNC_4 (struct ocfs2_super*,int ,int ) ;
 int FUNC_5 (struct inode*,struct buffer_head**,int) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_2,
     struct inode **VAR_3,
     struct buffer_head **VAR_4)
{
 struct inode *VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_5 = FUNC_4(VAR_2,
             VAR_1,
             VAR_2->slot_num);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  FUNC_3(VAR_7);
  return VAR_7;
 }

 FUNC_0(VAR_5);

 VAR_7 = FUNC_5(VAR_5, &VAR_6, 1);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5);
  FUNC_2(VAR_5);

  FUNC_3(VAR_7);
  return VAR_7;
 }

 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;

 return 0;
}
