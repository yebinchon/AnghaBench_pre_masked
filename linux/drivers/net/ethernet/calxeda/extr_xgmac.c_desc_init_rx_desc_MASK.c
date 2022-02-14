
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_dma_desc {int buf_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xgmac_dma_desc*,int) ;
 int FUNC_2 (struct xgmac_dma_desc*,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct xgmac_dma_desc *VAR_1, int VAR_2,
         int VAR_3)
{
 struct xgmac_dma_desc *VAR_4 = VAR_1 + VAR_2 - 1;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1) * VAR_2);

 for (; VAR_1 <= VAR_4; VAR_1++)
  FUNC_1(VAR_1, VAR_3);

 VAR_4->buf_size |= FUNC_0(VAR_0);
}
