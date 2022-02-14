
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct mvneta_rx_queue {int dummy; } ;
struct mvneta_rx_desc {int dummy; } ;
struct mvneta_port {scalar_t__ rx_offset_correction; TYPE_2__* dev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,struct page*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mvneta_rx_desc*,int ,struct page*,struct mvneta_rx_queue*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mvneta_port *VAR_3,
       struct mvneta_rx_desc *VAR_4,
       struct mvneta_rx_queue *VAR_5,
       gfp_t VAR_6)
{
 dma_addr_t VAR_7;
 struct page *VAR_8;

 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8)
  return -VAR_1;


 VAR_7 = FUNC_2(VAR_3->dev->dev.parent, VAR_8, 0, VAR_2,
     VAR_0);
 if (FUNC_5(FUNC_3(VAR_3->dev->dev.parent, VAR_7))) {
  FUNC_1(VAR_8);
  return -VAR_1;
 }

 VAR_7 += VAR_3->rx_offset_correction;
 FUNC_4(VAR_4, VAR_7, VAR_8, VAR_5);
 return 0;
}
