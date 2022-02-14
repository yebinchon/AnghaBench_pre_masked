
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_dma_comp_cb {int temp_buf_to_free; scalar_t__ is_cache; int sdev; int temp_phys; int len; scalar_t__ header_padding; scalar_t__ temp_buf; scalar_t__ dst_window; int dst_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct scif_dma_comp_cb *VAR_3 = VAR_2;


 if (VAR_3->dst_window)
  FUNC_2(VAR_3->dst_offset,
     VAR_3->dst_window,
     VAR_3->temp_buf +
     VAR_3->header_padding,
     VAR_3->len, 0);
 FUNC_3(VAR_3->temp_phys, VAR_3->sdev,
     VAR_0);
 if (VAR_3->is_cache)
  FUNC_1(VAR_1,
    VAR_3->temp_buf_to_free);
 else
  FUNC_0(VAR_3->temp_buf_to_free);
}
