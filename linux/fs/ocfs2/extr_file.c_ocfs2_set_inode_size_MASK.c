
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_mtime; int i_ctime; int i_blocks; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,struct inode*,struct buffer_head*) ;

int FUNC_5(handle_t *VAR_0,
    struct inode *VAR_1,
    struct buffer_head *VAR_2,
    u64 VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1, VAR_3);
 VAR_1->i_blocks = FUNC_3(VAR_1);
 VAR_1->i_ctime = VAR_1->i_mtime = FUNC_0(VAR_1);

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0) {
  FUNC_2(VAR_4);
  goto bail;
 }

bail:
 return VAR_4;
}
