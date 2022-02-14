
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pkt_attrib {scalar_t__ ht_en; } ;
struct adapter {int dummy; } ;
struct TYPE_3__ {int data_sc; int data_bw; } ;
typedef TYPE_1__* PTXDESC_8723B ;


 int FUNC_0 (struct adapter*,struct pkt_attrib*) ;
 int FUNC_1 (struct adapter*,struct pkt_attrib*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0, struct pkt_attrib *VAR_1, PTXDESC_8723B VAR_2)
{


 if (VAR_1->ht_en) {
  VAR_2->data_bw = FUNC_0(VAR_0, VAR_1);

  VAR_2->data_sc = FUNC_1(VAR_0, VAR_1);
 }
}
