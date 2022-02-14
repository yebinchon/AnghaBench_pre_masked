
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfp_repr {TYPE_4__* app; TYPE_3__* dst; } ;
struct nfp_flower_cmsg_portmod {int info; int mtu; scalar_t__ reserved; int portnum; } ;
struct TYPE_8__ {int ctrl; } ;
struct TYPE_5__ {int port_id; } ;
struct TYPE_6__ {TYPE_1__ port_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (TYPE_4__*,int,int ,int ) ;
 struct nfp_flower_cmsg_portmod* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct nfp_repr *VAR_4, bool VAR_5,
       unsigned int VAR_6, bool VAR_7)
{
 struct nfp_flower_cmsg_portmod *VAR_8;
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_3(VAR_4->app, sizeof(*VAR_8),
        VAR_3, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_9);
 VAR_8->portnum = FUNC_1(VAR_4->dst->u.port_info.port_id);
 VAR_8->reserved = 0;
 VAR_8->info = VAR_5;

 if (VAR_7)
  VAR_8->info |= VAR_2;

 VAR_8->mtu = FUNC_0(VAR_6);

 FUNC_2(VAR_4->app->ctrl, VAR_9);

 return 0;
}
