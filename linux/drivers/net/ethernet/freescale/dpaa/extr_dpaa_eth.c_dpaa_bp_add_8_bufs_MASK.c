
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dpaa_bp {struct device* dev; int size; int raw_size; } ;
struct device {int dummy; } ;
struct bm_buffer {scalar_t__ data; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct bm_buffer*,int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,void*,int ,int ) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct dpaa_bp const*,struct bm_buffer*,int) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(const struct dpaa_bp *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct bm_buffer VAR_4[8];
 dma_addr_t VAR_5;
 void *VAR_6;
 u8 VAR_7;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_6 = FUNC_8(VAR_2->raw_size);
  if (FUNC_9(!VAR_6)) {
   FUNC_3(VAR_3, "netdev_alloc_frag() failed, size %zu\n",
    VAR_2->raw_size);
   goto release_previous_buffs;
  }
  VAR_6 = FUNC_0(VAR_6, VAR_1);

  VAR_5 = FUNC_4(VAR_3, VAR_6,
          VAR_2->size, VAR_0);
  if (FUNC_9(FUNC_5(VAR_3, VAR_5))) {
   FUNC_3(VAR_2->dev, "DMA map failed");
   goto release_previous_buffs;
  }

  VAR_4[VAR_7].data = 0;
  FUNC_2(&VAR_4[VAR_7], VAR_5);
 }

release_bufs:
 return FUNC_6(VAR_2, VAR_4, VAR_7);

release_previous_buffs:
 FUNC_1(1, "dpaa_eth: failed to add buffers on Rx\n");

 FUNC_2(&VAR_4[VAR_7], 0);



 if (FUNC_7(VAR_7))
  goto release_bufs;

 return 0;
}
