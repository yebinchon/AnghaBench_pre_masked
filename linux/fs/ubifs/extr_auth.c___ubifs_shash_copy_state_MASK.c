
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ubifs_info {int dummy; } ;
struct shash_desc {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct shash_desc*,int *) ;
 int FUNC_2 (struct shash_desc*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;

int FUNC_5(const struct ubifs_info *VAR_2, struct shash_desc *VAR_3,
        struct shash_desc *VAR_4)
{
 u8 *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(FUNC_0(VAR_3->tfm), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_2(VAR_4, VAR_5);

out:
 FUNC_3(VAR_5);

 return VAR_6;
}
