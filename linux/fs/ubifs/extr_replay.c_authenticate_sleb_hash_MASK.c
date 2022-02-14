
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ubifs_info {int hash_tfm; } ;
struct shash_desc {int dummy; } ;
struct TYPE_5__ {int tfm; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct ubifs_info*,struct shash_desc*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_1, struct shash_desc *VAR_2, u8 *VAR_3)
{
 FUNC_0(VAR_0, VAR_1->hash_tfm);

 VAR_0->tfm = VAR_1->hash_tfm;

 FUNC_2(VAR_1, VAR_2, VAR_0);
 return FUNC_1(VAR_0, VAR_3);
}
