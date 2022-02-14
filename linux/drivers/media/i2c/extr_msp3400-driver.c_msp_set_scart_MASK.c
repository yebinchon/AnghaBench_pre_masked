
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int in_scart; int acb; int i2s_mode; scalar_t__ has_i2s_conf; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,int,int ,char*,int ,int,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_0 ;
 int FUNC_2 (struct i2c_client*,int,int ) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 int * VAR_1 ;
 int** VAR_2 ;
 struct msp_state* FUNC_4 (int ) ;

void FUNC_5(struct i2c_client *VAR_3, int VAR_4, int VAR_5)
{
 struct msp_state *VAR_6 = FUNC_4(FUNC_1(VAR_3));

 VAR_6->in_scart = VAR_4;

 if (VAR_4 >= 0 && VAR_4 <= 7 && VAR_5 >= 0 && VAR_5 <= 2) {
  if (-1 == VAR_2[VAR_5][VAR_4 + 1])
   return;

  VAR_6->acb &= ~VAR_2[VAR_5][0];
  VAR_6->acb |= VAR_2[VAR_5][VAR_4 + 1];
 } else
  VAR_6->acb = 0xf60;

 FUNC_0(&VAR_3->dev, 1, VAR_0, "scart switch: %s => %d (ACB=0x%04x)\n",
     VAR_1[VAR_4], VAR_5, VAR_6->acb);
 FUNC_3(VAR_3, 0x13, VAR_6->acb);


 if (VAR_6->has_i2s_conf)
  FUNC_2(VAR_3, 0x40, VAR_6->i2s_mode);
}
