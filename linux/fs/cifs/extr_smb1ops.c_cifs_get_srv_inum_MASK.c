
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int local_nls; } ;
typedef int FILE_ALL_INFO ;


 int FUNC_0 (unsigned int const,struct cifs_tcon*,char const*,int *,int ,int ) ;
 int FUNC_1 (struct cifs_sb_info*) ;

__attribute__((used)) static int
FUNC_2(const unsigned int VAR_0, struct cifs_tcon *VAR_1,
    struct cifs_sb_info *VAR_2, const char *VAR_3,
    u64 *VAR_4, FILE_ALL_INFO *VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4,
         VAR_2->local_nls,
         FUNC_1(VAR_2));
}
