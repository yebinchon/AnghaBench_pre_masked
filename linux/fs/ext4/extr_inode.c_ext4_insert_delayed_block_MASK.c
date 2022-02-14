
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_sb_info {int s_cluster_ratio; } ;
typedef int ext4_lblk_t ;


 int FUNC_0 (struct ext4_sb_info*,int ) ;
 struct ext4_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct inode*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, ext4_lblk_t VAR_3)
{
 struct ext4_sb_info *VAR_4 = FUNC_1(VAR_2->i_sb);
 int VAR_5;
 bool VAR_6 = 0;
 if (VAR_4->s_cluster_ratio == 1) {
  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5 != 0)
   goto errout;
 } else {
  if (!FUNC_5(VAR_2, &VAR_0, VAR_3)) {
   if (!FUNC_5(VAR_2,
           &VAR_1, VAR_3)) {
    VAR_5 = FUNC_2(VAR_2,
            FUNC_0(VAR_4, VAR_3));
    if (VAR_5 < 0)
     goto errout;
    if (VAR_5 == 0) {
     VAR_5 = FUNC_3(VAR_2);
     if (VAR_5 != 0)
      goto errout;
    } else {
     VAR_6 = 1;
    }
   } else {
    VAR_6 = 1;
   }
  }
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_6);

errout:
 return VAR_5;
}
