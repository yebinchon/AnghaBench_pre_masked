
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfp_bpf_map {int tid; struct nfp_app_bpf* bpf; } ;
struct nfp_app_bpf {int ccm; } ;
struct cmsg_req_map_op {void* flags; void* count; void* tid; } ;
struct cmsg_reply_map_op {int reply_hdr; int count; } ;
struct bpf_map {int value_size; int key_size; } ;
struct bpf_offloaded_map {struct bpf_map map; struct nfp_bpf_map* dev_priv; } ;
typedef enum nfp_ccm_type { ____Placeholder_nfp_ccm_type } nfp_ccm_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_app_bpf*,char*,int,int,...) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (struct nfp_app_bpf*,unsigned int) ;
 struct sk_buff* FUNC_8 (struct nfp_app_bpf*,int) ;
 unsigned int FUNC_9 (struct nfp_bpf_map*,int,int *,int *,int *,int *) ;
 int FUNC_10 (struct nfp_bpf_map*,int,struct sk_buff*,int ) ;
 int FUNC_11 (struct nfp_app_bpf*,int *) ;
 int * FUNC_12 (struct nfp_app_bpf*,struct cmsg_reply_map_op*,int ) ;
 int * FUNC_13 (struct nfp_app_bpf*,struct cmsg_reply_map_op*,int ) ;
 int * FUNC_14 (struct nfp_app_bpf*,struct cmsg_req_map_op*,int ) ;
 int * FUNC_15 (struct nfp_app_bpf*,struct cmsg_req_map_op*,int ) ;
 struct sk_buff* FUNC_16 (int *,struct sk_buff*,int,int ) ;

__attribute__((used)) static int
FUNC_17(struct bpf_offloaded_map *VAR_3, enum nfp_ccm_type VAR_4,
        u8 *VAR_5, u8 *VAR_6, u64 VAR_7, u8 *VAR_8, u8 *VAR_9)
{
 struct nfp_bpf_map *VAR_10 = VAR_3->dev_priv;
 unsigned int VAR_11, VAR_12, VAR_13;
 struct nfp_app_bpf *VAR_14 = VAR_10->bpf;
 struct bpf_map *VAR_15 = &VAR_3->map;
 struct cmsg_reply_map_op *VAR_16;
 struct cmsg_req_map_op *VAR_17;
 struct sk_buff *VAR_18;
 u32 VAR_19;
 int VAR_20;


 if (VAR_7 >> 32)
  return -VAR_2;


 VAR_11 = FUNC_9(VAR_10, VAR_4, VAR_5, VAR_8,
           VAR_9, &VAR_19);
 if (!VAR_11)
  return 0;

 VAR_18 = FUNC_8(VAR_14, 1);
 if (!VAR_18) {
  VAR_20 = -VAR_1;
  goto err_cache_put;
 }

 VAR_17 = (void *)VAR_18->data;
 VAR_17->tid = FUNC_4(VAR_10->tid);
 VAR_17->count = FUNC_4(VAR_11);
 VAR_17->flags = FUNC_4(VAR_7);


 if (VAR_5)
  FUNC_6(FUNC_14(VAR_14, VAR_17, 0), VAR_5, VAR_15->key_size);
 if (VAR_6)
  FUNC_6(FUNC_15(VAR_14, VAR_17, 0), VAR_6,
         VAR_15->value_size);

 VAR_18 = FUNC_16(&VAR_14->ccm, VAR_18, VAR_4, 0);
 if (FUNC_0(VAR_18)) {
  VAR_20 = FUNC_1(VAR_18);
  goto err_cache_put;
 }

 if (VAR_18->len < sizeof(*VAR_16)) {
  FUNC_3(VAR_14, "cmsg drop - type 0x%02x too short %d!\n",
     VAR_4, VAR_18->len);
  VAR_20 = -VAR_0;
  goto err_free;
 }

 VAR_16 = (void *)VAR_18->data;
 VAR_13 = FUNC_2(VAR_16->count);
 VAR_20 = FUNC_11(VAR_14, &VAR_16->reply_hdr);



 VAR_12 = VAR_13 + !!VAR_20;
 if (VAR_11 > 1 && VAR_13)
  VAR_20 = 0;
 if (VAR_20)
  goto err_free;

 if (VAR_18->len != FUNC_7(VAR_14, VAR_12)) {
  FUNC_3(VAR_14, "cmsg drop - type 0x%02x too short %d for %d entries!\n",
     VAR_4, VAR_18->len, VAR_12);
  VAR_20 = -VAR_0;
  goto err_free;
 }


 if (VAR_8)
  FUNC_6(VAR_8, FUNC_12(VAR_14, VAR_16, 0),
         VAR_15->key_size);
 if (VAR_9)
  FUNC_6(VAR_9, FUNC_13(VAR_14, VAR_16, 0),
         VAR_15->value_size);

 FUNC_10(VAR_10, VAR_4, VAR_18, VAR_19);

 return 0;
err_free:
 FUNC_5(VAR_18);
err_cache_put:
 FUNC_10(VAR_10, VAR_4, ((void*)0), VAR_19);
 return VAR_20;
}
