
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int dummy; } ;
struct svc_serv {int dummy; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct svc_serv*,char const*,struct net*,int const,unsigned short const,int ,struct cred const*) ;
 struct svc_xprt* FUNC_1 (struct svc_serv*,char const*,struct net*,int const,int ) ;
 int FUNC_2 (struct svc_xprt*) ;

__attribute__((used)) static int FUNC_3(struct svc_serv *VAR_1, const char *VAR_2,
     struct net *VAR_3, const int VAR_4,
     const unsigned short VAR_5,
     const struct cred *VAR_6)
{
 struct svc_xprt *VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_7 == ((void*)0))
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_0, VAR_6);
 FUNC_2(VAR_7);
 return 0;
}
