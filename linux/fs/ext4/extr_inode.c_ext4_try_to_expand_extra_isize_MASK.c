
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_iloc {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,unsigned int,struct ext4_iloc*,int *,int*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;
 scalar_t__ FUNC_4 (struct inode*,int*) ;
 int FUNC_5 (struct inode*,int*) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4,
       unsigned int VAR_5,
       struct ext4_iloc VAR_6,
       handle_t *VAR_7)
{
 int VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_4, VAR_3))
  return -VAR_2;
 if (FUNC_2(VAR_7) &&
     FUNC_6(VAR_7,
    FUNC_0(VAR_4->i_sb)) != 0)
  return -VAR_1;

 if (FUNC_4(VAR_4, &VAR_8) == 0)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4, VAR_5, &VAR_6,
       VAR_7, &VAR_8);
 FUNC_5(VAR_4, &VAR_8);

 return VAR_9;
}
