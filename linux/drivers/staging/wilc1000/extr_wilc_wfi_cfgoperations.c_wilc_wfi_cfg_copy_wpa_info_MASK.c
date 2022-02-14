
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_wfi_key {scalar_t__ key_len; scalar_t__ seq_len; int cipher; void* seq; void* key; } ;
struct key_params {scalar_t__ key_len; scalar_t__ seq_len; int cipher; int seq; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct wilc_wfi_key *VAR_2,
          struct key_params *VAR_3)
{
 FUNC_0(VAR_2->key);

 VAR_2->key = FUNC_1(VAR_3->key, VAR_3->key_len, VAR_1);
 if (!VAR_2->key)
  return -VAR_0;

 FUNC_0(VAR_2->seq);

 if (VAR_3->seq_len > 0) {
  VAR_2->seq = FUNC_1(VAR_3->seq, VAR_3->seq_len,
     VAR_1);
  if (!VAR_2->seq)
   return -VAR_0;
 }

 VAR_2->cipher = VAR_3->cipher;
 VAR_2->key_len = VAR_3->key_len;
 VAR_2->seq_len = VAR_3->seq_len;

 return 0;
}
