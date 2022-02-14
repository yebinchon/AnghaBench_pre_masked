
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_queue {int snd_hash; int rcv_hash; } ;
struct crypto_ahash {int dummy; } ;


 int FUNC_0 (int ) ;
 struct crypto_ahash* FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_ahash*) ;

__attribute__((used)) static void FUNC_3(struct nvme_tcp_queue *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_1(VAR_0->rcv_hash);

 FUNC_0(VAR_0->rcv_hash);
 FUNC_0(VAR_0->snd_hash);
 FUNC_2(VAR_1);
}
