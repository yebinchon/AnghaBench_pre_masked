
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ssb_device {struct ssb_bus* bus; } ;
struct ssb_bus {int sdio_sbaddr; int quirks; int host_sdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int*) ;
 int FUNC_5 (struct ssb_bus*) ;
 int FUNC_6 (struct ssb_bus*,struct ssb_device*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ssb_device *VAR_3, u16 VAR_4, u32 VAR_5)
{
 struct ssb_bus *VAR_6 = VAR_3->bus;
 int VAR_7 = 0;

 FUNC_1(VAR_6->host_sdio);
 if (FUNC_7(FUNC_6(VAR_6, VAR_3)))
  goto out;
 VAR_4 |= VAR_6->sdio_sbaddr & 0xffff;
 VAR_4 &= VAR_1;
 VAR_4 |= VAR_0;
 FUNC_4(VAR_6->host_sdio, VAR_5, VAR_4, &VAR_7);
 if (VAR_7) {
  FUNC_0(FUNC_5(VAR_6), "%04X:%04X < %08x, error %d\n",
   VAR_6->sdio_sbaddr >> 16, VAR_4, VAR_5, VAR_7);
 }
 if (VAR_6->quirks & VAR_2)
  FUNC_2(VAR_6->host_sdio, 0, &VAR_7);
out:
 FUNC_3(VAR_6->host_sdio);
}
