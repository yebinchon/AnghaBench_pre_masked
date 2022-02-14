
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int dummy; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;


 scalar_t__ FUNC_0 (struct svc_serv*) ;
 int FUNC_1 (struct svc_serv*) ;
 struct svc_serv* FUNC_2 () ;
 int FUNC_3 (struct svc_serv*,struct net*) ;
 int FUNC_4 (struct svc_serv*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct svc_serv*,struct net*,struct cred const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (struct svc_serv*) ;

int FUNC_10(struct net *VAR_2, const struct cred *VAR_3)
{
 struct svc_serv *VAR_4;
 int VAR_5;

 FUNC_7(&VAR_0);

 VAR_4 = FUNC_2();
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto err_create;
 }

 VAR_5 = FUNC_6(VAR_4, VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_5();
  goto err_put;
 }

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0) {
  FUNC_3(VAR_4, VAR_2);
  goto err_put;
 }
 VAR_1++;




err_put:
 FUNC_9(VAR_4);
err_create:
 FUNC_8(&VAR_0);
 return VAR_5;
}
