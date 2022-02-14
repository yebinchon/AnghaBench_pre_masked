
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_ring {struct skge_element* start; struct skge_element* to_clean; } ;
struct skge_port {scalar_t__ rx_buf_size; struct skge_ring rx_ring; } ;
struct skge_element {struct skge_element* next; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (struct net_device*,scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct skge_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct skge_port*,struct skge_element*,struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 struct skge_port *VAR_5 = FUNC_2(VAR_4);
 struct skge_ring *VAR_6 = &VAR_5->rx_ring;
 struct skge_element *VAR_7;

 VAR_7 = VAR_6->start;
 do {
  struct sk_buff *VAR_8;

  VAR_8 = FUNC_0(VAR_4, VAR_5->rx_buf_size + VAR_3,
      VAR_2);
  if (!VAR_8)
   return -VAR_1;

  FUNC_3(VAR_8, VAR_3);
  if (FUNC_4(VAR_5, VAR_7, VAR_8, VAR_5->rx_buf_size) < 0) {
   FUNC_1(VAR_8);
   return -VAR_0;
  }
 } while ((VAR_7 = VAR_7->next) != VAR_6->start);

 VAR_6->to_clean = VAR_6->start;
 return 0;
}
