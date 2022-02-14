
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_app {int dummy; } ;
struct net_device {int name; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct nfp_app*,int ,struct nfp_app*) ;
 int FUNC_1 (struct net_device*,int ,struct nfp_app*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nfp_app*,char*,int ) ;
 int VAR_3 ;

int FUNC_4(struct nfp_app *VAR_4,
           struct net_device *VAR_5,
           unsigned long VAR_6)
{
 int VAR_7;

 if (!FUNC_2(VAR_5))
  return VAR_2;

 if (VAR_6 == VAR_0) {
  VAR_7 = FUNC_0(VAR_5, VAR_4,
          VAR_3,
          VAR_4);
  if (VAR_7)
   FUNC_3(VAR_4,
          "Indirect block reg failed - %s\n",
          VAR_5->name);
 } else if (VAR_6 == VAR_1) {
  FUNC_1(VAR_5,
      VAR_3,
      VAR_4);
 }

 return VAR_2;
}
