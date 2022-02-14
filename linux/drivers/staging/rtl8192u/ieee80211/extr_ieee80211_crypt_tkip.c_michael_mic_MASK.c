
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct crypto_shash {int dummy; } ;
struct TYPE_7__ {struct crypto_shash* tfm; } ;


 int FUNC_0 (TYPE_1__*,struct crypto_shash*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct crypto_shash*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct crypto_shash *VAR_1, u8 *VAR_2, u8 *VAR_3,
         u8 *VAR_4, size_t VAR_5, u8 *VAR_6)
{
 FUNC_0(VAR_0, VAR_1);
 int VAR_7;

 VAR_0->tfm = VAR_1;

 if (FUNC_3(VAR_1, VAR_2, 8))
  return -1;

 VAR_7 = FUNC_2(VAR_0);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_4(VAR_0, VAR_3, 16);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_4(VAR_0, VAR_4, VAR_5);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_1(VAR_0, VAR_6);

out:
 FUNC_5(VAR_0);
 return VAR_7;
}
