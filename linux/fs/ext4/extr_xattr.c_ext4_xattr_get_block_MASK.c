
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int i_file_acl; } ;


 struct buffer_head* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int VAR_0 ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct inode*,struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_6(struct inode *VAR_1)
{
 struct buffer_head *VAR_2;
 int VAR_3;

 if (!FUNC_1(VAR_1)->i_file_acl)
  return ((void*)0);
 VAR_2 = FUNC_4(VAR_1->i_sb, FUNC_1(VAR_1)->i_file_acl, VAR_0);
 if (FUNC_2(VAR_2))
  return VAR_2;
 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_2);
  return FUNC_0(VAR_3);
 }
 return VAR_2;
}
