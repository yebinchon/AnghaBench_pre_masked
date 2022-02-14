
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int lock; } ;
struct xmit_priv {int free_xmit_extbuf_cnt; struct __queue free_xmit_extbuf_queue; } ;
struct xmit_buf {int list; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct __queue*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

s32 FUNC_5(struct xmit_priv *VAR_2, struct xmit_buf *VAR_3)
{
 unsigned long VAR_4;
 struct __queue *VAR_5 = &VAR_2->free_xmit_extbuf_queue;

 if (!VAR_3)
  return VAR_0;

 FUNC_3(&VAR_5->lock, VAR_4);

 FUNC_2(&VAR_3->list);

 FUNC_1(&VAR_3->list, FUNC_0(VAR_5));
 VAR_2->free_xmit_extbuf_cnt++;

 FUNC_4(&VAR_5->lock, VAR_4);

 return VAR_1;
}
