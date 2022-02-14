
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dcon_priv {int asleep; scalar_t__ bl_val; int disp_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dcon_priv*,int) ;
 int FUNC_1 (struct dcon_priv*,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int,int *,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(struct dcon_priv *VAR_2, bool VAR_3)
{
 int VAR_4;



 if (VAR_2->asleep == VAR_3)
  return;

 if (!FUNC_3(FUNC_2(0xc2)))
  return;

 if (VAR_3) {
  u8 VAR_5 = 0;

  VAR_4 = FUNC_4(VAR_0, &VAR_5, 1, ((void*)0), 0);
  if (VAR_4)
   FUNC_5("unable to force dcon to power down: %d!\n", VAR_4);
  else
   VAR_2->asleep = VAR_3;
 } else {

  if (VAR_2->bl_val != 0)
   VAR_2->disp_mode |= VAR_1;
  VAR_4 = FUNC_0(VAR_2, 1);
  if (VAR_4)
   FUNC_5("unable to reinit dcon hardware: %d!\n", VAR_4);
  else
   VAR_2->asleep = VAR_3;


  FUNC_1(VAR_2, VAR_2->bl_val);
 }


}
