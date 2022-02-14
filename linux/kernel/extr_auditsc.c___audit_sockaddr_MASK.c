
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct audit_context {int sockaddr_len; void* sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audit_context* FUNC_0 () ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,void*,int) ;

int FUNC_3(int VAR_2, void *VAR_3)
{
 struct audit_context *VAR_4 = FUNC_0();

 if (!VAR_4->sockaddr) {
  void *VAR_5 = FUNC_1(sizeof(struct sockaddr_storage), VAR_1);
  if (!VAR_5)
   return -VAR_0;
  VAR_4->sockaddr = VAR_5;
 }

 VAR_4->sockaddr_len = VAR_2;
 FUNC_2(VAR_4->sockaddr, VAR_3, VAR_2);
 return 0;
}
