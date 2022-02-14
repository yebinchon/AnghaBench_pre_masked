
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct inode {int i_sb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (struct inode*,int,int*,int*,unsigned int*) ;

int FUNC_4(struct inode *VAR_0, u64 VAR_1, u64 *VAR_2,
    u64 *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_2(VAR_0->i_sb, 1);
 u32 VAR_7, VAR_8, VAR_9;
 u64 VAR_10 = 0;

 VAR_7 = FUNC_1(VAR_0->i_sb, VAR_1);

 VAR_5 = FUNC_3(VAR_0, VAR_7, &VAR_9, &VAR_8,
     VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_5);
  goto out;
 }




 if (VAR_9) {
  VAR_10 = FUNC_2(VAR_0->i_sb, VAR_9);
  VAR_10 += (VAR_1 & (u64)(VAR_6 - 1));
 }

 *VAR_2 = VAR_10;

 if (VAR_3) {
  *VAR_3 = FUNC_2(VAR_0->i_sb, VAR_8);
  *VAR_3 -= VAR_1 & (u64)(VAR_6 - 1);
 }

out:
 return VAR_5;
}
