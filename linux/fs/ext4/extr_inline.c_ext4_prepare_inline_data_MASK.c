
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_inode_info {scalar_t__ i_inline_off; } ;
typedef int handle_t ;


 int VAR_0 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct inode*,unsigned int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *,struct inode*,unsigned int) ;
 int FUNC_5 (struct inode*,int*) ;
 int FUNC_6 (struct inode*,int*) ;

__attribute__((used)) static int FUNC_7(handle_t *VAR_2, struct inode *VAR_3,
        unsigned int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct ext4_inode_info *VAR_8 = FUNC_0(VAR_3);

 if (!FUNC_3(VAR_3, VAR_1))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 < VAR_4)
  return -VAR_0;

 FUNC_5(VAR_3, &VAR_7);

 if (VAR_8->i_inline_off)
  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 else
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_6(VAR_3, &VAR_7);
 return VAR_5;
}
