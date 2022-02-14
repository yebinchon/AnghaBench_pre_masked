
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ubifs_info {int hmac_desc_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void const*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct ubifs_info const*,void const*,int,int,int *) ;

int FUNC_4(const struct ubifs_info *VAR_3, const void *VAR_4,
        int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_3->hmac_desc_len;
 u8 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_7, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_8);
  return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_8, VAR_4 + VAR_6, VAR_7);

 FUNC_1(VAR_8);

 if (!VAR_9)
  return 0;

 return -VAR_1;
}
