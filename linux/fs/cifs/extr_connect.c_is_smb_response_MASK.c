
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct TCP_Server_Info {int response_q; int dstaddr; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 int FUNC_2 (int ,char*,unsigned char) ;
 int FUNC_3 (struct sockaddr*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool
FUNC_6(struct TCP_Server_Info *VAR_3, unsigned char VAR_4)
{





 switch (VAR_4) {
 case 128:

  return 1;
 case 129:
  FUNC_0(VAR_1, "RFC 1002 session keep alive\n");
  break;
 case 130:
  FUNC_0(VAR_1, "RFC 1002 positive session response\n");
  break;
 case 131:




  FUNC_0(VAR_1, "RFC 1002 negative session response\n");

  FUNC_4(1000);






  FUNC_3((struct sockaddr *)&VAR_3->dstaddr, VAR_0);
  FUNC_1(VAR_3);
  FUNC_5(&VAR_3->response_q);
  break;
 default:
  FUNC_2(VAR_2, "RFC 1002 unknown response type 0x%x\n", VAR_4);
  FUNC_1(VAR_3);
 }

 return 0;
}
