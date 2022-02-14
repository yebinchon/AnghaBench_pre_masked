
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_rx_swbd {int * page; int dma; int page_offset; } ;
struct enetc_bdr {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct enetc_bdr*,struct enetc_rx_swbd*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct enetc_bdr *VAR_4,
         struct enetc_rx_swbd *VAR_5)
{
 if (FUNC_4(FUNC_2(VAR_5->page))) {
  VAR_5->page_offset ^= VAR_2;
  FUNC_5(VAR_5->page);

  FUNC_3(VAR_4, VAR_5);


  FUNC_0(VAR_4->dev, VAR_5->dma,
       VAR_5->page_offset,
       VAR_1,
       VAR_0);
 } else {
  FUNC_1(VAR_4->dev, VAR_5->dma,
          VAR_3, VAR_0);
 }

 VAR_5->page = ((void*)0);
}
