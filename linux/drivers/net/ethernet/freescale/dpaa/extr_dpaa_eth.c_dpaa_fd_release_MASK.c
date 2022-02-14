
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_sg_entry {int dummy; } ;
struct qm_fd {int bpid; } ;
struct net_device {int dummy; } ;
struct dpaa_bp {int dev; int size; } ;
struct bm_buffer {scalar_t__ data; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct bm_buffer*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct dpaa_bp*,struct bm_buffer*,int) ;
 struct dpaa_bp* FUNC_6 (int ) ;
 int FUNC_7 (struct qm_sg_entry*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct qm_fd const*) ;
 scalar_t__ FUNC_10 (struct qm_fd const*) ;
 int FUNC_11 (struct qm_fd const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_12(const struct net_device *VAR_2,
       const struct qm_fd *VAR_3)
{
 struct qm_sg_entry *VAR_4;
 struct dpaa_bp *VAR_5;
 struct bm_buffer VAR_6;
 dma_addr_t VAR_7;
 void *VAR_8;

 VAR_6.data = 0;
 FUNC_0(&VAR_6, FUNC_9(VAR_3));

 VAR_5 = FUNC_6(VAR_3->bpid);
 if (!VAR_5)
  return;

 if (FUNC_10(VAR_3) == VAR_1) {
  VAR_8 = FUNC_8(FUNC_9(VAR_3));
  VAR_4 = VAR_8 + FUNC_11(VAR_3);

  FUNC_4(VAR_5->dev, FUNC_9(VAR_3), VAR_5->size,
     VAR_0);

  FUNC_7(VAR_4);

  VAR_7 = FUNC_2(VAR_5->dev, VAR_8, VAR_5->size,
          VAR_0);
  if (FUNC_3(VAR_5->dev, VAR_7)) {
   FUNC_1(VAR_5->dev, "DMA mapping failed");
   return;
  }
  FUNC_0(&VAR_6, VAR_7);
 }

 FUNC_5(VAR_5, &VAR_6, 1);
}
