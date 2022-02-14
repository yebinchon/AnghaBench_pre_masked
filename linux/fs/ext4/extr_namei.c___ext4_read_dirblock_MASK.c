
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; int i_ino; } ;
struct ext4_dir_entry {int rec_len; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef scalar_t__ dirblock_type_t ;
struct TYPE_5__ {int comm; } ;
struct TYPE_4__ {int s_blocksize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buffer_head* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (TYPE_1__*,char const*,unsigned int,char*,int ,unsigned long,int ,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 TYPE_2__* VAR_4 ;
 struct buffer_head* FUNC_6 (int *,struct inode*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct inode*,struct ext4_dir_entry*) ;
 int FUNC_9 (struct inode*,char const*,unsigned int,scalar_t__,char*,...) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_14(struct inode *VAR_5,
      ext4_lblk_t VAR_6,
      dirblock_type_t VAR_7,
      const char *VAR_8,
      unsigned int VAR_9)
{
 struct buffer_head *VAR_10;
 struct ext4_dir_entry *VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_6(((void*)0), VAR_5, VAR_6, 0);
 if (FUNC_1(VAR_10)) {
  FUNC_3(VAR_5->i_sb, VAR_8, VAR_9,
          "inode #%lu: lblock %lu: comm %s: "
          "error %ld reading directory block",
          VAR_5->i_ino, (unsigned long)VAR_6,
          VAR_4->comm, FUNC_2(VAR_10));

  return VAR_10;
 }
 if (!VAR_10 && (VAR_7 == VAR_3 || VAR_7 == VAR_0)) {
  FUNC_9(VAR_5, VAR_8, VAR_9, VAR_6,
     "Directory hole found for htree %s block",
     (VAR_7 == VAR_3) ? "index" : "leaf");
  return FUNC_0(-VAR_2);
 }
 if (!VAR_10)
  return ((void*)0);
 VAR_11 = (struct ext4_dir_entry *) VAR_10->b_data;

 if (FUNC_12(VAR_5)) {
  if (VAR_6 == 0)
   VAR_12 = 1;
  else if (FUNC_11(VAR_11->rec_len,
      VAR_5->i_sb->s_blocksize) ==
    VAR_5->i_sb->s_blocksize)
   VAR_12 = 1;
 }
 if (!VAR_12 && VAR_7 == VAR_3) {
  FUNC_9(VAR_5, VAR_8, VAR_9, VAR_6,
         "directory leaf block found instead of index block");
  FUNC_4(VAR_10);
  return FUNC_0(-VAR_2);
 }
 if (!FUNC_10(VAR_5->i_sb) ||
     FUNC_5(VAR_10))
  return VAR_10;






 if (VAR_12 && VAR_7 == VAR_3) {
  if (FUNC_8(VAR_5, VAR_11))
   FUNC_13(VAR_10);
  else {
   FUNC_9(VAR_5, VAR_8, VAR_9, VAR_6,
      "Directory index failed checksum");
   FUNC_4(VAR_10);
   return FUNC_0(-VAR_1);
  }
 }
 if (!VAR_12) {
  if (FUNC_7(VAR_5, VAR_10))
   FUNC_13(VAR_10);
  else {
   FUNC_9(VAR_5, VAR_8, VAR_9, VAR_6,
      "Directory block failed checksum");
   FUNC_4(VAR_10);
   return FUNC_0(-VAR_1);
  }
 }
 return VAR_10;
}
