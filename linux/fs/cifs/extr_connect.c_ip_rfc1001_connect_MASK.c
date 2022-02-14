
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_hdr {int smb_buf_length; } ;
struct TYPE_3__ {int called_len; int calling_len; scalar_t__ scope2; scalar_t__ scope1; int calling_name; int called_name; } ;
struct TYPE_4__ {TYPE_1__ session_req; } ;
struct rfc1002_session_packet {TYPE_2__ trailer; } ;
struct TCP_Server_Info {scalar_t__* server_RFC1001_name; scalar_t__* workstation_RFC1001_name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rfc1002_session_packet*) ;
 struct rfc1002_session_packet* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct TCP_Server_Info*,struct smb_hdr*,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int
FUNC_6(struct TCP_Server_Info *VAR_3)
{
 int VAR_4 = 0;





 struct rfc1002_session_packet *VAR_5;
 struct smb_hdr *VAR_6;
 VAR_5 = FUNC_2(sizeof(struct rfc1002_session_packet),
          VAR_1);
 if (VAR_5) {
  VAR_5->trailer.session_req.called_len = 32;

  if (VAR_3->server_RFC1001_name[0] != 0)
   FUNC_3(VAR_5->trailer.
          session_req.called_name,
          VAR_3->server_RFC1001_name,
          VAR_2);
  else
   FUNC_3(VAR_5->trailer.
          session_req.called_name,
          VAR_0,
          VAR_2);

  VAR_5->trailer.session_req.calling_len = 32;





  if (VAR_3->workstation_RFC1001_name[0] != 0)
   FUNC_3(VAR_5->trailer.
          session_req.calling_name,
          VAR_3->workstation_RFC1001_name,
          VAR_2);
  else
   FUNC_3(VAR_5->trailer.
          session_req.calling_name,
          "LINUX_CIFS_CLNT",
          VAR_2);

  VAR_5->trailer.session_req.scope1 = 0;
  VAR_5->trailer.session_req.scope2 = 0;
  VAR_6 = (struct smb_hdr *)VAR_5;


  VAR_6->smb_buf_length = FUNC_0(0x81000044);
  VAR_4 = FUNC_4(VAR_3, VAR_6, 0x44);
  FUNC_1(VAR_5);
  FUNC_5(1000, 2000);
 }





 return VAR_4;
}
