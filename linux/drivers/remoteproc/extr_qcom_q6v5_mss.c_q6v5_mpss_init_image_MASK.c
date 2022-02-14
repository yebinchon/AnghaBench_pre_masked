
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {int dev; scalar_t__ rmb_base; } ;
struct firmware {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (int ,size_t,int *,int ,unsigned long) ;
 int FUNC_6 (int ,size_t,void*,int ,unsigned long) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,void*,size_t) ;
 int FUNC_9 (struct q6v5*,int ,int) ;
 int FUNC_10 (struct q6v5*,int*,int,int ,size_t) ;
 void* FUNC_11 (struct firmware const*,size_t*) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct q6v5 *VAR_10, const struct firmware *VAR_11)
{
 unsigned long VAR_12 = VAR_0;
 dma_addr_t VAR_13;
 void *VAR_14;
 int VAR_15;
 int VAR_16;
 size_t VAR_17;
 void *VAR_18;
 int VAR_19;

 VAR_14 = FUNC_11(VAR_11, &VAR_17);
 if (FUNC_1(VAR_14))
  return FUNC_2(VAR_14);

 VAR_18 = FUNC_5(VAR_10->dev, VAR_17, &VAR_13, VAR_4, VAR_12);
 if (!VAR_18) {
  FUNC_7(VAR_14);
  FUNC_3(VAR_10->dev, "failed to allocate mdt buffer\n");
  return -VAR_2;
 }

 FUNC_8(VAR_18, VAR_14, VAR_17);


 VAR_15 = FUNC_0(VAR_5);
 VAR_19 = FUNC_10(VAR_10, &VAR_15, 1, VAR_13, VAR_17);
 if (VAR_19) {
  FUNC_3(VAR_10->dev,
   "assigning Q6 access to metadata failed: %d\n", VAR_19);
  VAR_19 = -VAR_1;
  goto free_dma_attrs;
 }

 FUNC_12(VAR_13, VAR_10->rmb_base + VAR_9);
 FUNC_12(VAR_6, VAR_10->rmb_base + VAR_7);

 VAR_19 = FUNC_9(VAR_10, VAR_8, 1000);
 if (VAR_19 == -VAR_3)
  FUNC_3(VAR_10->dev, "MPSS header authentication timed out\n");
 else if (VAR_19 < 0)
  FUNC_3(VAR_10->dev, "MPSS header authentication failed: %d\n", VAR_19);


 VAR_16 = FUNC_10(VAR_10, &VAR_15, 0, VAR_13, VAR_17);
 if (VAR_16)
  FUNC_4(VAR_10->dev,
    "mdt buffer not reclaimed system may become unstable\n");

free_dma_attrs:
 FUNC_6(VAR_10->dev, VAR_17, VAR_18, VAR_13, VAR_12);
 FUNC_7(VAR_14);

 return VAR_19 < 0 ? VAR_19 : 0;
}
