
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_frame {int pg_num; int agg_num; scalar_t__ ack_report; int frame_tag; int attrib; int * pxmitbuf; int * buf_addr; } ;
struct pkt_attrib {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xmit_frame *VAR_1)
{
 if (VAR_1) {
  VAR_1->buf_addr = ((void*)0);
  VAR_1->pxmitbuf = ((void*)0);

  FUNC_0(&VAR_1->attrib, 0, sizeof(struct pkt_attrib));


  VAR_1->frame_tag = VAR_0;

  VAR_1->pg_num = 1;
  VAR_1->agg_num = 1;
  VAR_1->ack_report = 0;
 }
}
