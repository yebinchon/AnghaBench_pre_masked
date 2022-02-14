
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct smbd_connection {int dummy; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smbd_connection* FUNC_0 (struct TCP_Server_Info*,struct sockaddr*,int) ;

struct smbd_connection *FUNC_1(
 struct TCP_Server_Info *VAR_2, struct sockaddr *VAR_3)
{
 struct smbd_connection *VAR_4;
 int VAR_5 = VAR_0;

try_again:
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_5);


 if (!VAR_4 && VAR_5 == VAR_0) {
  VAR_5 = VAR_1;
  goto try_again;
 }
 return VAR_4;
}
