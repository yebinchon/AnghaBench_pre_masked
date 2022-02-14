
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pucan_tx_msg {int size; } ;
struct peak_canfd_priv {int dummy; } ;
struct pciefd_page {int offset; } ;
struct pciefd_can {int tx_page_index; struct pciefd_page* tx_pages; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pciefd_can*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct peak_canfd_priv *VAR_1,
          struct pucan_tx_msg *VAR_2)
{
 struct pciefd_can *VAR_3 = (struct pciefd_can *)VAR_1;
 struct pciefd_page *VAR_4 = VAR_3->tx_pages + VAR_3->tx_page_index;


 VAR_4->offset += FUNC_0(VAR_2->size);


 FUNC_1(VAR_3, 1, VAR_0);

 return 0;
}
