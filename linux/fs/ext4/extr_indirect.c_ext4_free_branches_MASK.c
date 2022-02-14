
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_fsblk_t ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,char*,unsigned long,int) ;
 int FUNC_3 (struct inode*,scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 int FUNC_8 (int *,struct inode*,int *,scalar_t__,int,int) ;
 int FUNC_9 (int *,struct inode*,struct buffer_head*,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int FUNC_13 (int *,struct inode*) ;
 int FUNC_14 (int *,struct inode*,int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 struct buffer_head* FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int *,struct inode*) ;

__attribute__((used)) static void FUNC_18(handle_t *VAR_2, struct inode *VAR_3,
          struct buffer_head *VAR_4,
          __le32 *VAR_5, __le32 *VAR_6, int VAR_7)
{
 ext4_fsblk_t VAR_8;
 __le32 *VAR_9;

 if (FUNC_11(VAR_2))
  return;

 if (VAR_7--) {
  struct buffer_head *VAR_10;
  int VAR_11 = FUNC_1(VAR_3->i_sb);
  VAR_9 = VAR_6;
  while (--VAR_9 >= VAR_5) {
   VAR_8 = FUNC_15(*VAR_9);
   if (!VAR_8)
    continue;

   if (!FUNC_7(FUNC_4(VAR_3->i_sb),
         VAR_8, 1)) {
    FUNC_2(VAR_3,
       "invalid indirect mapped "
       "block %lu (level %d)",
       (unsigned long) VAR_8, VAR_7);
    break;
   }


   VAR_10 = FUNC_16(VAR_3->i_sb, VAR_8);





   if (!VAR_10) {
    FUNC_3(VAR_3, VAR_8,
             "Read failure");
    continue;
   }


   FUNC_0(VAR_10, "free child branches");
   FUNC_18(VAR_2, VAR_3, VAR_10,
     (__le32 *) VAR_10->b_data,
     (__le32 *) VAR_10->b_data + VAR_11,
     VAR_7);
   FUNC_5(VAR_10);
   if (FUNC_11(VAR_2))
    return;
   if (FUNC_17(VAR_2, VAR_3)) {
    FUNC_13(VAR_2, VAR_3);
    FUNC_14(VAR_2, VAR_3,
         FUNC_6(VAR_3));
   }
   FUNC_8(VAR_2, VAR_3, ((void*)0), VAR_8, 1,
      VAR_1|
      VAR_0);

   if (VAR_4) {




    FUNC_0(VAR_4, "get_write_access");
    if (!FUNC_12(VAR_2,
           VAR_4)){
     *VAR_9 = 0;
     FUNC_0(VAR_4,
     "call ext4_handle_dirty_metadata");
     FUNC_10(VAR_2,
           VAR_3,
           VAR_4);
    }
   }
  }
 } else {

  FUNC_0(VAR_4, "free data blocks");
  FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
