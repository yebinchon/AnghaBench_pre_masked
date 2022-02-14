
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct omfs_inode {scalar_t__ i_type; int i_name; int i_sibling; int i_head; } ;
struct inode {int i_sb; } ;
struct dir_context {int pos; } ;
struct buffer_head {scalar_t__ b_data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct dir_context*,int ,int ,int ,unsigned char) ;
 struct buffer_head* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct inode *VAR_4, struct dir_context *VAR_5,
  u64 VAR_6, int VAR_7)
{

 while (VAR_6 != ~0) {
  struct buffer_head *VAR_8 = FUNC_4(VAR_4->i_sb, VAR_6);
  struct omfs_inode *VAR_9;
  u64 VAR_10;
  unsigned char VAR_11;

  if (!VAR_8)
   return 1;

  VAR_9 = (struct omfs_inode *) VAR_8->b_data;
  if (FUNC_5(FUNC_0(VAR_4->i_sb), &VAR_9->i_head, VAR_6)) {
   FUNC_2(VAR_8);
   return 1;
  }

  VAR_10 = VAR_6;
  VAR_6 = FUNC_1(VAR_9->i_sibling);


  if (VAR_7) {
   VAR_7--;
   FUNC_2(VAR_8);
   continue;
  }

  VAR_11 = (VAR_9->i_type == VAR_2) ? VAR_0 : VAR_1;

  if (!FUNC_3(VAR_5, VAR_9->i_name,
         FUNC_6(VAR_9->i_name, VAR_3),
         VAR_10, VAR_11)) {
   FUNC_2(VAR_8);
   return 0;
  }
  FUNC_2(VAR_8);
  VAR_5->pos++;
 }
 return 1;
}
