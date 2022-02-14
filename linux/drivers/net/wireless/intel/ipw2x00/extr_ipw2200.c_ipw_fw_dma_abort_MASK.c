
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ last_cb_index; } ;
struct ipw_priv {TYPE_1__ sram_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ipw_priv *VAR_3)
{
 u32 VAR_4 = 0;

 FUNC_0(">> :\n");


 VAR_4 = VAR_1 | VAR_0;
 FUNC_1(VAR_3, VAR_2, VAR_4);
 VAR_3->sram_desc.last_cb_index = 0;

 FUNC_0("<<\n");
}
