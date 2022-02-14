
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct crypto_shash {int dummy; } ;
struct TYPE_5__ {struct crypto_shash* tfm; } ;


 int FUNC_0 (TYPE_1__*,struct crypto_shash*) ;
 int FUNC_1 (TYPE_1__*,char*,int,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_1,
    char *VAR_2, int VAR_3, char *VAR_4)
{
 FUNC_0(VAR_0, VAR_1);
 int VAR_5;

 VAR_0->tfm = VAR_1;
 VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_0);
 return VAR_5;
}
