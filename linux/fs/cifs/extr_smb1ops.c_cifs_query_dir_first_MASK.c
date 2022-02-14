
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_search_info {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_fid {int netfid; } ;
typedef int __u16 ;


 int FUNC_0 (unsigned int const,struct cifs_tcon*,char const*,struct cifs_sb_info*,int *,int ,struct cifs_search_info*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(const unsigned int VAR_1, struct cifs_tcon *VAR_2,
       const char *VAR_3, struct cifs_sb_info *VAR_4,
       struct cifs_fid *VAR_5, __u16 VAR_6,
       struct cifs_search_info *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
      &VAR_5->netfid, VAR_6, VAR_7, 1);
 if (VAR_8)
  FUNC_1(VAR_0, "find first failed=%d\n", VAR_8);
 return VAR_8;
}
