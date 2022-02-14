
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ posix_extensions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct cifs_sb_info*) ;
 scalar_t__ FUNC_1 (struct cifs_sb_info*) ;
 int * FUNC_2 (char const*,int ,int*,int ,int) ;

__le16 *
FUNC_3(const char *VAR_6, struct cifs_sb_info *VAR_7)
{
 int VAR_8;
 const char *VAR_9;
 __le16 *VAR_10;
 int VAR_11;

 if (VAR_7->mnt_cifs_flags & VAR_0)
  VAR_11 = VAR_4;
 else if (VAR_7->mnt_cifs_flags & VAR_1)
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_2;


 if (VAR_6[0] == '\\')
  VAR_9 = VAR_6 + 1;


 else if (FUNC_1(VAR_7) &&
   FUNC_0(VAR_7)->posix_extensions &&
   (VAR_6[0] == '/')) {
  VAR_9 = VAR_6 + 1;
 } else
  VAR_9 = VAR_6;

 VAR_10 = FUNC_2(VAR_9, VAR_3, &VAR_8,
       VAR_7->local_nls, VAR_11);
 return VAR_10;
}
