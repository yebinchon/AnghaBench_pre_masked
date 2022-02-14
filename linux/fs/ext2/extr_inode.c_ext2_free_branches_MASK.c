
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,char*,char*,int ,unsigned long) ;
 int FUNC_3 (struct inode*,unsigned long,int) ;
 int FUNC_4 (struct inode*,scalar_t__*,scalar_t__*) ;
 unsigned long FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 struct buffer_head* FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_0, __le32 *VAR_1, __le32 *VAR_2, int VAR_3)
{
 struct buffer_head * VAR_4;
 unsigned long VAR_5;

 if (VAR_3--) {
  int VAR_6 = FUNC_0(VAR_0->i_sb);
  for ( ; VAR_1 < VAR_2 ; VAR_1++) {
   VAR_5 = FUNC_5(*VAR_1);
   if (!VAR_5)
    continue;
   *VAR_1 = 0;
   VAR_4 = FUNC_7(VAR_0->i_sb, VAR_5);




   if (!VAR_4) {
    FUNC_2(VAR_0->i_sb, "ext2_free_branches",
     "Read failure, inode=%ld, block=%ld",
     VAR_0->i_ino, VAR_5);
    continue;
   }
   FUNC_8(VAR_0,
        (__le32*)VAR_4->b_data,
        (__le32*)VAR_4->b_data + VAR_6,
        VAR_3);
   FUNC_1(VAR_4);
   FUNC_3(VAR_0, VAR_5, 1);
   FUNC_6(VAR_0);
  }
 } else
  FUNC_4(VAR_0, VAR_1, VAR_2);
}
