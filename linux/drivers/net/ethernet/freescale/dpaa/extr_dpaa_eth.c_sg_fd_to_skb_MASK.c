
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct sk_buff {int ip_summed; } ;
struct qm_sg_entry {int bpid; } ;
struct qm_fd {int dummy; } ;
struct page {int dummy; } ;
struct dpaa_priv {int rx_headroom; } ;
struct dpaa_bp {unsigned int size; int percpu_count; int dev; } ;
typedef int ssize_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int VAR_2 ;
 unsigned int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 struct sk_buff* FUNC_4 (void*,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int,int ) ;
 struct dpaa_bp* FUNC_6 (int ) ;
 unsigned long FUNC_7 (struct page*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct qm_fd const*) ;
 int FUNC_10 (struct qm_fd const*) ;
 int FUNC_11 (struct qm_sg_entry const*) ;
 int FUNC_12 (struct qm_sg_entry const*) ;
 int FUNC_13 (struct qm_sg_entry const*) ;
 int FUNC_14 (struct qm_sg_entry const*) ;
 scalar_t__ FUNC_15 (struct qm_sg_entry const*) ;
 int FUNC_16 (struct dpaa_priv const*,struct qm_fd const*) ;
 int FUNC_17 (struct sk_buff*,int,struct page*,int,int,unsigned int) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int* FUNC_21 (int ) ;
 struct page* FUNC_22 (void*) ;
 struct page* FUNC_23 (void*) ;

__attribute__((used)) static struct sk_buff *FUNC_24(const struct dpaa_priv *VAR_4,
        const struct qm_fd *VAR_5)
{
 ssize_t VAR_6 = FUNC_10(VAR_5);
 dma_addr_t VAR_7 = FUNC_9(VAR_5);
 const struct qm_sg_entry *VAR_8;
 struct page *VAR_9, *VAR_10;
 struct dpaa_bp *VAR_11;
 void *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 struct sk_buff *VAR_16;
 dma_addr_t VAR_17;
 int VAR_18;
 unsigned int VAR_19;
 int *VAR_20;
 int VAR_21;

 VAR_12 = FUNC_8(VAR_7);
 FUNC_2(!FUNC_0((unsigned long)VAR_12, VAR_3));


 VAR_8 = VAR_12 + VAR_6;
 VAR_16 = ((void*)0);
 for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++) {

  FUNC_2(FUNC_14(&VAR_8[VAR_21]));

  VAR_17 = FUNC_11(&VAR_8[VAR_21]);
  VAR_13 = FUNC_8(VAR_17);
  FUNC_2(!FUNC_0((unsigned long)VAR_13,
        VAR_3));


  VAR_11 = FUNC_6(VAR_8[VAR_21].bpid);
  if (!VAR_11)
   goto free_buffers;

  VAR_20 = FUNC_21(VAR_11->percpu_count);
  FUNC_5(VAR_11->dev, VAR_17, VAR_11->size,
     VAR_0);
  if (!VAR_16) {
   VAR_19 = VAR_11->size +
    FUNC_1(sizeof(struct skb_shared_info));
   VAR_16 = FUNC_4(VAR_13, VAR_19);
   if (FUNC_2(!VAR_16))
    goto free_buffers;

   VAR_16->ip_summed = FUNC_16(VAR_4, VAR_5);




   FUNC_2(VAR_6 != VAR_4->rx_headroom);
   FUNC_20(VAR_16, VAR_6);
   FUNC_19(VAR_16, FUNC_12(&VAR_8[VAR_21]));
  } else {







   VAR_9 = FUNC_23(VAR_13);
   VAR_10 = FUNC_22(VAR_13);


   VAR_18 = ((unsigned long)VAR_13 &
     (VAR_2 - 1)) +
    (FUNC_7(VAR_9) - FUNC_7(VAR_10));



   VAR_14 = FUNC_13(&VAR_8[VAR_21]) + VAR_18;
   VAR_15 = FUNC_12(&VAR_8[VAR_21]);




   FUNC_17(VAR_16, VAR_21 - 1, VAR_10, VAR_14,
     VAR_15, VAR_11->size);
  }

  (*VAR_20)--;

  if (FUNC_15(&VAR_8[VAR_21]))
   break;
 }
 FUNC_3(VAR_21 == VAR_1, "No final bit on SGT\n");


 FUNC_18(VAR_12);

 return VAR_16;

free_buffers:

 for (VAR_21--; VAR_21 >= 0; VAR_21--) {
  VAR_11 = FUNC_6(VAR_8[VAR_21].bpid);
  if (VAR_11) {
   VAR_20 = FUNC_21(VAR_11->percpu_count);
   (*VAR_20)++;
  }
 }

 for (VAR_21 = 0; VAR_21 < VAR_1 ; VAR_21++) {
  VAR_17 = FUNC_11(&VAR_8[VAR_21]);
  VAR_13 = FUNC_8(VAR_17);
  FUNC_18(VAR_13);
  VAR_11 = FUNC_6(VAR_8[VAR_21].bpid);
  if (VAR_11) {
   VAR_20 = FUNC_21(VAR_11->percpu_count);
   (*VAR_20)--;
  }

  if (FUNC_15(&VAR_8[VAR_21]))
   break;
 }

 FUNC_18(VAR_12);

 return ((void*)0);
}
