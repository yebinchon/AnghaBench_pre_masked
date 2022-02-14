
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet32_rx_head {void* status; void* buf_length; } ;
struct pcnet32_private {int cur_rx; int rx_mod_mask; struct pcnet32_rx_head* rx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 struct pcnet32_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct pcnet32_private*,struct pcnet32_rx_head*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 struct pcnet32_private *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_3->cur_rx & VAR_3->rx_mod_mask;
 struct pcnet32_rx_head *VAR_5 = &VAR_3->rx_ring[VAR_4];
 int VAR_6 = 0;


 while (VAR_6 < VAR_2 && (short)FUNC_1(VAR_5->status) >= 0) {
  FUNC_3(VAR_1, VAR_3, VAR_5, VAR_4);
  VAR_6 += 1;




  VAR_5->buf_length = FUNC_0(VAR_0);
  FUNC_4();
  VAR_5->status = FUNC_0(0x8000);
  VAR_4 = (++VAR_3->cur_rx) & VAR_3->rx_mod_mask;
  VAR_5 = &VAR_3->rx_ring[VAR_4];
 }

 return VAR_6;
}
