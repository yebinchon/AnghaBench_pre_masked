
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ last_cb_index; } ;
struct ipw_priv {TYPE_1__ sram_desc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ipw_priv*) ;
 scalar_t__ FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (struct ipw_priv*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ipw_priv *VAR_3)
{
 u32 VAR_4 = 0, VAR_5;
 u32 VAR_6 = 0;

 FUNC_0(">> :\n");

 VAR_4 = FUNC_3(VAR_3);
 FUNC_1("sram_desc.last_cb_index:0x%08X\n",
     (int)VAR_3->sram_desc.last_cb_index);

 while (VAR_4 < VAR_3->sram_desc.last_cb_index) {
  FUNC_6(50);
  VAR_5 = VAR_4;
  VAR_4 = FUNC_3(VAR_3);

  if (VAR_5 < VAR_4) {
   VAR_6 = 0;
   continue;
  }
  if (++VAR_6 > 400) {
   FUNC_1("Timeout\n");
   FUNC_4(VAR_3);
   FUNC_2(VAR_3);
   return -1;
  }
 }

 FUNC_2(VAR_3);


 FUNC_5(VAR_3, VAR_0,
      VAR_1 | VAR_2);

 FUNC_0("<< dmaWaitSync\n");
 return 0;
}
