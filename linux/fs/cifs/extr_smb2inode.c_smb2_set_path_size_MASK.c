
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
typedef int __u64 ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,struct cifs_sb_info*,char const*,int ,int ,int ,int ,int *,int ,int *) ;

int
FUNC_2(const unsigned int VAR_4, struct cifs_tcon *VAR_5,
     const char *VAR_6, __u64 VAR_7,
     struct cifs_sb_info *VAR_8, bool VAR_9)
{
 __le64 VAR_10 = FUNC_0(VAR_7);

 return FUNC_1(VAR_4, VAR_5, VAR_8, VAR_6,
    VAR_2, VAR_1, 0, VAR_0,
    &VAR_10, VAR_3, ((void*)0));
}
