
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct dpaa2_sg_entry {int dummy; } ;
struct dpaa2_eth_priv {int iommu_domain; TYPE_2__* net_dev; } ;
struct dpaa2_eth_channel {int buf_count; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 struct sk_buff* FUNC_1 (void*,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct dpaa2_sg_entry*) ;
 int FUNC_5 (struct dpaa2_sg_entry*) ;
 int FUNC_6 (struct dpaa2_sg_entry*) ;
 scalar_t__ FUNC_7 (struct dpaa2_sg_entry*) ;
 int FUNC_8 (unsigned long,int ) ;
 unsigned long FUNC_9 (struct page*) ;
 int FUNC_10 (struct sk_buff*,int,struct page*,int,int ,int ) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (int) ;
 struct page* FUNC_14 (void*) ;
 struct page* FUNC_15 (void*) ;

__attribute__((used)) static struct sk_buff *FUNC_16(struct dpaa2_eth_priv *VAR_5,
          struct dpaa2_eth_channel *VAR_6,
          struct dpaa2_sg_entry *VAR_7)
{
 struct sk_buff *VAR_8 = ((void*)0);
 struct device *VAR_9 = VAR_5->net_dev->dev.parent;
 void *VAR_10;
 dma_addr_t VAR_11;
 u16 VAR_12;
 u32 VAR_13;
 struct page *VAR_14, *VAR_15;
 int VAR_16;
 int VAR_17;

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  struct dpaa2_sg_entry *VAR_18 = &VAR_7[VAR_17];






  VAR_11 = FUNC_4(VAR_18);
  VAR_10 = FUNC_3(VAR_5->iommu_domain, VAR_11);
  FUNC_2(VAR_9, VAR_11, VAR_3,
          VAR_0);

  VAR_13 = FUNC_5(VAR_18);

  if (VAR_17 == 0) {

   VAR_8 = FUNC_1(VAR_10, VAR_2);
   if (FUNC_13(!VAR_8)) {



    FUNC_8((unsigned long)VAR_10, 0);




    while (!FUNC_7(&VAR_7[VAR_17]) &&
           VAR_17 < VAR_1)
     VAR_17++;
    break;
   }

   VAR_12 = FUNC_6(VAR_18);
   FUNC_12(VAR_8, VAR_12);
   FUNC_11(VAR_8, VAR_13);
  } else {

   VAR_14 = FUNC_15(VAR_10);
   VAR_15 = FUNC_14(VAR_10);






   VAR_16 = ((unsigned long)VAR_10 &
    (VAR_4 - 1)) +
    (FUNC_9(VAR_14) - FUNC_9(VAR_15));

   FUNC_10(VAR_8, VAR_17 - 1, VAR_15, VAR_16,
     VAR_13, VAR_3);
  }

  if (FUNC_7(VAR_18))
   break;
 }

 FUNC_0(VAR_17 == VAR_1, "Final bit not set in SGT");


 VAR_6->buf_count -= VAR_17 + 2;

 return VAR_8;
}
