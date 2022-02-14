
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_bdr {size_t bd_count; int bd_dma_base; int bd_base; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,size_t,int *,int ) ;
 int FUNC_2 (int ,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct enetc_bdr *VAR_3, size_t VAR_4)
{
 VAR_3->bd_base = FUNC_1(VAR_3->dev, VAR_3->bd_count * VAR_4,
     &VAR_3->bd_dma_base, VAR_2);
 if (!VAR_3->bd_base)
  return -VAR_1;


 if (!FUNC_0(VAR_3->bd_dma_base, 128)) {
  FUNC_2(VAR_3->dev, VAR_3->bd_count * VAR_4, VAR_3->bd_base,
      VAR_3->bd_dma_base);
  return -VAR_0;
 }

 return 0;
}
