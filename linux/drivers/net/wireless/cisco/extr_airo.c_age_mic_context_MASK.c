
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int valid; int window; int seed; scalar_t__ tx; scalar_t__ rx; struct TYPE_11__* key; } ;
typedef TYPE_1__ u8 ;
struct crypto_sync_skcipher {int dummy; } ;
typedef TYPE_1__ miccntx ;


 int FUNC_0 (int *,TYPE_1__*,int,struct crypto_sync_skcipher*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(miccntx *VAR_0, miccntx *VAR_1, u8 *VAR_2, int VAR_3,
       struct crypto_sync_skcipher *VAR_4)
{



 if (VAR_0->valid && (FUNC_1(VAR_0->key, VAR_2, VAR_3) == 0))
  return;


 FUNC_2(VAR_1, VAR_0, sizeof(*VAR_0));


 FUNC_2(VAR_0->key, VAR_2, VAR_3);
 VAR_0->window = 33;
 VAR_0->rx = 0;
 VAR_0->tx = 0;
 VAR_0->valid = 1;


 FUNC_0(&VAR_0->seed, VAR_2, VAR_3, VAR_4);
}
