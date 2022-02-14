
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_search_info {int dummy; } ;
struct cifs_fid {int netfid; } ;
typedef int __u16 ;


 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,struct cifs_search_info*) ;

__attribute__((used)) static int
FUNC_1(const unsigned int VAR_0, struct cifs_tcon *VAR_1,
      struct cifs_fid *VAR_2, __u16 VAR_3,
      struct cifs_search_info *VAR_4)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->netfid, VAR_3, VAR_4);
}
