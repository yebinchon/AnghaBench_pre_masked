
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_sdio {int sleeping; scalar_t__ sr_enabled; int sdiodev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct brcmf_sdio*,int ,int) ;
 int FUNC_3 (struct brcmf_sdio*,int) ;
 int FUNC_4 (struct brcmf_sdio*,int) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_7(struct brcmf_sdio *VAR_6, bool VAR_7, bool VAR_8)
{
 int VAR_9 = 0;
 u8 VAR_10;

 FUNC_0(VAR_5, "Enter: request %s currently %s\n",
    (VAR_7 ? "SLEEP" : "WAKE"),
    (VAR_6->sleeping ? "SLEEP" : "WAKE"));


 if (VAR_6->sr_enabled) {

  if (VAR_7 == VAR_6->sleeping)
   goto end;


  if (VAR_7) {
   VAR_10 = FUNC_5(VAR_6->sdiodev,
         VAR_4,
         &VAR_9);
   if ((VAR_10 & VAR_3) == 0) {
    FUNC_0(VAR_5, "no clock, set ALP\n");
    FUNC_6(VAR_6->sdiodev,
         VAR_4,
         VAR_2, &VAR_9);
   }
   VAR_9 = FUNC_3(VAR_6, 0);
  } else {
   VAR_9 = FUNC_3(VAR_6, 1);
  }
  if (VAR_9) {
   FUNC_1("error while changing bus sleep state %d\n",
      VAR_9);
   goto done;
  }
 }

end:

 if (VAR_7) {
  if (!VAR_6->sr_enabled)
   FUNC_2(VAR_6, VAR_1, VAR_8);
 } else {
  FUNC_2(VAR_6, VAR_0, VAR_8);
  FUNC_4(VAR_6, 1);
 }
 VAR_6->sleeping = VAR_7;
 FUNC_0(VAR_5, "new state %s\n",
    (VAR_7 ? "SLEEP" : "WAKE"));
done:
 FUNC_0(VAR_5, "Exit: err=%d\n", VAR_9);
 return VAR_9;

}
