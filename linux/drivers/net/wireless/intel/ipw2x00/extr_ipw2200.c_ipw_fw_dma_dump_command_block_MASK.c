
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ipw_priv*,int) ;

__attribute__((used)) static void FUNC_3(struct ipw_priv *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;

 FUNC_0(">> :\n");
 VAR_3 = FUNC_2(VAR_2, VAR_0);
 FUNC_1("Current CB is 0x%x\n", VAR_3);


 VAR_4 = FUNC_2(VAR_2, VAR_1);
 FUNC_1("IPW_DMA_I_DMA_CONTROL is 0x%x\n", VAR_4);


 VAR_5 = VAR_3;
 VAR_4 = FUNC_2(VAR_2, VAR_5);
 FUNC_1("Current CB Control Field is 0x%x\n", VAR_4);

 VAR_5 += sizeof(u32);
 VAR_4 = FUNC_2(VAR_2, VAR_5);
 FUNC_1("Current CB Source Field is 0x%x\n", VAR_4);

 VAR_5 += sizeof(u32);
 VAR_4 = FUNC_2(VAR_2, VAR_5);
 FUNC_1("Current CB Destination Field is 0x%x\n",
     VAR_4);

 VAR_5 += sizeof(u32);
 VAR_4 = FUNC_2(VAR_2, VAR_5);
 FUNC_1("Current CB Status Field is 0x%x\n", VAR_4);

 FUNC_0(">> :\n");
}
