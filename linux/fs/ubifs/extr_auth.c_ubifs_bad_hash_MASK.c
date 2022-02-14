
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct ubifs_info {int hash_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info const*,void const*,int const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ubifs_info const*,char*,int,int,...) ;

void FUNC_3(const struct ubifs_info *VAR_1, const void *VAR_2, const u8 *VAR_3,
      int VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_1(VAR_1->hash_len, 20);
 int VAR_7 = VAR_6 != VAR_1->hash_len;
 const char *VAR_8 = VAR_7 ? "..." : "";

 u8 VAR_9[VAR_0];

 FUNC_0(VAR_1, VAR_2, VAR_9);

 FUNC_2(VAR_1, "hash mismatch on node at LEB %d:%d", VAR_4, VAR_5);
 FUNC_2(VAR_1, "hash expected:   %*ph%s", VAR_6, VAR_3, VAR_8);
 FUNC_2(VAR_1, "hash calculated: %*ph%s", VAR_6, VAR_9, VAR_8);
}
