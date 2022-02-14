
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_app_bpf {int cmsg_cache_cnt; scalar_t__ cmsg_multi_ent; TYPE_1__* app; } ;
struct nfp_app {TYPE_3__* ctrl; struct nfp_app_bpf* priv; } ;
struct TYPE_5__ {scalar_t__ mtu; } ;
struct TYPE_6__ {TYPE_2__ dp; } ;
struct TYPE_4__ {int cpp; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app_bpf*) ;
 scalar_t__ FUNC_1 (struct nfp_app_bpf*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct nfp_app *VAR_1)
{
 struct nfp_app_bpf *VAR_2 = VAR_1->priv;

 if (VAR_1->ctrl->dp.mtu < FUNC_1(VAR_2)) {
  FUNC_2(VAR_2->app->cpp,
   "ctrl channel MTU below min required %u < %u\n",
   VAR_1->ctrl->dp.mtu, FUNC_1(VAR_2));
  return -VAR_0;
 }

 if (VAR_2->cmsg_multi_ent)
  VAR_2->cmsg_cache_cnt = FUNC_0(VAR_2);
 else
  VAR_2->cmsg_cache_cnt = 1;

 return 0;
}
