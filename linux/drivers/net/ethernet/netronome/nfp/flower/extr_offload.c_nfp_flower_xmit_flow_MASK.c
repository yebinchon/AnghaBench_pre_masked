
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct nfp_fl_rule_metadata {int dummy; } ;
struct TYPE_2__ {size_t key_len; size_t mask_len; size_t act_len; } ;
struct nfp_fl_payload {TYPE_1__ meta; TYPE_1__* action_data; TYPE_1__* mask_data; TYPE_1__* unmasked_data; } ;
struct nfp_app {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,TYPE_1__*,size_t) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct nfp_app*,size_t,int ,int ) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_4(struct nfp_app *VAR_3, struct nfp_fl_payload *VAR_4,
       u8 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct sk_buff *VAR_11;
 unsigned char *VAR_12;

 VAR_6 = sizeof(struct nfp_fl_rule_metadata);
 VAR_7 = VAR_4->meta.key_len;
 VAR_8 = VAR_4->meta.mask_len;
 VAR_9 = VAR_4->meta.act_len;

 VAR_10 = VAR_6 + VAR_7 + VAR_8 + VAR_9;




 VAR_4->meta.key_len >>= VAR_2;
 VAR_4->meta.mask_len >>= VAR_2;
 VAR_4->meta.act_len >>= VAR_2;

 VAR_11 = FUNC_2(VAR_3, VAR_10, VAR_5, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_11);
 FUNC_0(VAR_12, &VAR_4->meta, VAR_6);
 FUNC_0(&VAR_12[VAR_6], VAR_4->unmasked_data, VAR_7);
 FUNC_0(&VAR_12[VAR_6 + VAR_7], VAR_4->mask_data, VAR_8);
 FUNC_0(&VAR_12[VAR_6 + VAR_7 + VAR_8],
        VAR_4->action_data, VAR_9);




 VAR_4->meta.key_len <<= VAR_2;
 VAR_4->meta.mask_len <<= VAR_2;
 VAR_4->meta.act_len <<= VAR_2;

 FUNC_1(VAR_3->ctrl, VAR_11);

 return 0;
}
