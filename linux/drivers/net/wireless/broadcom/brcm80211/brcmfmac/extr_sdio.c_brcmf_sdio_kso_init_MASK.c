
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_sdio {int sdiodev; struct brcmf_core* sdio_core; } ;
struct brcmf_core {int rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct brcmf_sdio *VAR_5)
{
 struct brcmf_core *VAR_6 = VAR_5->sdio_core;
 u8 VAR_7;
 int VAR_8 = 0;

 FUNC_0(VAR_4, "Enter\n");


 if (VAR_6->rev < 12)
  return 0;

 VAR_7 = FUNC_2(VAR_5->sdiodev, VAR_0, &VAR_8);
 if (VAR_8) {
  FUNC_1("error reading SBSDIO_FUNC1_SLEEPCSR\n");
  return VAR_8;
 }

 if (!(VAR_7 & VAR_2)) {
  VAR_7 |= (VAR_1 <<
   VAR_3);
  FUNC_3(VAR_5->sdiodev, VAR_0,
       VAR_7, &VAR_8);
  if (VAR_8) {
   FUNC_1("error writing SBSDIO_FUNC1_SLEEPCSR\n");
   return VAR_8;
  }
 }

 return 0;
}
