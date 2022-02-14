
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_sdio_dev {int state; int bus_if; } ;
typedef enum brcmf_sdiod_state { ____Placeholder_brcmf_sdiod_state } brcmf_sdiod_state ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int,int) ;

void FUNC_2(struct brcmf_sdio_dev *VAR_4,
         enum brcmf_sdiod_state VAR_5)
{
 if (VAR_4->state == VAR_2 ||
     VAR_5 == VAR_4->state)
  return;

 FUNC_1(VAR_3, "%d -> %d\n", VAR_4->state, VAR_5);
 switch (VAR_4->state) {
 case 129:

  FUNC_0(VAR_4->bus_if, VAR_0);
  break;
 case 128:

  if (VAR_5 == 129)
   FUNC_0(VAR_4->bus_if, VAR_1);
  break;
 default:
  break;
 }
 VAR_4->state = VAR_5;
}
