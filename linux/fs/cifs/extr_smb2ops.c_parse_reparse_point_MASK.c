
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reparse_symlink_data_buffer {int dummy; } ;
struct reparse_posix_data {int dummy; } ;
struct reparse_data_buffer {int ReparseTag; int ReparseDataLength; } ;
struct cifs_sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct reparse_posix_data*,int,char**,struct cifs_sb_info*) ;
 int FUNC_4 (struct reparse_symlink_data_buffer*,int,char**,struct cifs_sb_info*) ;

__attribute__((used)) static int
FUNC_5(struct reparse_data_buffer *VAR_3,
      u32 VAR_4, char **VAR_5,
      struct cifs_sb_info *VAR_6)
{
 if (VAR_4 < sizeof(struct reparse_data_buffer)) {
  FUNC_0(VAR_2, "reparse buffer is too small. Must be "
    "at least 8 bytes but was %d\n", VAR_4);
  return -VAR_0;
 }

 if (VAR_4 < FUNC_1(VAR_3->ReparseDataLength) +
     sizeof(struct reparse_data_buffer)) {
  FUNC_0(VAR_2, "srv returned invalid reparse buf "
    "length: %d\n", VAR_4);
  return -VAR_0;
 }


 switch (FUNC_2(VAR_3->ReparseTag)) {
 case 129:
  return FUNC_3(
   (struct reparse_posix_data *)VAR_3,
   VAR_4, VAR_5, VAR_6);
 case 128:
  return FUNC_4(
   (struct reparse_symlink_data_buffer *)VAR_3,
   VAR_4, VAR_5, VAR_6);
 default:
  FUNC_0(VAR_2, "srv returned unknown symlink buffer "
    "tag:0x%08x\n", FUNC_2(VAR_3->ReparseTag));
  return -VAR_1;
 }
}
