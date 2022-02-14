
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int rxsubchans; scalar_t__ mode; int std; } ;
struct i2c_client {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int ,char*,int,int,int,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_6 ;
 int FUNC_2 (struct i2c_client*,int) ;
 struct msp_state* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_7)
{
 struct msp_state *VAR_8 = FUNC_3(FUNC_1(VAR_7));
 int VAR_9 = FUNC_2(VAR_7, 0x0200);
 int VAR_10 = VAR_9 & 0x100;
 int VAR_11 = VAR_9 & 0x40;
 int VAR_12 = VAR_8->rxsubchans;

 if (VAR_8->mode == VAR_0)
  return 0;

 VAR_8->rxsubchans = 0;
 if (VAR_11)
  VAR_8->rxsubchans = VAR_5;
 else
  VAR_8->rxsubchans = VAR_3;
 if (VAR_10) {
  if (VAR_8->std == 0x20)
   VAR_8->rxsubchans |= VAR_4;
  else
   VAR_8->rxsubchans =
    VAR_1 | VAR_2;
 }
 FUNC_0(&VAR_7->dev, 1, VAR_6,
  "status=0x%x, stereo=%d, bilingual=%d -> rxsubchans=%d\n",
  VAR_9, VAR_11, VAR_10, VAR_8->rxsubchans);
 return (VAR_12 != VAR_8->rxsubchans);
}
