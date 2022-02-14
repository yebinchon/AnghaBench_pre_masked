
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_xmit_frame {int padapter; int frame_tag; int * pkt; int list; } ;
struct TYPE_2__ {int queue; } ;
struct mp_priv {int free_mp_xmitframe_cnt; int papdater; TYPE_1__ free_mp_xmitqueue; int * pmp_xmtframe_buf; int * pallocated_mp_xmitframe_buf; } ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mp_priv*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct mp_priv *VAR_4)
{
 int VAR_5;
 struct mp_xmit_frame *VAR_6;

 FUNC_1(VAR_4);
 FUNC_2(&VAR_4->free_mp_xmitqueue);
 VAR_4->pallocated_mp_xmitframe_buf = ((void*)0);
 VAR_4->pallocated_mp_xmitframe_buf = FUNC_3(VAR_3 *
    sizeof(struct mp_xmit_frame) + 4,
    VAR_1);
 if (!VAR_4->pallocated_mp_xmitframe_buf) {
  return -VAR_0;
 }
 VAR_4->pmp_xmtframe_buf = VAR_4->pallocated_mp_xmitframe_buf +
    4 -
    ((addr_t)(VAR_4->pallocated_mp_xmitframe_buf) & 3);
 VAR_6 = (struct mp_xmit_frame *)VAR_4->pmp_xmtframe_buf;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_0(&(VAR_6->list));
  FUNC_4(&(VAR_6->list),
     &(VAR_4->free_mp_xmitqueue.queue));
  VAR_6->pkt = ((void*)0);
  VAR_6->frame_tag = VAR_2;
  VAR_6->padapter = VAR_4->papdater;
  VAR_6++;
 }
 VAR_4->free_mp_xmitframe_cnt = VAR_3;
 return 0;
}
