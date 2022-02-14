
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; int* data; } ;
struct TYPE_4__ {unsigned int new; int deleted; int exist; unsigned int active; int bandwidth; } ;
struct pvc_device {struct pvc_device* next; TYPE_1__ state; } ;
struct net_device {int dummy; } ;
typedef int hdlc_device ;
struct TYPE_5__ {int lmi; int dce; scalar_t__ n391; } ;
struct TYPE_6__ {int rxseq; int txseq; int fullrep_sent; int dce_changed; int request; TYPE_2__ settings; scalar_t__ n391cnt; struct pvc_device* first_pvc; int reliable; int last_poll; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct pvc_device* FUNC_0 (struct net_device*,int) ;
 int * FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct pvc_device*) ;
 int VAR_21 ;
 int FUNC_4 (struct net_device*,char*,...) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (unsigned int,struct pvc_device*) ;
 TYPE_3__* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_22, struct sk_buff *VAR_23)
{
 hdlc_device *VAR_24 = FUNC_1(VAR_22);
 struct pvc_device *VAR_25;
 u8 VAR_26, VAR_27;
 int VAR_28 = FUNC_7(VAR_24)->settings.lmi;
 int VAR_29 = FUNC_7(VAR_24)->settings.dce;
 int VAR_30 = (VAR_28 == VAR_12) ? 6 : 3, VAR_31, VAR_32, VAR_33, VAR_34;

 if (VAR_23->len < (VAR_28 == VAR_0 ? VAR_4 :
   VAR_9)) {
  FUNC_4(VAR_22, "Short LMI frame\n");
  return 1;
 }

 if (VAR_23->data[3] != (VAR_28 == VAR_12 ? VAR_20 :
        VAR_19)) {
  FUNC_4(VAR_22, "Received non-LMI frame with LMI DLCI\n");
  return 1;
 }

 if (VAR_23->data[4] != VAR_6) {
  FUNC_4(VAR_22, "Invalid LMI Call reference (0x%02X)\n",
       VAR_23->data[4]);
  return 1;
 }

 if (VAR_23->data[5] != (VAR_29 ? VAR_18 : VAR_17)) {
  FUNC_4(VAR_22, "Invalid LMI Message type (0x%02X)\n",
       VAR_23->data[5]);
  return 1;
 }

 if (VAR_28 == VAR_0) {
  if (VAR_23->data[6] != VAR_5) {
   FUNC_4(VAR_22, "Not ANSI locking shift in LMI message (0x%02X)\n",
        VAR_23->data[6]);
   return 1;
  }
  VAR_34 = 7;
 } else
  VAR_34 = 6;

 if (VAR_23->data[VAR_34] != (VAR_28 == VAR_7 ? VAR_11 :
        VAR_3)) {
  FUNC_4(VAR_22, "Not an LMI Report type IE (0x%02X)\n",
       VAR_23->data[VAR_34]);
  return 1;
 }

 if (VAR_23->data[++VAR_34] != VAR_16) {
  FUNC_4(VAR_22, "Invalid LMI Report type IE length (%u)\n",
       VAR_23->data[VAR_34]);
  return 1;
 }

 VAR_31 = VAR_23->data[++VAR_34];
 if (VAR_31 != VAR_14 && VAR_31 != VAR_13) {
  FUNC_4(VAR_22, "Unsupported LMI Report type (0x%02X)\n",
       VAR_31);
  return 1;
 }

 if (VAR_23->data[++VAR_34] != (VAR_28 == VAR_7 ? VAR_8 :
          VAR_1)) {
  FUNC_4(VAR_22, "Not an LMI Link integrity verification IE (0x%02X)\n",
       VAR_23->data[VAR_34]);
  return 1;
 }

 if (VAR_23->data[++VAR_34] != VAR_15) {
  FUNC_4(VAR_22, "Invalid LMI Link integrity verification IE length (%u)\n",
       VAR_23->data[VAR_34]);
  return 1;
 }
 VAR_34++;

 FUNC_7(VAR_24)->rxseq = VAR_23->data[VAR_34++];
 VAR_26 = VAR_23->data[VAR_34++];

 VAR_27 = FUNC_7(VAR_24)->txseq;

 if (VAR_29)
  FUNC_7(VAR_24)->last_poll = VAR_21;

 VAR_32 = 0;
 if (!FUNC_7(VAR_24)->reliable)
  VAR_32 = 1;

 if (VAR_26 == 0 || VAR_26 != VAR_27) {
  FUNC_7(VAR_24)->n391cnt = 0;
  VAR_32 = 1;
 }

 if (VAR_29) {
  if (FUNC_7(VAR_24)->fullrep_sent && !VAR_32) {

   FUNC_7(VAR_24)->fullrep_sent = 0;
   VAR_25 = FUNC_7(VAR_24)->first_pvc;
   while (VAR_25) {
    if (VAR_25->state.new) {
     VAR_25->state.new = 0;


     FUNC_7(VAR_24)->dce_changed = 1;
    }
    VAR_25 = VAR_25->next;
   }
  }

  if (FUNC_7(VAR_24)->dce_changed) {
   VAR_31 = VAR_13;
   FUNC_7(VAR_24)->fullrep_sent = 1;
   FUNC_7(VAR_24)->dce_changed = 0;
  }

  FUNC_7(VAR_24)->request = 1;
  FUNC_2(VAR_22, VAR_31 == VAR_13 ? 1 : 0);
  return 0;
 }



 FUNC_7(VAR_24)->request = 0;

 if (VAR_32)
  return 0;

 if (VAR_31 != VAR_13)
  return 0;

 VAR_25 = FUNC_7(VAR_24)->first_pvc;

 while (VAR_25) {
  VAR_25->state.deleted = 1;
  VAR_25 = VAR_25->next;
 }

 VAR_33 = 0;
 while (VAR_23->len >= VAR_34 + 2 + VAR_30) {
  u16 VAR_35;
  u32 VAR_36;
  unsigned int VAR_37, VAR_38;

  if (VAR_23->data[VAR_34] != (VAR_28 == VAR_7 ? VAR_10 :
           VAR_2)) {
   FUNC_4(VAR_22, "Not an LMI PVC status IE (0x%02X)\n",
        VAR_23->data[VAR_34]);
   return 1;
  }

  if (VAR_23->data[++VAR_34] != VAR_30) {
   FUNC_4(VAR_22, "Invalid LMI PVC status IE length (%u)\n",
        VAR_23->data[VAR_34]);
   return 1;
  }
  VAR_34++;

  VAR_38 = !! (VAR_23->data[VAR_34 + 2] & 0x08);
  VAR_37 = !! (VAR_23->data[VAR_34 + 2] & 0x02);
  if (VAR_28 == VAR_12) {
   VAR_35 = (VAR_23->data[VAR_34] << 8) | VAR_23->data[VAR_34 + 1];
   VAR_36 = (VAR_23->data[VAR_34 + 3] << 16) |
    (VAR_23->data[VAR_34 + 4] << 8) |
    (VAR_23->data[VAR_34 + 5]);
  } else {
   VAR_35 = ((VAR_23->data[VAR_34] & 0x3F) << 4) |
    ((VAR_23->data[VAR_34 + 1] & 0x78) >> 3);
   VAR_36 = 0;
  }

  VAR_25 = FUNC_0(VAR_22, VAR_35);

  if (!VAR_25 && !VAR_33) {
   FUNC_5(VAR_22, "Memory squeeze on fr_lmi_recv()\n");
   VAR_33 = 1;
  }

  if (VAR_25) {
   VAR_25->state.exist = 1;
   VAR_25->state.deleted = 0;
   if (VAR_37 != VAR_25->state.active ||
       VAR_38 != VAR_25->state.new ||
       VAR_36 != VAR_25->state.bandwidth ||
       !VAR_25->state.exist) {
    VAR_25->state.new = VAR_38;
    VAR_25->state.active = VAR_37;
    VAR_25->state.bandwidth = VAR_36;
    FUNC_6(VAR_37, VAR_25);
    FUNC_3(VAR_25);
   }
  }

  VAR_34 += VAR_30;
 }

 VAR_25 = FUNC_7(VAR_24)->first_pvc;

 while (VAR_25) {
  if (VAR_25->state.deleted && VAR_25->state.exist) {
   FUNC_6(0, VAR_25);
   VAR_25->state.active = VAR_25->state.new = 0;
   VAR_25->state.exist = 0;
   VAR_25->state.bandwidth = 0;
   FUNC_3(VAR_25);
  }
  VAR_25 = VAR_25->next;
 }


 FUNC_7(VAR_24)->n391cnt = FUNC_7(VAR_24)->settings.n391;

 return 0;
}
