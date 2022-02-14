
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct validate_negotiate_info_rsp {scalar_t__ SecurityMode; scalar_t__ Dialect; int Capabilities; scalar_t__ DialectCount; scalar_t__* Dialects; int Guid; } ;
struct validate_negotiate_info_req {scalar_t__ SecurityMode; scalar_t__ Dialect; int Capabilities; scalar_t__ DialectCount; scalar_t__* Dialects; int Guid; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct TCP_Server_Info {int dialect; int sec_mode; int capabilities; TYPE_2__* vals; int client_guid; } ;
struct TYPE_4__ {int protocol_id; int version_string; int req_capabilities; } ;
struct TYPE_3__ {int session_flags; scalar_t__ sign; int * user_name; struct TCP_Server_Info* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int,char*,int,int,char**,int*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_23 ;
 int FUNC_5 (struct validate_negotiate_info_rsp*) ;
 struct validate_negotiate_info_rsp* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;

int FUNC_10(const unsigned int VAR_24, struct cifs_tcon *VAR_25)
{
 int VAR_26;
 struct validate_negotiate_info_req *VAR_27;
 struct validate_negotiate_info_rsp *VAR_28 = ((void*)0);
 u32 VAR_29;
 u32 VAR_30;
 struct TCP_Server_Info *VAR_31 = VAR_25->ses->server;

 FUNC_1(VAR_6, "validate negotiate\n");


 if (VAR_31->dialect == VAR_19)
  return 0;
 if (VAR_25->ses->session_flags & VAR_15)
  return 0;

 if (VAR_25->ses->user_name == ((void*)0)) {
  FUNC_1(VAR_6, "Can't validate negotiate: null user mount\n");
  return 0;
 }

 if (VAR_25->ses->session_flags & VAR_16)
  FUNC_2(VAR_22, "Unexpected null user (anonymous) auth flag sent by server\n");

 VAR_27 = FUNC_6(sizeof(*VAR_27), VAR_7);
 if (!VAR_27)
  return -VAR_3;

 VAR_27->Capabilities =
   FUNC_4(VAR_31->vals->req_capabilities);
 FUNC_8(VAR_27->Guid, VAR_31->client_guid,
     VAR_10);

 if (VAR_25->ses->sign)
  VAR_27->SecurityMode =
   FUNC_3(VAR_13);
 else if (VAR_23 & VAR_1)
  VAR_27->SecurityMode =
   FUNC_3(VAR_12);
 else
  VAR_27->SecurityMode = 0;


 if (FUNC_9(VAR_31->vals->version_string,
  VAR_20) == 0) {
  VAR_27->Dialects[0] = FUNC_3(VAR_18);
  VAR_27->Dialects[1] = FUNC_3(VAR_17);
  VAR_27->DialectCount = FUNC_3(2);

  VAR_30 = sizeof(*VAR_27) -
    (2 * sizeof(VAR_27->Dialects[0]));
 } else if (FUNC_9(VAR_31->vals->version_string,
  VAR_21) == 0) {
  VAR_27->Dialects[0] = FUNC_3(VAR_9);
  VAR_27->Dialects[1] = FUNC_3(VAR_18);
  VAR_27->Dialects[2] = FUNC_3(VAR_17);
  VAR_27->Dialects[3] = FUNC_3(VAR_19);
  VAR_27->DialectCount = FUNC_3(4);

  VAR_30 = sizeof(*VAR_27);
 } else {

  VAR_27->Dialects[0] =
   FUNC_3(VAR_31->vals->protocol_id);
  VAR_27->DialectCount = FUNC_3(1);

  VAR_30 = sizeof(*VAR_27) -
    sizeof(VAR_27->Dialects[0]) * 2;
 }

 VAR_26 = FUNC_0(VAR_24, VAR_25, VAR_8, VAR_8,
  VAR_5, 1 ,
  (char *)VAR_27, VAR_30, VAR_0,
  (char **)&VAR_28, &VAR_29);
 if (VAR_26 == -VAR_4) {




  FUNC_2(VAR_22, "Server does not support validate negotiate\n");
  VAR_26 = 0;
  goto out_free_inbuf;
 } else if (VAR_26 != 0) {
  FUNC_2(VAR_22, "validate protocol negotiate failed: %d\n", VAR_26);
  VAR_26 = -VAR_2;
  goto out_free_inbuf;
 }

 VAR_26 = -VAR_2;
 if (VAR_29 != sizeof(*VAR_28)) {
  FUNC_2(VAR_22, "invalid protocol negotiate response size: %d\n",
    VAR_29);


  if (VAR_29 > VAR_0 || VAR_29 < sizeof(*VAR_28))
   goto out_free_rsp;
 }


 if (VAR_28->Dialect != FUNC_3(VAR_31->dialect))
  goto vneg_out;

 if (VAR_28->SecurityMode != FUNC_3(VAR_31->sec_mode))
  goto vneg_out;



 if ((FUNC_7(VAR_28->Capabilities) | VAR_14 |
       VAR_11) != VAR_31->capabilities)
  goto vneg_out;


 VAR_26 = 0;
 FUNC_1(VAR_6, "validate negotiate info successful\n");
 goto out_free_rsp;

vneg_out:
 FUNC_2(VAR_22, "protocol revalidation - security settings mismatch\n");
out_free_rsp:
 FUNC_5(VAR_28);
out_free_inbuf:
 FUNC_5(VAR_27);
 return VAR_26;
}
