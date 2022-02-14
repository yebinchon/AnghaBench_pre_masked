
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct TCP_Server_Info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* is_path_accessible ) (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,char*) ;} ;


 char FUNC_0 (struct cifs_sb_info*) ;
 int FUNC_1 (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,char*) ;
 int FUNC_2 (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,char*) ;

__attribute__((used)) static int
FUNC_3(struct TCP_Server_Info *VAR_0,
     unsigned int VAR_1,
     struct cifs_tcon *VAR_2,
     struct cifs_sb_info *VAR_3,
     char *VAR_4,
     int VAR_5)
{
 int VAR_6;
 char *VAR_7;
 char VAR_8, VAR_9;
 int VAR_10 = VAR_5 ? 1 : 0;

 VAR_8 = FUNC_0(VAR_3);
 VAR_7 = VAR_4;

 VAR_6 = VAR_0->ops->is_path_accessible(VAR_1, VAR_2, VAR_3, "");
 while (VAR_6 == 0) {

  while (*VAR_7 == VAR_8)
   VAR_7++;
  if (!*VAR_7)
   break;

  while (*VAR_7 && *VAR_7 != VAR_8)
   VAR_7++;




  if (VAR_10) {
   VAR_10 = 0;
   continue;
  }




  VAR_9 = *VAR_7;
  *VAR_7 = 0;
  VAR_6 = VAR_0->ops->is_path_accessible(VAR_1, VAR_2, VAR_3,
           VAR_4);
  *VAR_7 = VAR_9;
 }
 return VAR_6;
}
