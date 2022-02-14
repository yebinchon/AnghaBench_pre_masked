
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_ses {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cifs_ses*) ;
 int FUNC_1 (struct cifs_tcon*) ;
 int FUNC_2 (struct TCP_Server_Info*,int ) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static inline void FUNC_4(struct cifs_sb_info *VAR_1,
       unsigned int VAR_2,
       struct TCP_Server_Info *VAR_3,
       struct cifs_ses *VAR_4, struct cifs_tcon *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5)
  FUNC_1(VAR_5);
 else if (VAR_4)
  FUNC_0(VAR_4);
 else if (VAR_3)
  FUNC_2(VAR_3, 0);
 VAR_1->mnt_cifs_flags &= ~VAR_0;
 FUNC_3(VAR_2);
}
