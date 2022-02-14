
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int s_bdev; } ;
struct ext4_super_block {int s_journal_dev; int s_journal_inum; } ;
struct TYPE_8__ {int j_flags; } ;
typedef TYPE_1__ journal_t ;
typedef scalar_t__ dev_t ;
struct TYPE_9__ {TYPE_1__* s_journal; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct super_block*,struct ext4_super_block*) ;
 int FUNC_5 (struct super_block*,int) ;
 TYPE_1__* FUNC_6 (struct super_block*,scalar_t__) ;
 TYPE_1__* FUNC_7 (struct super_block*,unsigned int) ;
 int FUNC_8 (struct super_block*) ;
 scalar_t__ FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*,int ,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int ,int ) ;
 unsigned long FUNC_16 (int ) ;
 int FUNC_17 (char*,char*,int ) ;
 scalar_t__ FUNC_18 (unsigned long) ;
 scalar_t__ FUNC_19 (struct super_block*) ;

__attribute__((used)) static int FUNC_20(struct super_block *VAR_8,
        struct ext4_super_block *VAR_9,
        unsigned long VAR_10)
{
 journal_t *VAR_11;
 unsigned int VAR_12 = FUNC_16(VAR_9->s_journal_inum);
 dev_t VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 FUNC_0(!FUNC_8(VAR_8));

 if (VAR_10 &&
     VAR_10 != FUNC_16(VAR_9->s_journal_dev)) {
  FUNC_10(VAR_8, VAR_7, "external journal device major/minor "
   "numbers have changed");
  VAR_13 = FUNC_18(VAR_10);
 } else
  VAR_13 = FUNC_18(FUNC_16(VAR_9->s_journal_dev));

 VAR_15 = FUNC_2(VAR_8->s_bdev);






 if (FUNC_9(VAR_8)) {
  if (FUNC_19(VAR_8)) {
   FUNC_10(VAR_8, VAR_7, "INFO: recovery "
     "required on readonly filesystem");
   if (VAR_15) {
    FUNC_10(VAR_8, VAR_6, "write access "
     "unavailable, cannot proceed "
     "(try mounting with noload)");
    return -VAR_1;
   }
   FUNC_10(VAR_8, VAR_7, "write access will "
          "be enabled during recovery");
  }
 }

 if (VAR_12 && VAR_13) {
  FUNC_10(VAR_8, VAR_6, "filesystem has both journal "
         "and inode journals!");
  return -VAR_0;
 }

 if (VAR_12) {
  if (!(VAR_11 = FUNC_7(VAR_8, VAR_12)))
   return -VAR_0;
 } else {
  if (!(VAR_11 = FUNC_6(VAR_8, VAR_13)))
   return -VAR_0;
 }

 if (!(VAR_11->j_flags & VAR_5))
  FUNC_10(VAR_8, VAR_7, "barriers disabled");

 if (!FUNC_9(VAR_8))
  VAR_14 = FUNC_13(VAR_11, !VAR_15);
 if (!VAR_14) {
  char *VAR_16 = FUNC_15(VAR_2, VAR_4);
  if (VAR_16)
   FUNC_17(VAR_16, ((char *) VAR_9) +
          VAR_3, VAR_2);
  VAR_14 = FUNC_12(VAR_11);
  if (VAR_16)
   FUNC_17(((char *) VAR_9) + VAR_3,
          VAR_16, VAR_2);
  FUNC_14(VAR_16);
 }

 if (VAR_14) {
  FUNC_10(VAR_8, VAR_6, "error loading journal");
  FUNC_11(VAR_11);
  return VAR_14;
 }

 FUNC_1(VAR_8)->s_journal = VAR_11;
 FUNC_4(VAR_8, VAR_9);

 if (!VAR_15 && VAR_10 &&
     VAR_10 != FUNC_16(VAR_9->s_journal_dev)) {
  VAR_9->s_journal_dev = FUNC_3(VAR_10);


  FUNC_5(VAR_8, 1);
 }

 return 0;
}
