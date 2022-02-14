
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_tx_queue {int dev; struct alx_buffer* bufs; } ;
struct alx_buffer {int * skb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct alx_buffer*,int ) ;
 scalar_t__ FUNC_2 (struct alx_buffer*,int ) ;
 int FUNC_3 (struct alx_buffer*,int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct alx_tx_queue *VAR_3, int VAR_4)
{
 struct alx_buffer *VAR_5 = &VAR_3->bufs[VAR_4];

 if (FUNC_2(VAR_5, VAR_2)) {
  FUNC_4(VAR_3->dev,
     FUNC_1(VAR_5, VAR_1),
     FUNC_2(VAR_5, VAR_2),
     VAR_0);
  FUNC_3(VAR_5, VAR_2, 0);
 }

 if (VAR_5->skb) {
  FUNC_0(VAR_5->skb);
  VAR_5->skb = ((void*)0);
 }
}
