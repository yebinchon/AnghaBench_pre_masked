
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_adapter {int fw_release_number; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* VAR_1 ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*,char*,int,int,int,int) ;

int
FUNC_4(struct mwifiex_adapter *VAR_2, char *VAR_3,
          int VAR_4)
{
 union {
  __le32 l;
  u8 c[4];
 } VAR_5;
 char VAR_6[32];

 VAR_5.l = FUNC_0(VAR_2->fw_release_number);
 FUNC_3(VAR_6, "%u.%u.%u.p%u", VAR_5.c[2], VAR_5.c[1], VAR_5.c[0], VAR_5.c[3]);

 FUNC_2(VAR_3, VAR_4, VAR_1, VAR_6);

 FUNC_1(VAR_2, VAR_0, "info: MWIFIEX VERSION: %s\n", VAR_3);

 return 0;
}
