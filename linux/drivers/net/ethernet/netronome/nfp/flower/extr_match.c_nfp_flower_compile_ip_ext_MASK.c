
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct nfp_flower_ip_ext {int flags; int ttl; int tos; int proto; } ;
struct flow_rule {int dummy; } ;
struct flow_match_tcp {TYPE_6__* mask; TYPE_5__* key; } ;
struct flow_match_ip {TYPE_4__* mask; TYPE_3__* key; } ;
struct flow_match_control {TYPE_8__* mask; TYPE_7__* key; } ;
struct flow_match_basic {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_16__ {int flags; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int ttl; int tos; } ;
struct TYPE_11__ {int ttl; int tos; } ;
struct TYPE_10__ {int ip_proto; } ;
struct TYPE_9__ {int ip_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 struct flow_rule* FUNC_1 (struct flow_cls_offload*) ;
 int FUNC_2 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_3 (struct flow_rule*,struct flow_match_control*) ;
 int FUNC_4 (struct flow_rule*,struct flow_match_ip*) ;
 scalar_t__ FUNC_5 (struct flow_rule*,int ) ;
 int FUNC_6 (struct flow_rule*,struct flow_match_tcp*) ;

__attribute__((used)) static void
FUNC_7(struct nfp_flower_ip_ext *VAR_18,
     struct nfp_flower_ip_ext *VAR_19,
     struct flow_cls_offload *VAR_20)
{
 struct flow_rule *VAR_21 = FUNC_1(VAR_20);

 if (FUNC_5(VAR_21, VAR_0)) {
  struct flow_match_basic VAR_22;

  FUNC_2(VAR_21, &VAR_22);
  VAR_18->proto = VAR_22.key->ip_proto;
  VAR_19->proto = VAR_22.mask->ip_proto;
 }

 if (FUNC_5(VAR_21, VAR_2)) {
  struct flow_match_ip VAR_23;

  FUNC_4(VAR_21, &VAR_23);
  VAR_18->tos = VAR_23.key->tos;
  VAR_18->ttl = VAR_23.key->ttl;
  VAR_19->tos = VAR_23.mask->tos;
  VAR_19->ttl = VAR_23.mask->ttl;
 }

 if (FUNC_5(VAR_21, VAR_3)) {
  u16 VAR_24, VAR_25;
  struct flow_match_tcp VAR_26;

  FUNC_6(VAR_21, &VAR_26);
  VAR_24 = FUNC_0(VAR_26.key->flags);
  VAR_25 = FUNC_0(VAR_26.mask->flags);

  if (VAR_24 & VAR_13)
   VAR_18->flags |= VAR_8;
  if (VAR_25 & VAR_13)
   VAR_19->flags |= VAR_8;

  if (VAR_24 & VAR_16)
   VAR_18->flags |= VAR_11;
  if (VAR_25 & VAR_16)
   VAR_19->flags |= VAR_11;

  if (VAR_24 & VAR_15)
   VAR_18->flags |= VAR_10;
  if (VAR_25 & VAR_15)
   VAR_19->flags |= VAR_10;

  if (VAR_24 & VAR_14)
   VAR_18->flags |= VAR_9;
  if (VAR_25 & VAR_14)
   VAR_19->flags |= VAR_9;

  if (VAR_24 & VAR_17)
   VAR_18->flags |= VAR_12;
  if (VAR_25 & VAR_17)
   VAR_19->flags |= VAR_12;
 }

 if (FUNC_5(VAR_21, VAR_1)) {
  struct flow_match_control VAR_27;

  FUNC_3(VAR_21, &VAR_27);
  if (VAR_27.key->flags & VAR_5)
   VAR_18->flags |= VAR_6;
  if (VAR_27.mask->flags & VAR_5)
   VAR_19->flags |= VAR_6;
  if (VAR_27.key->flags & VAR_4)
   VAR_18->flags |= VAR_7;
  if (VAR_27.mask->flags & VAR_4)
   VAR_19->flags |= VAR_7;
 }
}
