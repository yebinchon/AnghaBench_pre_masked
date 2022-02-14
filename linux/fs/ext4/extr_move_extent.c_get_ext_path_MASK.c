
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_ext_path {int * p_ext; } ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ext4_ext_path*) ;
 int FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_3 (struct inode*,int ,struct ext4_ext_path**,int ) ;
 size_t FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ext4_ext_path*) ;

__attribute__((used)) static inline int
FUNC_6(struct inode *VAR_2, ext4_lblk_t VAR_3,
  struct ext4_ext_path **VAR_4)
{
 struct ext4_ext_path *VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 if (VAR_5[FUNC_4(VAR_2)].p_ext == ((void*)0)) {
  FUNC_2(VAR_5);
  FUNC_5(VAR_5);
  *VAR_4 = ((void*)0);
  return -VAR_0;
 }
 *VAR_4 = VAR_5;
 return 0;
}
