
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct alx_rx_queue {scalar_t__ count; scalar_t__ rrd_read_idx; scalar_t__ read_idx; scalar_t__ write_idx; int dev; struct alx_buffer* bufs; } ;
struct alx_buffer {int * skb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct alx_buffer*,int ) ;
 int FUNC_2 (struct alx_buffer*,int ,int ) ;
 int FUNC_3 (struct alx_buffer*,int ) ;
 int FUNC_4 (struct alx_buffer*,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct alx_rx_queue *VAR_3)
{
 struct alx_buffer *VAR_4;
 u16 VAR_5;

 if (!VAR_3->bufs)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
  VAR_4 = VAR_3->bufs + VAR_5;
  if (VAR_4->skb) {
   FUNC_5(VAR_3->dev,
      FUNC_1(VAR_4, VAR_1),
      FUNC_3(VAR_4, VAR_2),
      VAR_0);
   FUNC_0(VAR_4->skb);
   VAR_4->skb = ((void*)0);
   FUNC_4(VAR_4, VAR_2, 0);
   FUNC_2(VAR_4, VAR_1, 0);
  }
 }

 VAR_3->write_idx = 0;
 VAR_3->read_idx = 0;
 VAR_3->rrd_read_idx = 0;
}
