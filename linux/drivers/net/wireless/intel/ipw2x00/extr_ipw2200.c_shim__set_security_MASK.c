
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct libipw_security {int flags; scalar_t__* key_sizes; scalar_t__ level; scalar_t__ auth_mode; scalar_t__ enabled; int encrypt; int active_key; int * keys; int * encode_alg; } ;
struct TYPE_6__ {int capability; } ;
struct ipw_priv {int status; TYPE_3__ assoc_request; TYPE_2__* ieee; int capability; } ;
struct TYPE_4__ {scalar_t__* key_sizes; int flags; scalar_t__ auth_mode; scalar_t__ enabled; scalar_t__ level; int encrypt; int active_key; int * keys; int * encode_alg; } ;
struct TYPE_5__ {int host_encrypt; TYPE_1__ sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (struct ipw_priv*) ;
 struct ipw_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_13,
          struct libipw_security *VAR_14)
{
 struct ipw_priv *VAR_15 = FUNC_4(VAR_13);
 int VAR_16;
 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  if (VAR_14->flags & (1 << VAR_16)) {
   VAR_15->ieee->sec.encode_alg[VAR_16] = VAR_14->encode_alg[VAR_16];
   VAR_15->ieee->sec.key_sizes[VAR_16] = VAR_14->key_sizes[VAR_16];
   if (VAR_14->key_sizes[VAR_16] == 0)
    VAR_15->ieee->sec.flags &= ~(1 << VAR_16);
   else {
    FUNC_5(VAR_15->ieee->sec.keys[VAR_16], VAR_14->keys[VAR_16],
           VAR_14->key_sizes[VAR_16]);
    VAR_15->ieee->sec.flags |= (1 << VAR_16);
   }
   VAR_15->status |= VAR_10;
  } else if (VAR_14->level != VAR_7)
   VAR_15->ieee->sec.flags &= ~(1 << VAR_16);
 }

 if (VAR_14->flags & VAR_2) {
  VAR_15->ieee->sec.active_key = VAR_14->active_key;
  VAR_15->ieee->sec.flags |= VAR_2;
  VAR_15->status |= VAR_10;
 } else
  VAR_15->ieee->sec.flags &= ~VAR_2;

 if ((VAR_14->flags & VAR_3) &&
     (VAR_15->ieee->sec.auth_mode != VAR_14->auth_mode)) {
  VAR_15->ieee->sec.auth_mode = VAR_14->auth_mode;
  VAR_15->ieee->sec.flags |= VAR_3;
  if (VAR_14->auth_mode == VAR_11)
   VAR_15->capability |= VAR_1;
  else
   VAR_15->capability &= ~VAR_1;
  VAR_15->status |= VAR_10;
 }

 if (VAR_14->flags & VAR_4 && VAR_15->ieee->sec.enabled != VAR_14->enabled) {
  VAR_15->ieee->sec.flags |= VAR_4;
  VAR_15->ieee->sec.enabled = VAR_14->enabled;
  VAR_15->status |= VAR_10;
  if (VAR_14->enabled)
   VAR_15->capability |= VAR_0;
  else
   VAR_15->capability &= ~VAR_0;
 }

 if (VAR_14->flags & VAR_5)
  VAR_15->ieee->sec.encrypt = VAR_14->encrypt;

 if (VAR_14->flags & VAR_6 && VAR_15->ieee->sec.level != VAR_14->level) {
  VAR_15->ieee->sec.level = VAR_14->level;
  VAR_15->ieee->sec.flags |= VAR_6;
  VAR_15->status |= VAR_10;
 }

 if (!VAR_15->ieee->host_encrypt && (VAR_14->flags & VAR_5))
  FUNC_3(VAR_15);
}
