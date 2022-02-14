
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct geni_wrapper {int dev; } ;
struct geni_se {scalar_t__ base; struct geni_wrapper* wrapper; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,void*,size_t,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (size_t,scalar_t__) ;

int FUNC_5(struct geni_se *VAR_11, void *VAR_12, size_t VAR_13,
   dma_addr_t *VAR_14)
{
 struct geni_wrapper *VAR_15 = VAR_11->wrapper;
 u32 VAR_16;

 if (!VAR_15)
  return -VAR_1;

 *VAR_14 = FUNC_0(VAR_15->dev, VAR_12, VAR_13, VAR_0);
 if (FUNC_1(VAR_15->dev, *VAR_14))
  return -VAR_2;

 VAR_16 = VAR_4;
 VAR_16 |= VAR_5;
 VAR_16 |= VAR_3;
 FUNC_4(VAR_16, VAR_11->base + VAR_7);
 FUNC_4(FUNC_2(*VAR_14), VAR_11->base + VAR_10);
 FUNC_4(FUNC_3(*VAR_14), VAR_11->base + VAR_9);

 FUNC_4(0, VAR_11->base + VAR_6);
 FUNC_4(VAR_13, VAR_11->base + VAR_8);
 return 0;
}
