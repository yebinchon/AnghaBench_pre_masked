
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_queue {void* snd_hash; void* rcv_hash; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_ahash*) ;
 void* FUNC_2 (struct crypto_ahash*,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ,int *,int *) ;
 struct crypto_ahash* FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct crypto_ahash*) ;

__attribute__((used)) static int FUNC_7(struct nvmet_tcp_queue *VAR_3)
{
 struct crypto_ahash *VAR_4;

 VAR_4 = FUNC_5("crc32c", 0, VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->snd_hash = FUNC_2(VAR_4, VAR_2);
 if (!VAR_3->snd_hash)
  goto free_tfm;
 FUNC_4(VAR_3->snd_hash, 0, ((void*)0), ((void*)0));

 VAR_3->rcv_hash = FUNC_2(VAR_4, VAR_2);
 if (!VAR_3->rcv_hash)
  goto free_snd_hash;
 FUNC_4(VAR_3->rcv_hash, 0, ((void*)0), ((void*)0));

 return 0;
free_snd_hash:
 FUNC_3(VAR_3->snd_hash);
free_tfm:
 FUNC_6(VAR_4);
 return -VAR_1;
}
