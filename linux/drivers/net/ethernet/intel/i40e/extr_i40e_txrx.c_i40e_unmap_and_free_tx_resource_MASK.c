
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_tx_buffer {int tx_flags; int * skb; int * next_to_watch; int xdpf; int raw_buf; } ;
struct i40e_ring {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_tx_buffer*,int ) ;
 scalar_t__ FUNC_2 (struct i40e_tx_buffer*,int ) ;
 int FUNC_3 (struct i40e_tx_buffer*,int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (struct i40e_ring*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct i40e_ring *VAR_4,
         struct i40e_tx_buffer *VAR_5)
{
 if (VAR_5->skb) {
  if (VAR_5->tx_flags & VAR_1)
   FUNC_6(VAR_5->raw_buf);
  else if (FUNC_7(VAR_4))
   FUNC_8(VAR_5->xdpf);
  else
   FUNC_0(VAR_5->skb);
  if (FUNC_2(VAR_5, VAR_3))
   FUNC_5(VAR_4->dev,
      FUNC_1(VAR_5, VAR_2),
      FUNC_2(VAR_5, VAR_3),
      VAR_0);
 } else if (FUNC_2(VAR_5, VAR_3)) {
  FUNC_4(VAR_4->dev,
          FUNC_1(VAR_5, VAR_2),
          FUNC_2(VAR_5, VAR_3),
          VAR_0);
 }

 VAR_5->next_to_watch = ((void*)0);
 VAR_5->skb = ((void*)0);
 FUNC_3(VAR_5, VAR_3, 0);

}
