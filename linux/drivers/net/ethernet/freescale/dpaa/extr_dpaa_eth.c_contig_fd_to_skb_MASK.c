
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct sk_buff {int ip_summed; } ;
struct qm_fd {int bpid; } ;
struct dpaa_priv {scalar_t__ rx_headroom; } ;
struct dpaa_bp {scalar_t__ size; } ;
typedef scalar_t__ ssize_t ;
typedef int dma_addr_t ;


 int FUNC_0 (unsigned long,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,char*) ;
 struct sk_buff* FUNC_4 (void*,scalar_t__) ;
 struct dpaa_bp* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct qm_fd const*) ;
 int FUNC_8 (struct qm_fd const*) ;
 scalar_t__ FUNC_9 (struct qm_fd const*) ;
 int FUNC_10 (struct dpaa_priv const*,struct qm_fd const*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_14(const struct dpaa_priv *VAR_1,
     const struct qm_fd *VAR_2)
{
 ssize_t VAR_3 = FUNC_9(VAR_2);
 dma_addr_t VAR_4 = FUNC_7(VAR_2);
 struct dpaa_bp *VAR_5;
 struct sk_buff *VAR_6;
 void *VAR_7;

 VAR_7 = FUNC_6(VAR_4);
 FUNC_2(!FUNC_0((unsigned long)VAR_7, VAR_0));

 VAR_5 = FUNC_5(VAR_2->bpid);
 if (!VAR_5)
  goto free_buffer;

 VAR_6 = FUNC_4(VAR_7, VAR_5->size +
   FUNC_1(sizeof(struct skb_shared_info)));
 if (FUNC_3(!VAR_6, "Build skb failure on Rx\n"))
  goto free_buffer;
 FUNC_2(VAR_3 != VAR_1->rx_headroom);
 FUNC_13(VAR_6, VAR_3);
 FUNC_12(VAR_6, FUNC_8(VAR_2));

 VAR_6->ip_summed = FUNC_10(VAR_1, VAR_2);

 return VAR_6;

free_buffer:
 FUNC_11(VAR_7);
 return ((void*)0);
}
