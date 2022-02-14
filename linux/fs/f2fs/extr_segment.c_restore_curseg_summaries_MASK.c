
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct f2fs_journal {int dummy; } ;
struct TYPE_2__ {struct f2fs_journal* journal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;
 int FUNC_4 (struct f2fs_sb_info*,int ,int,int ,int) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_6 (struct f2fs_journal*) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_9 (struct f2fs_journal*) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct f2fs_sb_info*,int,int) ;

__attribute__((used)) static int FUNC_12(struct f2fs_sb_info *VAR_10)
{
 struct f2fs_journal *VAR_11 = FUNC_0(VAR_10, VAR_1)->journal;
 struct f2fs_journal *VAR_12 = FUNC_0(VAR_10, VAR_3)->journal;
 int VAR_13 = VAR_3;
 int VAR_14;

 if (FUNC_5(VAR_10, VAR_0)) {
  int VAR_15 = FUNC_3(VAR_10, 1);

  if (VAR_15 >= 2)
   FUNC_4(VAR_10, FUNC_10(VAR_10), VAR_15,
       VAR_6, 1);


  VAR_14 = FUNC_7(VAR_10);
  if (VAR_14)
   return VAR_14;
  VAR_13 = VAR_4;
 }

 if (FUNC_1(VAR_10))
  FUNC_4(VAR_10, FUNC_11(VAR_10, VAR_8, VAR_13),
     VAR_8 - VAR_13, VAR_6, 1);

 for (; VAR_13 <= VAR_2; VAR_13++) {
  VAR_14 = FUNC_8(VAR_10, VAR_13);
  if (VAR_14)
   return VAR_14;
 }


 if (FUNC_6(VAR_12) > VAR_7 ||
   FUNC_9(VAR_11) > VAR_9) {
  FUNC_2(VAR_10, "invalid journal entries nats %u sits %u\n",
    FUNC_6(VAR_12), FUNC_9(VAR_11));
  return -VAR_5;
 }

 return 0;
}
