
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_8__ {int flags; size_t offload_handle; struct net_device* dev; } ;
struct nsim_sa {int used; int crypt; int rx; int * ipaddr; int salt; int key; struct xfrm_state* xs; } ;
struct TYPE_6__ {struct nsim_sa a4; struct nsim_sa a6; } ;
struct TYPE_7__ {int proto; TYPE_2__ daddr; } ;
struct TYPE_5__ {scalar_t__ family; } ;
struct xfrm_state {TYPE_4__ xso; TYPE_3__ id; TYPE_1__ props; scalar_t__ aead; scalar_t__ ealg; scalar_t__ calg; } ;
struct nsim_ipsec {int count; int * sa; } ;
struct netdevsim {struct nsim_ipsec ipsec; } ;
struct net_device {int dummy; } ;
typedef int sa ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct nsim_sa*,int) ;
 int FUNC_1 (struct nsim_sa*,int ,int) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 struct netdevsim* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nsim_ipsec*) ;
 int FUNC_5 (struct xfrm_state*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_6)
{
 struct nsim_ipsec *VAR_7;
 struct net_device *VAR_8;
 struct netdevsim *VAR_9;
 struct nsim_sa VAR_10;
 u16 VAR_11;
 int VAR_12;

 VAR_8 = VAR_6->xso.dev;
 VAR_9 = FUNC_3(VAR_8);
 VAR_7 = &VAR_9->ipsec;

 if (VAR_6->id.proto != VAR_3 && VAR_6->id.proto != VAR_2) {
  FUNC_2(VAR_8, "Unsupported protocol 0x%04x for ipsec offload\n",
      VAR_6->id.proto);
  return -VAR_1;
 }

 if (VAR_6->calg) {
  FUNC_2(VAR_8, "Compression offload not supported\n");
  return -VAR_1;
 }


 VAR_12 = FUNC_4(VAR_7);
 if (VAR_12 < 0) {
  FUNC_2(VAR_8, "No space for SA in Rx table!\n");
  return VAR_12;
 }
 VAR_11 = (u16)VAR_12;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.used = 1;
 VAR_10.xs = VAR_6;

 if (VAR_10.xs->id.proto & VAR_3)
  VAR_10.crypt = VAR_6->ealg || VAR_6->aead;


 VAR_12 = FUNC_5(VAR_6, VAR_10.key, &VAR_10.salt);
 if (VAR_12) {
  FUNC_2(VAR_8, "Failed to get key data for SA table\n");
  return VAR_12;
 }

 if (VAR_6->xso.flags & VAR_5) {
  VAR_10.rx = 1;

  if (VAR_6->props.family == VAR_0)
   FUNC_0(VAR_10.ipaddr, &VAR_6->id.daddr.a6, 16);
  else
   FUNC_0(&VAR_10.ipaddr[3], &VAR_6->id.daddr.a4, 4);
 }


 FUNC_0(&VAR_7->sa[VAR_11], &VAR_10, sizeof(VAR_10));




 VAR_6->xso.offload_handle = VAR_11 | VAR_4;
 VAR_7->count++;

 return 0;
}
