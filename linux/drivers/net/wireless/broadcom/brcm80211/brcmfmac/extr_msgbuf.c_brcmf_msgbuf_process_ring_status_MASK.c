
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flow_ring_id; int status; } ;
struct msgbuf_ring_status {TYPE_1__ compl_hdr; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_msgbuf {struct brcmf_pub* drvr; } ;


 int FUNC_0 (struct brcmf_pub*,char*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct brcmf_msgbuf *VAR_0,
          void *VAR_1)
{
 struct msgbuf_ring_status *VAR_2 = VAR_1;
 struct brcmf_pub *VAR_3 = VAR_0->drvr;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->compl_hdr.status);
 if (VAR_4) {
  int VAR_5 = FUNC_1(VAR_2->compl_hdr.flow_ring_id);

  FUNC_0(VAR_3, "Firmware reported ring %d error: %d\n", VAR_5,
    VAR_4);
 }
}
