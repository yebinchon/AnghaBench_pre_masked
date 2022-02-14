
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_wrapper {int dev; } ;
struct geni_se {struct geni_wrapper* wrapper; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,size_t,int ) ;

void FUNC_2(struct geni_se *VAR_1, dma_addr_t VAR_2, size_t VAR_3)
{
 struct geni_wrapper *VAR_4 = VAR_1->wrapper;

 if (VAR_2 && !FUNC_0(VAR_4->dev, VAR_2))
  FUNC_1(VAR_4->dev, VAR_2, VAR_3, VAR_0);
}
