
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {TYPE_1__* sv_ops; } ;
struct nfs_callback_data {scalar_t__ users; struct svc_serv* serv; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* svo_setup ) (struct svc_serv*,int *,int ) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,struct svc_serv*,struct net*) ;
 struct nfs_callback_data* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct svc_serv*,int *,int ) ;
 int FUNC_5 (struct svc_serv*) ;
 int FUNC_6 (struct svc_serv*) ;

void FUNC_7(int VAR_2, struct net *VAR_3)
{
 struct nfs_callback_data *VAR_4 = &VAR_0[VAR_2];
 struct svc_serv *VAR_5;

 FUNC_1(&VAR_1);
 VAR_5 = VAR_4->serv;
 FUNC_3(VAR_2, VAR_5, VAR_3);
 VAR_4->users--;
 if (VAR_4->users == 0) {
  FUNC_6(VAR_5);
  VAR_5->sv_ops->svo_setup(VAR_5, ((void*)0), 0);
  FUNC_5(VAR_5);
  FUNC_0("nfs_callback_down: service destroyed\n");
  VAR_4->serv = ((void*)0);
 }
 FUNC_2(&VAR_1);
}
