
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct profi_priv {int power_on; struct anybuss_client* client; } ;
struct anybuss_client {int dummy; } ;


 int FUNC_0 (struct anybuss_client*,int) ;

__attribute__((used)) static int FUNC_1(struct profi_priv *VAR_0)
{
 struct anybuss_client *VAR_1 = VAR_0->client;

 FUNC_0(VAR_1, 0);
 VAR_0->power_on = 0;
 return 0;
}
