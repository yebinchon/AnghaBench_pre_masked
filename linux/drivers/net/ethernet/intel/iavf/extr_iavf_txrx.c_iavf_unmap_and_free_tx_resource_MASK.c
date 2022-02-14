
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_tx_buffer {int tx_flags; int * skb; int * next_to_watch; int raw_buf; } ;
struct iavf_ring {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct iavf_tx_buffer*,int ) ;
 scalar_t__ FUNC_2 (struct iavf_tx_buffer*,int ) ;
 int FUNC_3 (struct iavf_tx_buffer*,int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct iavf_ring *VAR_4,
         struct iavf_tx_buffer *VAR_5)
{
 if (VAR_5->skb) {
  if (VAR_5->tx_flags & VAR_1)
   FUNC_6(VAR_5->raw_buf);
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
