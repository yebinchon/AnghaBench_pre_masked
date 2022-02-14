
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_controllen; int * msg_control; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; int ssocket; scalar_t__ smbd_conn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct TCP_Server_Info*) ;
 int FUNC_2 (struct TCP_Server_Info*) ;
 scalar_t__ FUNC_3 (struct msghdr*) ;
 scalar_t__ FUNC_4 (struct TCP_Server_Info*) ;
 int FUNC_5 (scalar_t__,struct msghdr*) ;
 int FUNC_6 (int ,struct msghdr*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (struct TCP_Server_Info*) ;

__attribute__((used)) static int
FUNC_10(struct TCP_Server_Info *VAR_8, struct msghdr *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;

 VAR_9->msg_control = ((void*)0);
 VAR_9->msg_controllen = 0;

 for (VAR_11 = 0; FUNC_3(VAR_9); VAR_11 += VAR_10) {
  FUNC_7();


  if (FUNC_9(VAR_8)) {
   FUNC_2(VAR_8);
   return -VAR_3;
  }

  if (FUNC_4(VAR_8))
   return -VAR_3;
  if (FUNC_1(VAR_8) && VAR_8->smbd_conn)
   VAR_10 = FUNC_5(VAR_8->smbd_conn, VAR_9);
  else
   VAR_10 = FUNC_6(VAR_8->ssocket, VAR_9, 0);

  if (VAR_8->tcpStatus == VAR_0)
   return -VAR_6;

  if (VAR_8->tcpStatus == VAR_1) {
   FUNC_2(VAR_8);
   return -VAR_3;
  }

  if (VAR_10 == -VAR_5 ||
      VAR_10 == -VAR_2 ||
      VAR_10 == -VAR_4) {





   FUNC_8(1000, 2000);
   VAR_10 = 0;
   continue;
  }

  if (VAR_10 <= 0) {
   FUNC_0(VAR_7, "Received no data or error: %d\n", VAR_10);
   FUNC_2(VAR_8);
   return -VAR_3;
  }
 }
 return VAR_11;
}
