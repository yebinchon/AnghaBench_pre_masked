
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ssb_device {struct ssb_bus* bus; } ;
struct ssb_bus {int sdio_sbaddr; int host_sdio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ssb_bus*) ;
 int FUNC_5 (struct ssb_bus*,struct ssb_device*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static u8 FUNC_7(struct ssb_device *VAR_1, u16 VAR_2)
{
 struct ssb_bus *VAR_3 = VAR_1->bus;
 u8 VAR_4 = 0xff;
 int VAR_5 = 0;

 FUNC_1(VAR_3->host_sdio);
 if (FUNC_6(FUNC_5(VAR_3, VAR_1)))
  goto out;
 VAR_2 |= VAR_3->sdio_sbaddr & 0xffff;
 VAR_2 &= VAR_0;
 VAR_4 = FUNC_2(VAR_3->host_sdio, VAR_2, &VAR_5);
 if (VAR_5) {
  FUNC_0(FUNC_4(VAR_3), "%04X:%04X > %02x, error %d\n",
   VAR_3->sdio_sbaddr >> 16, VAR_2, VAR_4, VAR_5);
 }
out:
 FUNC_3(VAR_3->host_sdio);

 return VAR_4;
}
