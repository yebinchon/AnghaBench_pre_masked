
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_sb; } ;
struct ext4_extent_header {int eh_entries; } ;
struct ext4_extent {int ee_block; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef int ext4_fsblk_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_journal_inum; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct ext4_extent* FUNC_2 (struct ext4_extent_header*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char const*,unsigned int,struct inode*,struct ext4_extent_header*,int,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*,scalar_t__,int,int ,unsigned int) ;
 int FUNC_8 (struct ext4_extent*) ;
 scalar_t__ FUNC_9 (struct ext4_extent*) ;
 int FUNC_10 (struct ext4_extent*) ;
 int FUNC_11 (int ) ;
 struct ext4_extent_header* FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct buffer_head*) ;
 struct buffer_head* FUNC_16 (int ,int ,int) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct inode*,int ,int ) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static struct buffer_head *
FUNC_20(const char *VAR_9, unsigned int VAR_10,
    struct inode *VAR_11, ext4_fsblk_t VAR_12, int VAR_13,
    int VAR_14)
{
 struct buffer_head *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_16(VAR_11->i_sb, VAR_12, VAR_8 | VAR_6);
 if (FUNC_19(!VAR_15))
  return FUNC_0(-VAR_0);

 if (!FUNC_5(VAR_15)) {
  FUNC_18(VAR_11, VAR_12, VAR_7);
  VAR_16 = FUNC_4(VAR_15);
  if (VAR_16 < 0)
   goto errout;
 }
 if (FUNC_6(VAR_15) && !(VAR_14 & VAR_1))
  return VAR_15;
 if (!FUNC_11(VAR_11->i_sb) ||
     (VAR_11->i_ino !=
      FUNC_14(FUNC_1(VAR_11->i_sb)->s_es->s_journal_inum))) {
  VAR_16 = FUNC_3(VAR_9, VAR_10, VAR_11,
           FUNC_12(VAR_15), VAR_13, VAR_12);
  if (VAR_16)
   goto errout;
 }
 FUNC_17(VAR_15);



 if (!(VAR_14 & VAR_2) && VAR_13 == 0) {
  struct ext4_extent_header *VAR_17 = FUNC_12(VAR_15);
  struct ext4_extent *VAR_18 = FUNC_2(VAR_17);
  ext4_lblk_t VAR_19 = 0;
  int VAR_20;

  for (VAR_20 = FUNC_13(VAR_17->eh_entries); VAR_20 > 0; VAR_20--, VAR_18++) {
   unsigned int VAR_21 = VAR_5;
   ext4_lblk_t VAR_22 = FUNC_14(VAR_18->ee_block);
   int VAR_23 = FUNC_8(VAR_18);

   if (VAR_19 && (VAR_19 != VAR_22))
    FUNC_7(VAR_11, VAR_19,
           VAR_22 - VAR_19, ~0,
           VAR_3);

   if (FUNC_9(VAR_18))
    VAR_21 = VAR_4;
   FUNC_7(VAR_11, VAR_22, VAR_23,
          FUNC_10(VAR_18), VAR_21);
   VAR_19 = VAR_22 + VAR_23;
  }
 }
 return VAR_15;
errout:
 FUNC_15(VAR_15);
 return FUNC_0(VAR_16);

}
