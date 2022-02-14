
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sdeschmacsha256; int hmacsha256; } ;
struct TCP_Server_Info {TYPE_1__ secmech; } ;


 int FUNC_0 (char*,int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct TCP_Server_Info *VAR_0)
{
 return FUNC_0("hmac(sha256)",
          &VAR_0->secmech.hmacsha256,
          &VAR_0->secmech.sdeschmacsha256);
}
