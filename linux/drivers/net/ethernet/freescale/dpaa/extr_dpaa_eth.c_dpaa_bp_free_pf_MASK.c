
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_bp {int size; int dev; } ;
struct bm_buffer {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct bm_buffer*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(const struct dpaa_bp *VAR_1,
       struct bm_buffer *VAR_2)
{
 dma_addr_t VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_1->dev, VAR_3, VAR_1->size, VAR_0);

 FUNC_3(FUNC_2(VAR_3));
}
