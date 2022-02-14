
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifsFileInfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cifs_tcon*,char const*,struct cifsFileInfo**) ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,char const*,char const*,struct cifs_sb_info*,int ,int ,struct cifsFileInfo*) ;

int
FUNC_2(const unsigned int VAR_2, struct cifs_tcon *VAR_3,
   const char *VAR_4, const char *VAR_5,
   struct cifs_sb_info *VAR_6)
{
 struct cifsFileInfo *VAR_7;

 FUNC_0(VAR_3, VAR_4, &VAR_7);

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_0, VAR_1, VAR_7);
}
