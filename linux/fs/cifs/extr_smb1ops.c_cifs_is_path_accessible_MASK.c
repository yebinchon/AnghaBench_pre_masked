
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int local_nls; } ;
typedef int FILE_ALL_INFO ;


 int FUNC_0 (unsigned int const,struct cifs_tcon*,char const*,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,char const*,int *,int ,int ) ;
 int FUNC_2 (struct cifs_sb_info*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(const unsigned int VAR_4, struct cifs_tcon *VAR_5,
   struct cifs_sb_info *VAR_6, const char *VAR_7)
{
 int VAR_8;
 FILE_ALL_INFO *VAR_9;

 VAR_9 = FUNC_4(sizeof(FILE_ALL_INFO), VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_9,
         0 , VAR_6->local_nls,
         FUNC_2(VAR_6));

 if (VAR_8 == -VAR_2 || VAR_8 == -VAR_0)
  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_7, VAR_9,
    VAR_6->local_nls, FUNC_2(VAR_6));
 FUNC_3(VAR_9);
 return VAR_8;
}
