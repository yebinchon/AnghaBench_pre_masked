
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_tx_sc {size_t encoding_sa; int encrypt; int send_sci; int end_station; int scb; int * sa; } ;
struct macsec_tx_sa {scalar_t__ active; } ;
struct macsec_secy {int operational; int protect_frames; int replay_protect; int key_len; void* validate_frames; int replay_window; struct macsec_tx_sc tx_sc; } ;
struct TYPE_2__ {struct macsec_secy secy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;



 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 void* FUNC_3 (struct nlattr*) ;
 struct macsec_tx_sa* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_13,
        struct nlattr *VAR_14[])
{
 struct macsec_secy *VAR_15;
 struct macsec_tx_sc *VAR_16;

 VAR_15 = &FUNC_0(VAR_13)->secy;
 VAR_16 = &VAR_15->tx_sc;

 if (VAR_14[VAR_2]) {
  struct macsec_tx_sa *VAR_17;

  VAR_16->encoding_sa = FUNC_3(VAR_14[VAR_2]);
  VAR_17 = FUNC_4(VAR_16->sa[VAR_16->encoding_sa]);

  VAR_15->operational = VAR_17 && VAR_17->active;
 }

 if (VAR_14[VAR_10])
  VAR_15->replay_window = FUNC_1(VAR_14[VAR_10]);

 if (VAR_14[VAR_3])
  VAR_16->encrypt = !!FUNC_3(VAR_14[VAR_3]);

 if (VAR_14[VAR_6])
  VAR_15->protect_frames = !!FUNC_3(VAR_14[VAR_6]);

 if (VAR_14[VAR_5])
  VAR_16->send_sci = !!FUNC_3(VAR_14[VAR_5]);

 if (VAR_14[VAR_4])
  VAR_16->end_station = !!FUNC_3(VAR_14[VAR_4]);

 if (VAR_14[VAR_8])
  VAR_16->scb = !!FUNC_3(VAR_14[VAR_8]);

 if (VAR_14[VAR_7])
  VAR_15->replay_protect = !!FUNC_3(VAR_14[VAR_7]);

 if (VAR_14[VAR_9])
  VAR_15->validate_frames = FUNC_3(VAR_14[VAR_9]);

 if (VAR_14[VAR_1]) {
  switch (FUNC_2(VAR_14[VAR_1])) {
  case 130:
  case 128:
   VAR_15->key_len = VAR_11;
   break;
  case 129:
   VAR_15->key_len = VAR_12;
   break;
  default:
   return -VAR_0;
  }
 }

 return 0;
}
