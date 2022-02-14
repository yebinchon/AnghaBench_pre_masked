
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfp_repr {TYPE_4__* app; TYPE_2__* dst; } ;
struct nfp_flower_cmsg_portreify {int info; scalar_t__ reserved; int portnum; } ;
struct TYPE_8__ {int ctrl; } ;
struct TYPE_5__ {int port_id; } ;
struct TYPE_7__ {TYPE_1__ port_info; } ;
struct TYPE_6__ {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (TYPE_4__*,int,int ,int ) ;
 struct nfp_flower_cmsg_portreify* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct nfp_repr *VAR_3, bool VAR_4)
{
 struct nfp_flower_cmsg_portreify *VAR_5;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_3(VAR_3->app, sizeof(*VAR_5),
        VAR_2,
        VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_6);
 VAR_5->portnum = FUNC_1(VAR_3->dst->u.port_info.port_id);
 VAR_5->reserved = 0;
 VAR_5->info = FUNC_0(VAR_4);

 FUNC_2(VAR_3->app->ctrl, VAR_6);

 return 0;
}
