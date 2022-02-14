
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_cbdr {int bd_count; scalar_t__ next_to_use; scalar_t__ next_to_clean; int bd_dma_base; int bd_base; } ;
struct enetc_cbd {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (struct device*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct enetc_cbdr *VAR_4)
{
 int VAR_5 = VAR_4->bd_count * sizeof(struct enetc_cbd);

 VAR_4->bd_base = FUNC_1(VAR_3, VAR_5, &VAR_4->bd_dma_base,
        VAR_2);
 if (!VAR_4->bd_base)
  return -VAR_1;


 if (!FUNC_0(VAR_4->bd_dma_base, 128)) {
  FUNC_2(VAR_3, VAR_5, VAR_4->bd_base, VAR_4->bd_dma_base);
  return -VAR_0;
 }

 VAR_4->next_to_clean = 0;
 VAR_4->next_to_use = 0;

 return 0;
}
