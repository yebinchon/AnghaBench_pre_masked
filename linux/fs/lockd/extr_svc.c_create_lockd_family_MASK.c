
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int dummy; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;


 int FUNC_0 (struct svc_serv*,char*,struct net*,int const,int ,struct cred const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct svc_serv *VAR_2, struct net *VAR_3,
          const int VAR_4, const struct cred *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, "udp", VAR_3, VAR_4, VAR_1,
   VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_2, "tcp", VAR_3, VAR_4, VAR_0,
   VAR_5);
}
