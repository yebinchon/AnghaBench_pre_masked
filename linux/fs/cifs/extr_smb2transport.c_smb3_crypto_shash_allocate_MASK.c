
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_secmech {int sdeschmacsha256; int hmacsha256; int sdesccmacaes; int cmacaes; } ;
struct TCP_Server_Info {struct cifs_secmech secmech; } ;


 int FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct TCP_Server_Info *VAR_0)
{
 struct cifs_secmech *VAR_1 = &VAR_0->secmech;
 int VAR_2;

 VAR_2 = FUNC_0("hmac(sha256)",
        &VAR_1->hmacsha256,
        &VAR_1->sdeschmacsha256);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_0("cmac(aes)", &VAR_1->cmacaes, &VAR_1->sdesccmacaes);
 if (VAR_2)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_1->hmacsha256, &VAR_1->sdeschmacsha256);
 return VAR_2;
}
