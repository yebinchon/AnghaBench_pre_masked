
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u32 ;
struct sk_buff {scalar_t__ data; } ;
struct nfp_app_bpf {int ccm; } ;
struct cmsg_req_map_alloc_tbl {scalar_t__ map_flags; void* map_type; void* max_entries; void* value_size; void* key_size; } ;
struct cmsg_reply_map_alloc_tbl {int tid; int reply_hdr; } ;
struct bpf_map {int map_type; int max_entries; int value_size; int key_size; } ;


 long long VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 long long FUNC_1 (struct sk_buff*) ;
 long long FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct nfp_app_bpf*,int) ;
 int FUNC_7 (struct nfp_app_bpf*,int *) ;
 struct sk_buff* FUNC_8 (int *,struct sk_buff*,int ,int) ;

long long int
FUNC_9(struct nfp_app_bpf *VAR_2, struct bpf_map *VAR_3)
{
 struct cmsg_reply_map_alloc_tbl *VAR_4;
 struct cmsg_req_map_alloc_tbl *VAR_5;
 struct sk_buff *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(VAR_2, sizeof(*VAR_5));
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = (void *)VAR_6->data;
 VAR_5->key_size = FUNC_3(VAR_3->key_size);
 VAR_5->value_size = FUNC_3(VAR_3->value_size);
 VAR_5->max_entries = FUNC_3(VAR_3->max_entries);
 VAR_5->map_type = FUNC_3(VAR_3->map_type);
 VAR_5->map_flags = 0;

 VAR_6 = FUNC_8(&VAR_2->ccm, VAR_6, VAR_1,
      sizeof(*VAR_4));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_4 = (void *)VAR_6->data;
 VAR_8 = FUNC_7(VAR_2, &VAR_4->reply_hdr);
 if (VAR_8)
  goto err_free;

 VAR_7 = FUNC_2(VAR_4->tid);
 FUNC_4(VAR_6);

 return VAR_7;
err_free:
 FUNC_5(VAR_6);
 return VAR_8;
}
