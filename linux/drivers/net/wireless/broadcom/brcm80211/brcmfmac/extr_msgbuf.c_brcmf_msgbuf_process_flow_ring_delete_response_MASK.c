
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int status; int flow_ring_id; } ;
struct msgbuf_flowring_delete_resp {TYPE_1__ compl_hdr; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_msgbuf {int flow; struct brcmf_pub* drvr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct brcmf_msgbuf*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct brcmf_msgbuf *VAR_2,
            void *VAR_3)
{
 struct brcmf_pub *VAR_4 = VAR_2->drvr;
 struct msgbuf_flowring_delete_resp *VAR_5;
 u16 VAR_6;
 u16 VAR_7;

 VAR_5 = (struct msgbuf_flowring_delete_resp *)VAR_3;

 VAR_7 = FUNC_4(VAR_5->compl_hdr.flow_ring_id);
 VAR_7 -= VAR_0;
 VAR_6 = FUNC_4(VAR_5->compl_hdr.status);

 if (VAR_6) {
  FUNC_0(VAR_4, "Flowring deletion failed, code %d\n", VAR_6);
  FUNC_2(VAR_2->flow, VAR_7);
  return;
 }
 FUNC_1(VAR_1, "Flowring %d Delete response status %d\n", VAR_7,
    VAR_6);

 FUNC_3(VAR_2, VAR_7);
}
