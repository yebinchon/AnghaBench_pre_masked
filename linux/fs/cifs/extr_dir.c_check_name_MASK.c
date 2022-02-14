
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* name; } ;
struct dentry {TYPE_1__ d_name; int d_sb; } ;
struct TYPE_4__ {scalar_t__ MaxPathNameComponentLength; } ;
struct cifs_tcon {TYPE_2__ fsAttrInfo; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct dentry *VAR_4, struct cifs_tcon *VAR_5)
{
 struct cifs_sb_info *VAR_6 = FUNC_0(VAR_4->d_sb);
 int VAR_7;

 if (FUNC_3(VAR_5->fsAttrInfo.MaxPathNameComponentLength &&
       VAR_4->d_name.len >
       FUNC_2(VAR_5->fsAttrInfo.MaxPathNameComponentLength)))
  return -VAR_2;

 if (!(VAR_6->mnt_cifs_flags & VAR_0)) {
  for (VAR_7 = 0; VAR_7 < VAR_4->d_name.len; VAR_7++) {
   if (VAR_4->d_name.name[VAR_7] == '\\') {
    FUNC_1(VAR_3, "Invalid file name\n");
    return -VAR_1;
   }
  }
 }
 return 0;
}
