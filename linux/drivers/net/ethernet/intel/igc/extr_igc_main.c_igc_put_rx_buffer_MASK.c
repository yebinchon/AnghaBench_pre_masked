
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igc_rx_buffer {int * page; int pagecnt_bias; int dma; } ;
struct igc_ring {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct igc_rx_buffer*) ;
 int FUNC_3 (struct igc_ring*,struct igc_rx_buffer*) ;
 int FUNC_4 (struct igc_ring*) ;

__attribute__((used)) static void FUNC_5(struct igc_ring *VAR_2,
         struct igc_rx_buffer *VAR_3)
{
 if (FUNC_2(VAR_3)) {

  FUNC_3(VAR_2, VAR_3);
 } else {



  FUNC_1(VAR_2->dev, VAR_3->dma,
         FUNC_4(VAR_2), VAR_0,
         VAR_1);
  FUNC_0(VAR_3->page,
     VAR_3->pagecnt_bias);
 }


 VAR_3->page = ((void*)0);
}
