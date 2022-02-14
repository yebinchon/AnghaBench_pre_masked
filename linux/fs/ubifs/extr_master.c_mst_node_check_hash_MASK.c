
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ubifs_mst_node {int dummy; } ;
struct ubifs_info {int hash_tfm; } ;
struct ubifs_ch {int dummy; } ;
struct TYPE_4__ {int tfm; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,void const*,scalar_t__,int *) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (struct ubifs_info const*,int const*,int *) ;

__attribute__((used)) static int FUNC_3(const struct ubifs_info *VAR_4,
          const struct ubifs_mst_node *VAR_5,
          const u8 *VAR_6)
{
 u8 VAR_7[VAR_1];
 const void *VAR_8 = VAR_5;

 FUNC_0(VAR_3, VAR_4->hash_tfm);

 VAR_3->tfm = VAR_4->hash_tfm;

 FUNC_1(VAR_3, VAR_8 + sizeof(struct ubifs_ch),
       VAR_2 - sizeof(struct ubifs_ch), VAR_7);

 if (FUNC_2(VAR_4, VAR_6, VAR_7))
  return -VAR_0;

 return 0;
}
