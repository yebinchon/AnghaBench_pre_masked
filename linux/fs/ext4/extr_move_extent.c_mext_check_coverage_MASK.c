
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int dummy; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
typedef scalar_t__ ext4_lblk_t ;


 int FUNC_0 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_1 (struct ext4_extent*) ;
 int FUNC_2 (struct ext4_extent*) ;
 size_t FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,scalar_t__,struct ext4_ext_path**) ;
 int FUNC_5 (struct ext4_ext_path*) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_0, ext4_lblk_t VAR_1, ext4_lblk_t VAR_2,
      int VAR_3, int *VAR_4)
{
 struct ext4_ext_path *VAR_5 = ((void*)0);
 struct ext4_extent *VAR_6;
 int VAR_7 = 0;
 ext4_lblk_t VAR_8 = VAR_1 + VAR_2;
 while (VAR_1 < VAR_8) {
  *VAR_4 = FUNC_4(VAR_0, VAR_1, &VAR_5);
  if (*VAR_4)
   goto out;
  VAR_6 = VAR_5[FUNC_3(VAR_0)].p_ext;
  if (VAR_3 != FUNC_2(VAR_6))
   goto out;
  VAR_1 += FUNC_1(VAR_6);
  FUNC_0(VAR_5);
 }
 VAR_7 = 1;
out:
 FUNC_0(VAR_5);
 FUNC_5(VAR_5);
 return VAR_7;
}
