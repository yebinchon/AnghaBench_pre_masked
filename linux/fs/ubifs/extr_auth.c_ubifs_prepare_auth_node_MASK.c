
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ubifs_info {int hash_tfm; } ;
struct TYPE_6__ {int node_type; } ;
struct ubifs_auth_node {TYPE_1__ ch; int hmac; } ;
struct shash_desc {int dummy; } ;
struct TYPE_7__ {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*,int *,int ) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_auth_node*,int ,int ) ;
 int FUNC_8 (struct ubifs_info*,struct shash_desc*,TYPE_2__*) ;

int FUNC_9(struct ubifs_info *VAR_4, void *VAR_5,
        struct shash_desc *VAR_6)
{
 struct ubifs_auth_node *VAR_7 = VAR_5;
 u8 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(FUNC_1(VAR_4->hash_tfm), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 {
  FUNC_0(VAR_3, VAR_4->hash_tfm);

  VAR_3->tfm = VAR_4->hash_tfm;
  FUNC_8(VAR_4, VAR_6, VAR_3);

  VAR_9 = FUNC_2(VAR_3, VAR_8);
  if (VAR_9)
   goto out;
 }

 VAR_9 = FUNC_6(VAR_4, VAR_8, VAR_7->hmac);
 if (VAR_9)
  goto out;

 VAR_7->ch.node_type = VAR_2;
 FUNC_7(VAR_4, VAR_7, FUNC_5(VAR_4), 0);

 VAR_9 = 0;
out:
 FUNC_3(VAR_8);

 return VAR_9;
}
