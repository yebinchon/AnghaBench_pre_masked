
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_ext_path {scalar_t__ p_bh; } ;
typedef int handle_t ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(handle_t *VAR_0, struct inode *VAR_1,
    struct ext4_ext_path *VAR_2)
{
 if (VAR_2->p_bh) {

  FUNC_0(VAR_2->p_bh, "get_write_access");
  return FUNC_1(VAR_0, VAR_2->p_bh);
 }


 return 0;
}
