
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,int ) ;

int FUNC_3(struct inode *VAR_2, __u64 VAR_3, int VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 129:
  if (FUNC_0(VAR_2->i_sb, VAR_3))






   VAR_5 = -VAR_0;
  else
   VAR_5 = FUNC_1(VAR_2, VAR_3);
  return VAR_5;
 case 128:
  return FUNC_2(VAR_2, VAR_3);
 default:
  return -VAR_1;
 }
}
