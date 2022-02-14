
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ssb_bus {int sdio_sbaddr; int host_sdio; } ;


 int FUNC_0 (int ,char*,int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ssb_bus*) ;
 scalar_t__ FUNC_5 (int) ;

u32 FUNC_6(struct ssb_bus *VAR_0, u16 VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 FUNC_1(VAR_0->host_sdio);
 VAR_2 = FUNC_2(VAR_0->host_sdio, VAR_1, &VAR_3);
 FUNC_3(VAR_0->host_sdio);
 if (FUNC_5(VAR_3)) {
  FUNC_0(FUNC_4(VAR_0), "%04X:%04X > %08x, error %d\n",
   VAR_0->sdio_sbaddr >> 16, VAR_1, VAR_2, VAR_3);
 }

 return VAR_2;
}
