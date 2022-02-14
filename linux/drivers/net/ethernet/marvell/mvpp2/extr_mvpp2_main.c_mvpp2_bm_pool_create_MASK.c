
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mvpp2_bm_pool {int size_bytes; int size; scalar_t__ buf_num; scalar_t__ pkt_size; int id; int dma_addr; scalar_t__ virt_addr; } ;
struct mvpp2 {scalar_t__ hw_version; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct device*,char*,int ,int) ;
 scalar_t__ FUNC_5 (struct device*,int,int *,int ) ;
 int FUNC_6 (struct device*,int,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mvpp2*,int ) ;
 int FUNC_9 (struct mvpp2*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_6, struct mvpp2 *VAR_7,
    struct mvpp2_bm_pool *VAR_8, int VAR_9)
{
 u32 VAR_10;




 if (!FUNC_0(VAR_9, 16))
  return -VAR_0;




 if (VAR_7->hw_version == VAR_3)
  VAR_8->size_bytes = 2 * sizeof(u32) * VAR_9;
 else
  VAR_8->size_bytes = 2 * sizeof(u64) * VAR_9;

 VAR_8->virt_addr = FUNC_5(VAR_6, VAR_8->size_bytes,
      &VAR_8->dma_addr,
      VAR_2);
 if (!VAR_8->virt_addr)
  return -VAR_1;

 if (!FUNC_0((unsigned long)VAR_8->virt_addr,
   VAR_4)) {
  FUNC_6(VAR_6, VAR_8->size_bytes,
      VAR_8->virt_addr, VAR_8->dma_addr);
  FUNC_4(VAR_6, "BM pool %d is not %d bytes aligned\n",
   VAR_8->id, VAR_4);
  return -VAR_1;
 }

 FUNC_9(VAR_7, FUNC_1(VAR_8->id),
      FUNC_7(VAR_8->dma_addr));
 FUNC_9(VAR_7, FUNC_3(VAR_8->id), VAR_9);

 VAR_10 = FUNC_8(VAR_7, FUNC_2(VAR_8->id));
 VAR_10 |= VAR_5;
 FUNC_9(VAR_7, FUNC_2(VAR_8->id), VAR_10);

 VAR_8->size = VAR_9;
 VAR_8->pkt_size = 0;
 VAR_8->buf_num = 0;

 return 0;
}
