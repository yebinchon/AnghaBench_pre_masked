
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct smb_vol {int local_nls; int sign; int sectype; int linux_uid; int cred_uid; scalar_t__ domainauto; scalar_t__ domainname; scalar_t__ password; scalar_t__ username; } ;
struct cifs_ses {int smb_ses_list; int session_mutex; int sign; int sectype; int linux_uid; int cred_uid; scalar_t__ domainAuto; void* domainName; void* password; void* user_name; int serverName; struct TCP_Server_Info* server; scalar_t__ need_reconnect; int status; } ;
struct TYPE_2__ {scalar_t__ ss_family; } ;
struct TCP_Server_Info {int smb_ses_list; TYPE_1__ dstaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cifs_ses* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 struct cifs_ses* FUNC_2 (struct TCP_Server_Info*,struct smb_vol*) ;
 int FUNC_3 (unsigned int,struct cifs_ses*) ;
 int FUNC_4 (struct cifs_ses*) ;
 int FUNC_5 (struct TCP_Server_Info*,int ) ;
 int FUNC_6 (struct cifs_ses*,struct smb_vol*) ;
 int FUNC_7 (unsigned int,struct cifs_ses*,int ) ;
 int VAR_4 ;
 int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 () ;
 void* FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct cifs_ses* FUNC_14 () ;
 int FUNC_15 (struct cifs_ses*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*,int *) ;

struct cifs_ses *
FUNC_19(struct TCP_Server_Info *VAR_5, struct smb_vol *VAR_6)
{
 int VAR_7 = -VAR_1;
 unsigned int VAR_8;
 struct cifs_ses *VAR_9;
 struct sockaddr_in *VAR_10 = (struct sockaddr_in *)&VAR_5->dstaddr;
 struct sockaddr_in6 *VAR_11 = (struct sockaddr_in6 *)&VAR_5->dstaddr;

 VAR_8 = FUNC_9();

 VAR_9 = FUNC_2(VAR_5, VAR_6);
 if (VAR_9) {
  FUNC_1(VAR_2, "Existing smb sess found (status=%d)\n",
    VAR_9->status);

  FUNC_12(&VAR_9->session_mutex);
  VAR_7 = FUNC_3(VAR_8, VAR_9);
  if (VAR_7) {
   FUNC_13(&VAR_9->session_mutex);

   FUNC_4(VAR_9);
   FUNC_8(VAR_8);
   return FUNC_0(VAR_7);
  }
  if (VAR_9->need_reconnect) {
   FUNC_1(VAR_2, "Session needs reconnect\n");
   VAR_7 = FUNC_7(VAR_8, VAR_9,
      VAR_6->local_nls);
   if (VAR_7) {
    FUNC_13(&VAR_9->session_mutex);

    FUNC_4(VAR_9);
    FUNC_8(VAR_8);
    return FUNC_0(VAR_7);
   }
  }
  FUNC_13(&VAR_9->session_mutex);


  FUNC_5(VAR_5, 0);
  FUNC_8(VAR_8);
  return VAR_9;
 }

 FUNC_1(VAR_2, "Existing smb sess not found\n");
 VAR_9 = FUNC_14();
 if (VAR_9 == ((void*)0))
  goto get_ses_fail;


 VAR_9->server = VAR_5;
 if (VAR_5->dstaddr.ss_family == VAR_0)
  FUNC_18(VAR_9->serverName, "%pI6", &VAR_11->sin6_addr);
 else
  FUNC_18(VAR_9->serverName, "%pI4", &VAR_10->sin_addr);

 if (VAR_6->username) {
  VAR_9->user_name = FUNC_10(VAR_6->username, VAR_3);
  if (!VAR_9->user_name)
   goto get_ses_fail;
 }


 if (VAR_6->password) {
  VAR_9->password = FUNC_10(VAR_6->password, VAR_3);
  if (!VAR_9->password)
   goto get_ses_fail;
 }
 if (VAR_6->domainname) {
  VAR_9->domainName = FUNC_10(VAR_6->domainname, VAR_3);
  if (!VAR_9->domainName)
   goto get_ses_fail;
 }
 if (VAR_6->domainauto)
  VAR_9->domainAuto = VAR_6->domainauto;
 VAR_9->cred_uid = VAR_6->cred_uid;
 VAR_9->linux_uid = VAR_6->linux_uid;

 VAR_9->sectype = VAR_6->sectype;
 VAR_9->sign = VAR_6->sign;
 FUNC_12(&VAR_9->session_mutex);
 VAR_7 = FUNC_3(VAR_8, VAR_9);
 if (!VAR_7)
  VAR_7 = FUNC_7(VAR_8, VAR_9, VAR_6->local_nls);
 FUNC_13(&VAR_9->session_mutex);
 if (VAR_7)
  goto get_ses_fail;


 FUNC_16(&VAR_4);
 FUNC_11(&VAR_9->smb_ses_list, &VAR_5->smb_ses_list);
 FUNC_17(&VAR_4);

 FUNC_8(VAR_8);

 FUNC_6(VAR_9, VAR_6);

 return VAR_9;

get_ses_fail:
 FUNC_15(VAR_9);
 FUNC_8(VAR_8);
 return FUNC_0(VAR_7);
}
