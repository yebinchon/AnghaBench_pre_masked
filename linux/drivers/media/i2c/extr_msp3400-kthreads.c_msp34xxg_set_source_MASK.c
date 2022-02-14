
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct msp_state {int audmode; scalar_t__ has_dolby_pro_logic; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *,int,int ,char*,int,int,int ) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct msp_state* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_3, u16 VAR_4, int VAR_5)
{
 struct msp_state *VAR_6 = FUNC_3(FUNC_1(VAR_3));
 int VAR_7, VAR_8;

 switch (VAR_6->audmode) {
 case 129:
  VAR_7 = 0;
  VAR_8 = 0x30;
  break;
 case 130:
  VAR_7 = 4;
  VAR_8 = 0x10;
  break;
 case 131:
  VAR_7 = 1;
  VAR_8 = 0x20;
  break;
 case 132:
  VAR_7 = 3;
  VAR_8 = 0x00;
  break;
 case 128:
 default:
  VAR_7 = 3;
  VAR_8 = 0x20;
  break;
 }

 if (VAR_5 == VAR_1)
  VAR_7 = (VAR_7 << 8) | 0x20;


 else if (VAR_5 >= VAR_0 && VAR_6->has_dolby_pro_logic)
  VAR_7 = ((VAR_5 + 1) << 8) | VAR_8;
 else
  VAR_7 = (VAR_5 << 8) | VAR_8;

 FUNC_0(&VAR_3->dev, 1, VAR_2,
  "set source to %d (0x%x) for output %02x\n", VAR_5, VAR_7, VAR_4);
 FUNC_2(VAR_3, VAR_4, VAR_7);
}
