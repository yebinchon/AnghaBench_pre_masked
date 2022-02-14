
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int vid_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cx25840_state*,int ,int*,int,int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*) ;
 struct cx25840_state* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_22)
{
 struct cx25840_state *VAR_23 = FUNC_4(FUNC_3(VAR_22));
 u8 VAR_24[3];
 unsigned int VAR_25;

 for (VAR_25 = 0; VAR_25 < 3; VAR_25++)
  VAR_24[VAR_25] = FUNC_1(VAR_22, 0x404 + VAR_25);

 if (VAR_23->vid_config & VAR_7)
  VAR_24[0] &= ~3;
 switch (VAR_23->vid_config & VAR_7) {
 case 130:
  VAR_24[0] |= 1;
  break;

 case 129:
  VAR_24[0] |= 2;
  break;

 case 128:
  VAR_24[0] |= 3;
  break;

 case 131:

 default:
  break;
 }

 FUNC_0(VAR_23, VAR_13, VAR_24,
    0, 2, VAR_12);
 FUNC_0(VAR_23, VAR_19, VAR_24,
    0, 3, VAR_18);
 FUNC_0(VAR_23, VAR_3, VAR_24,
    0, 4, VAR_2);
 FUNC_0(VAR_23, VAR_14, VAR_24,
    0, 5, VAR_15);
 FUNC_0(VAR_23, VAR_1, VAR_24,
    1, 2, VAR_0);
 FUNC_0(VAR_23, VAR_17, VAR_24,
    1, 3, VAR_16);
 FUNC_0(VAR_23, VAR_8, VAR_24,
    1, 4, VAR_9);

 if (VAR_23->vid_config & VAR_4)
  VAR_24[1] &= ~(3 << 6);
 switch (VAR_23->vid_config & VAR_4) {
 case 133:
  VAR_24[1] |= 2;
  break;

 case 132:
  VAR_24[1] |= 3;
  break;

 case 134:

 default:
  break;
 }

 FUNC_0(VAR_23, VAR_6, VAR_24,
    2, 0, VAR_5);
 FUNC_0(VAR_23, VAR_11, VAR_24,
    2, 1, VAR_10);
 FUNC_0(VAR_23, VAR_21, VAR_24,
    2, 4, VAR_20);

 for (VAR_25 = 0; VAR_25 < 3; VAR_25++)
  FUNC_2(VAR_22, 0x404 + VAR_25, VAR_24[VAR_25]);
}
