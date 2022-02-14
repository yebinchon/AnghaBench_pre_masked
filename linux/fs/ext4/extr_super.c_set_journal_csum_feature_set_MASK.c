
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {int s_journal; } ;


 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ,int,int ,int) ;
 int FUNC_3 (int ,int,int ,int) ;
 scalar_t__ FUNC_4 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_6)
{
 int VAR_7 = 1;
 int VAR_8, VAR_9;
 struct ext4_sb_info *VAR_10 = FUNC_0(VAR_6);

 if (FUNC_1(VAR_6)) {

  VAR_8 = 0;
  VAR_9 = VAR_3;
 } else {

  VAR_8 = VAR_0;
  VAR_9 = 0;
 }

 FUNC_2(VAR_10->s_journal,
   VAR_0, 0,
   VAR_3 |
   VAR_2);
 if (FUNC_4(VAR_6, VAR_4)) {
  VAR_7 = FUNC_3(VAR_10->s_journal,
    VAR_8, 0,
    VAR_1 |
    VAR_9);
 } else if (FUNC_4(VAR_6, VAR_5)) {
  VAR_7 = FUNC_3(VAR_10->s_journal,
    VAR_8, 0,
    VAR_9);
  FUNC_2(VAR_10->s_journal, 0, 0,
    VAR_1);
 } else {
  FUNC_2(VAR_10->s_journal, 0, 0,
    VAR_1);
 }

 return VAR_7;
}
