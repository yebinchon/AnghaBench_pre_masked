
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_size; TYPE_1__* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_7__ {int i_disksize; } ;
struct TYPE_6__ {int s_max_dir_size_kb; } ;
struct TYPE_5__ {int s_blocksize_bits; scalar_t__ s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 struct buffer_head* FUNC_6 (int *,struct inode*,int,int ) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct buffer_head *FUNC_10(handle_t *VAR_2,
     struct inode *VAR_3,
     ext4_lblk_t *VAR_4)
{
 struct buffer_head *VAR_5;
 int VAR_6;

 if (FUNC_9(FUNC_3(VAR_3->i_sb)->s_max_dir_size_kb &&
       ((VAR_3->i_size >> 10) >=
        FUNC_3(VAR_3->i_sb)->s_max_dir_size_kb)))
  return FUNC_1(-VAR_0);

 *VAR_4 = VAR_3->i_size >> VAR_3->i_sb->s_blocksize_bits;

 VAR_5 = FUNC_6(VAR_2, VAR_3, *VAR_4, VAR_1);
 if (FUNC_4(VAR_5))
  return VAR_5;
 VAR_3->i_size += VAR_3->i_sb->s_blocksize;
 FUNC_2(VAR_3)->i_disksize = VAR_3->i_size;
 FUNC_0(VAR_5, "get_write_access");
 VAR_6 = FUNC_7(VAR_2, VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_5);
  FUNC_8(VAR_3->i_sb, VAR_6);
  return FUNC_1(VAR_6);
 }
 return VAR_5;
}
