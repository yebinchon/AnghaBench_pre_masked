
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct cifs_sb_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ CreationTime; scalar_t__ LastAccessTime; scalar_t__ LastWriteTime; scalar_t__ ChangeTime; scalar_t__ Attributes; } ;
typedef TYPE_1__ FILE_BASIC_INFO ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 int FUNC_2 (struct tcon_link*) ;
 int VAR_3 ;
 int FUNC_3 (struct tcon_link*) ;
 struct tcon_link* FUNC_4 (struct cifs_sb_info*) ;
 int FUNC_5 (unsigned int const,int ,struct cifs_sb_info*,char const*,int ,int ,int ,int ,TYPE_1__*,int ,int *) ;
 int FUNC_6 (struct tcon_link*) ;

int
FUNC_7(struct inode *VAR_4, const char *VAR_5,
     FILE_BASIC_INFO *VAR_6, const unsigned int VAR_7)
{
 struct cifs_sb_info *VAR_8 = FUNC_0(VAR_4->i_sb);
 struct tcon_link *VAR_9;
 int VAR_10;

 if ((VAR_6->CreationTime == 0) && (VAR_6->LastAccessTime == 0) &&
     (VAR_6->LastWriteTime == 0) && (VAR_6->ChangeTime == 0) &&
     (VAR_6->Attributes == 0))
  return 0;

 VAR_9 = FUNC_4(VAR_8);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_10 = FUNC_5(VAR_7, FUNC_6(VAR_9), VAR_8, VAR_5,
         VAR_2, VAR_1,
         0, VAR_0, VAR_6, VAR_3, ((void*)0));
 FUNC_3(VAR_9);
 return VAR_10;
}
