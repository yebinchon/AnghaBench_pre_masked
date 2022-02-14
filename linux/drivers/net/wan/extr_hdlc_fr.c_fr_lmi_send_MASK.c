
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {struct net_device* dev; int priority; void* protocol; int data; } ;
struct TYPE_5__ {int exist; int new; int active; } ;
struct pvc_device {int dlci; struct pvc_device* next; TYPE_2__ state; scalar_t__ open_count; } ;
struct net_device {int dummy; } ;
typedef int hdlc_device ;
struct TYPE_4__ {int lmi; int dce; } ;
struct TYPE_6__ {int dce_pvc_count; int txseq; int rxseq; scalar_t__ reliable; TYPE_1__ settings; struct pvc_device* first_pvc; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int * FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff**,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct pvc_device*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct net_device*,char*) ;
 int FUNC_9 (int,struct pvc_device*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int* FUNC_13 (struct sk_buff*) ;
 TYPE_3__* FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_25, int VAR_26)
{
 hdlc_device *VAR_27 = FUNC_3(VAR_25);
 struct sk_buff *VAR_28;
 struct pvc_device *VAR_29 = FUNC_14(VAR_27)->first_pvc;
 int VAR_30 = FUNC_14(VAR_27)->settings.lmi;
 int VAR_31 = FUNC_14(VAR_27)->settings.dce;
 int VAR_32 = VAR_30 == VAR_1 ? VAR_5 : VAR_11;
 int VAR_33 = (VAR_30 == VAR_14) ? 6 : 3;
 u8 *VAR_34;
 int VAR_35 = 0;

 if (VAR_31 && VAR_26) {
  VAR_32 += FUNC_14(VAR_27)->dce_pvc_count * (2 + VAR_33);
  if (VAR_32 > VAR_0) {
   FUNC_8(VAR_25, "Too many PVCs while sending LMI full report\n");
   return;
  }
 }

 VAR_28 = FUNC_1(VAR_32);
 if (!VAR_28) {
  FUNC_8(VAR_25, "Memory squeeze on fr_lmi_send()\n");
  return;
 }
 FUNC_7(VAR_28->data, 0, VAR_32);
 FUNC_11(VAR_28, 4);
 if (VAR_30 == VAR_14) {
  VAR_28->protocol = FUNC_0(VAR_23);
  FUNC_4(&VAR_28, VAR_15);
 } else {
  VAR_28->protocol = FUNC_0(VAR_22);
  FUNC_4(&VAR_28, VAR_10);
 }
 VAR_34 = FUNC_13(VAR_28);
 VAR_34[VAR_35++] = VAR_7;
 VAR_34[VAR_35++] = VAR_31 ? VAR_20 : VAR_21;
 if (VAR_30 == VAR_1)
  VAR_34[VAR_35++] = VAR_6;
 VAR_34[VAR_35++] = VAR_30 == VAR_8 ? VAR_13 :
  VAR_4;
 VAR_34[VAR_35++] = VAR_19;
 VAR_34[VAR_35++] = VAR_26 ? VAR_16 : VAR_17;
 VAR_34[VAR_35++] = VAR_30 == VAR_8 ? VAR_9 : VAR_2;
 VAR_34[VAR_35++] = VAR_18;
 VAR_34[VAR_35++] = FUNC_14(VAR_27)->txseq =
  FUNC_5(FUNC_14(VAR_27)->txseq);
 VAR_34[VAR_35++] = FUNC_14(VAR_27)->rxseq;

 if (VAR_31 && VAR_26) {
  while (VAR_29) {
   VAR_34[VAR_35++] = VAR_30 == VAR_8 ? VAR_12 :
    VAR_3;
   VAR_34[VAR_35++] = VAR_33;


   if (FUNC_14(VAR_27)->reliable && !VAR_29->state.exist) {
    VAR_29->state.exist = VAR_29->state.new = 1;
    FUNC_6(VAR_29);
   }


   if (VAR_29->open_count && !VAR_29->state.active &&
       VAR_29->state.exist && !VAR_29->state.new) {
    FUNC_9(1, VAR_29);
    VAR_29->state.active = 1;
    FUNC_6(VAR_29);
   }

   if (VAR_30 == VAR_14) {
    VAR_34[VAR_35] = VAR_29->dlci >> 8;
    VAR_34[VAR_35 + 1] = VAR_29->dlci & 0xFF;
   } else {
    VAR_34[VAR_35] = (VAR_29->dlci >> 4) & 0x3F;
    VAR_34[VAR_35 + 1] = ((VAR_29->dlci << 3) & 0x78) | 0x80;
    VAR_34[VAR_35 + 2] = 0x80;
   }

   if (VAR_29->state.new)
    VAR_34[VAR_35 + 2] |= 0x08;
   else if (VAR_29->state.active)
    VAR_34[VAR_35 + 2] |= 0x02;

   VAR_35 += VAR_33;
   VAR_29 = VAR_29->next;
  }
 }

 FUNC_10(VAR_28, VAR_35);
 VAR_28->priority = VAR_24;
 VAR_28->dev = VAR_25;
 FUNC_12(VAR_28);

 FUNC_2(VAR_28);
}
