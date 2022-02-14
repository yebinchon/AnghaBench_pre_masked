
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ssb_bus {int host_sdio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ssb_bus*) ;
 int FUNC_4 (struct ssb_bus*,scalar_t__) ;

int FUNC_5(struct ssb_bus *VAR_2, u8 VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_4 = (VAR_3 * VAR_0) + VAR_1;
 FUNC_1(VAR_2->host_sdio);
 VAR_5 = FUNC_4(VAR_2, VAR_4);
 FUNC_2(VAR_2->host_sdio);
 if (VAR_5) {
  FUNC_0(FUNC_3(VAR_2), "failed to switch to core %u,"
   " error %d\n", VAR_3, VAR_5);
  goto out;
 }
out:
 return VAR_5;
}
