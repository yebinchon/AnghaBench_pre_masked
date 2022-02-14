
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct enetc_rx_swbd {int page_offset; int dma; } ;
struct enetc_bdr {int dev; struct enetc_rx_swbd* rx_swbd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static struct enetc_rx_swbd *FUNC_1(struct enetc_bdr *VAR_1,
            int VAR_2, u16 VAR_3)
{
 struct enetc_rx_swbd *VAR_4 = &VAR_1->rx_swbd[VAR_2];

 FUNC_0(VAR_1->dev, VAR_4->dma,
          VAR_4->page_offset,
          VAR_3, VAR_0);
 return VAR_4;
}
