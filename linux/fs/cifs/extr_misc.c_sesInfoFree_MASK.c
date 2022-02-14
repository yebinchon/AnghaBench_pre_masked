
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cifs_ses* response; } ;
struct cifs_ses {int iface_list; TYPE_1__ auth_key; int domainName; int user_name; struct cifs_ses* password; int serverNOS; int serverDomain; int serverOS; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cifs_ses*) ;
 int VAR_1 ;

void
FUNC_4(struct cifs_ses *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "Null buffer passed to sesInfoFree\n");
  return;
 }

 FUNC_0(&VAR_1);
 FUNC_2(VAR_2->serverOS);
 FUNC_2(VAR_2->serverDomain);
 FUNC_2(VAR_2->serverNOS);
 FUNC_3(VAR_2->password);
 FUNC_2(VAR_2->user_name);
 FUNC_2(VAR_2->domainName);
 FUNC_3(VAR_2->auth_key.response);
 FUNC_2(VAR_2->iface_list);
 FUNC_3(VAR_2);
}
