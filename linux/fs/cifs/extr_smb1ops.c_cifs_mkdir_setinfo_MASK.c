
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int local_nls; } ;
struct cifsInodeInfo {int cifsAttrs; } ;
typedef int info ;
struct TYPE_4__ {int Attributes; } ;
typedef TYPE_1__ FILE_BASIC_INFO ;


 int VAR_0 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,char const*,TYPE_1__*,int ,int ) ;
 struct cifsInodeInfo* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct cifs_sb_info*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct inode *VAR_1, const char *VAR_2,
     struct cifs_sb_info *VAR_3, struct cifs_tcon *VAR_4,
     const unsigned int VAR_5)
{
 FILE_BASIC_INFO VAR_6;
 struct cifsInodeInfo *VAR_7;
 u32 VAR_8;
 int VAR_9;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_7 = FUNC_1(VAR_1);
 VAR_8 = VAR_7->cifsAttrs|VAR_0;
 VAR_6.Attributes = FUNC_3(VAR_8);
 VAR_9 = FUNC_0(VAR_5, VAR_4, VAR_2, &VAR_6, VAR_3->local_nls,
    FUNC_2(VAR_3));
 if (VAR_9 == 0)
  VAR_7->cifsAttrs = VAR_8;
}
