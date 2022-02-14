
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int dummy; } ;
struct command_block {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ipw_priv*,int ) ;

__attribute__((used)) static int FUNC_3(struct ipw_priv *VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;

 FUNC_0("<< :\n");
 VAR_3 = FUNC_2(VAR_2, VAR_0);

 VAR_4 = (VAR_3 - VAR_1) /
     sizeof(struct command_block);

 FUNC_1("Current CB index 0x%x address = 0x%X\n",
     VAR_4, VAR_3);

 FUNC_0(">> :\n");
 return VAR_4;

}
