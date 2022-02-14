
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_mode; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_fsblk_t ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct inode*,char*,unsigned long long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,scalar_t__,unsigned long) ;
 int FUNC_7 (int *,struct inode*,int *,scalar_t__,unsigned long,int) ;
 int FUNC_8 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_9 (int *,struct buffer_head*) ;
 int FUNC_10 (int *,struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (int *,struct inode*,int ) ;
 scalar_t__ FUNC_15 (int *,struct inode*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(handle_t *VAR_4, struct inode *VAR_5,
        struct buffer_head *VAR_6,
        ext4_fsblk_t VAR_7,
        unsigned long VAR_8, __le32 *VAR_9,
        __le32 *VAR_10)
{
 __le32 *VAR_11;
 int VAR_12 = VAR_2;
 int VAR_13;

 if (FUNC_3(VAR_5->i_mode) || FUNC_4(VAR_5->i_mode) ||
     FUNC_13(VAR_5, VAR_3))
  VAR_12 |= VAR_0 | VAR_1;
 else if (FUNC_11(VAR_5))
  VAR_12 |= VAR_0;

 if (!FUNC_6(FUNC_2(VAR_5->i_sb), VAR_7,
       VAR_8)) {
  FUNC_1(VAR_5, "attempt to clear invalid "
     "blocks %llu len %lu",
     (unsigned long long) VAR_7, VAR_8);
  return 1;
 }

 if (FUNC_15(VAR_4, VAR_5)) {
  if (VAR_6) {
   FUNC_0(VAR_6, "call ext4_handle_dirty_metadata");
   VAR_13 = FUNC_8(VAR_4, VAR_5, VAR_6);
   if (FUNC_16(VAR_13))
    goto out_err;
  }
  VAR_13 = FUNC_10(VAR_4, VAR_5);
  if (FUNC_16(VAR_13))
   goto out_err;
  VAR_13 = FUNC_14(VAR_4, VAR_5,
     FUNC_5(VAR_5));
  if (FUNC_16(VAR_13))
   goto out_err;
  if (VAR_6) {
   FUNC_0(VAR_6, "retaking write access");
   VAR_13 = FUNC_9(VAR_4, VAR_6);
   if (FUNC_16(VAR_13))
    goto out_err;
  }
 }

 for (VAR_11 = VAR_9; VAR_11 < VAR_10; VAR_11++)
  *VAR_11 = 0;

 FUNC_7(VAR_4, VAR_5, ((void*)0), VAR_7, VAR_8, VAR_12);
 return 0;
out_err:
 FUNC_12(VAR_5->i_sb, VAR_13);
 return VAR_13;
}
