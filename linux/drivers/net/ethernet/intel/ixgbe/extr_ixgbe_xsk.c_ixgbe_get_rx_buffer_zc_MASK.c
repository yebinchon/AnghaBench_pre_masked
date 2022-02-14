
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_rx_buffer {int dma; } ;
struct ixgbe_ring {size_t next_to_clean; int dev; struct ixgbe_rx_buffer* rx_buffer_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,unsigned int,int ) ;

__attribute__((used)) static struct
ixgbe_rx_buffer *FUNC_1(struct ixgbe_ring *VAR_1,
     unsigned int VAR_2)
{
 struct ixgbe_rx_buffer *VAR_3;

 VAR_3 = &VAR_1->rx_buffer_info[VAR_1->next_to_clean];


 FUNC_0(VAR_1->dev,
          VAR_3->dma, 0,
          VAR_2,
          VAR_0);

 return VAR_3;
}
