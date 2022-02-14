
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;
typedef enum mxl111sf_mux_config { ____Placeholder_mxl111sf_mux_config } mxl111sf_mux_config ;


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







 int FUNC_0 (struct mxl111sf_state*,int,int*) ;
 int FUNC_1 (struct mxl111sf_state*,int,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct mxl111sf_state *VAR_11,
      enum mxl111sf_mux_config VAR_12)
{
 u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;

 FUNC_2("(%d)", VAR_12);

 VAR_21 = FUNC_0(VAR_11, 0x17, &VAR_15);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_0(VAR_11, 0x18, &VAR_16);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_0(VAR_11, 0x12, &VAR_13);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_0(VAR_11, 0x15, &VAR_14);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_0(VAR_11, 0x82, &VAR_18);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_0(VAR_11, 0x84, &VAR_19);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_0(VAR_11, 0x89, &VAR_20);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_0(VAR_11, 0x3D, &VAR_17);
 if (FUNC_3(VAR_21))
  goto fail;

 switch (VAR_12) {
 case 134:

  VAR_15 |= VAR_4;

  VAR_16 |= VAR_5;

  VAR_16 &= ~VAR_6;

  VAR_17 &= ~VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 &= ~VAR_1;

  VAR_17 &= ~VAR_10;

  VAR_18 |= VAR_2;

  VAR_18 |= VAR_7;

  VAR_18 |= VAR_3;

  VAR_18 |= VAR_9;

  VAR_19 |= 0xF0;

  VAR_20 |= 0xF0;
  break;
 case 133:

  VAR_15 |= VAR_4;

  VAR_16 &= ~VAR_5;

  VAR_16 |= VAR_6;

  VAR_17 &= ~VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 &= ~VAR_1;

  VAR_17 &= ~VAR_10;

  VAR_18 |= VAR_2;

  VAR_18 |= VAR_7;

  VAR_18 |= VAR_3;

  VAR_18 |= VAR_9;

  VAR_19 |= 0xF0;

  VAR_20 |= 0xF0;
  break;
 case 135:

  VAR_15 &= ~VAR_4;

  VAR_16 &= ~VAR_5;

  VAR_16 &= ~VAR_6;

  VAR_17 &= ~VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 &= ~VAR_1;

  VAR_17 &= ~VAR_10;

  VAR_18 &= ~VAR_2;

  VAR_18 &= ~VAR_7;

  VAR_18 &= ~VAR_3;

  VAR_18 &= ~VAR_9;

  VAR_19 &= 0x0F;

  VAR_20 &= 0x0F;
  break;
 case 131:

  VAR_15 &= ~VAR_4;

  VAR_16 &= ~VAR_5;

  VAR_16 |= VAR_6;

  VAR_17 &= ~VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 &= ~VAR_1;

  VAR_17 &= ~VAR_10;

  VAR_18 &= ~VAR_2;

  VAR_18 &= ~VAR_7;

  VAR_18 &= ~VAR_3;

  VAR_18 &= ~VAR_9;

  VAR_19 &= 0x0F;

  VAR_20 &= 0x0F;
  break;
 case 130:

  VAR_15 &= ~VAR_4;

  VAR_16 &= ~VAR_5;

  VAR_16 |= VAR_6;

  VAR_17 |= VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 &= ~VAR_1;

  VAR_17 &= ~VAR_10;

  VAR_18 &= ~VAR_2;

  VAR_18 &= ~VAR_7;

  VAR_18 &= ~VAR_3;

  VAR_18 &= ~VAR_9;

  VAR_19 &= 0x0F;

  VAR_20 &= 0x0F;
  break;
 case 128:

  VAR_15 &= ~VAR_4;

  VAR_16 &= ~VAR_5;

  VAR_16 |= VAR_6;

  VAR_17 |= VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 |= VAR_1;

  VAR_17 |= VAR_10;

  VAR_18 &= ~VAR_2;

  VAR_18 &= ~VAR_7;

  VAR_18 &= ~VAR_3;

  VAR_18 &= ~VAR_9;

  VAR_19 &= 0x0F;

  VAR_20 &= 0x0F;
  break;
 case 129:

  VAR_15 &= ~VAR_4;

  VAR_16 &= ~VAR_5;

  VAR_16 |= VAR_6;

  VAR_17 &= ~VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 |= VAR_1;

  VAR_17 |= VAR_10;

  VAR_18 &= ~VAR_2;

  VAR_18 &= ~VAR_7;

  VAR_18 &= ~VAR_3;

  VAR_18 &= ~VAR_9;

  VAR_19 &= 0x0F;

  VAR_20 &= 0x0F;
  break;
 case 132:

  VAR_15 &= ~VAR_4;

  VAR_16 |= VAR_5;

  VAR_16 &= ~VAR_6;

  VAR_17 &= ~VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 &= ~VAR_1;

  VAR_17 &= ~VAR_10;

  VAR_18 &= ~VAR_2;

  VAR_18 &= ~VAR_7;

  VAR_18 &= ~VAR_3;

  VAR_18 &= ~VAR_9;

  VAR_19 &= 0x0F;

  VAR_20 &= 0x0F;
  break;
 case 137:

  VAR_15 &= ~VAR_4;

  VAR_16 &= ~VAR_5;

  VAR_16 &= ~VAR_6;

  VAR_17 &= ~VAR_8;

  VAR_13 |= VAR_0;

  VAR_14 |= VAR_1;

  VAR_17 &= ~VAR_10;

  VAR_18 &= ~VAR_2;

  VAR_18 &= ~VAR_7;

  VAR_18 &= ~VAR_3;

  VAR_18 &= ~VAR_9;

  VAR_19 &= 0x0F;

  VAR_20 &= 0x0F;
  break;
 case 136:
 default:

  VAR_15 |= VAR_4;

  VAR_16 &= ~VAR_5;

  VAR_16 &= ~VAR_6;

  VAR_17 &= ~VAR_8;

  VAR_13 &= ~VAR_0;

  VAR_14 &= ~VAR_1;

  VAR_17 &= ~VAR_10;

  VAR_18 &= ~VAR_2;

  VAR_18 &= ~VAR_7;

  VAR_18 &= ~VAR_3;

  VAR_18 &= ~VAR_9;

  VAR_19 &= 0x0F;

  VAR_20 &= 0x0F;
  break;
 }

 VAR_21 = FUNC_1(VAR_11, 0x17, VAR_15);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_1(VAR_11, 0x18, VAR_16);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_1(VAR_11, 0x12, VAR_13);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_1(VAR_11, 0x15, VAR_14);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_1(VAR_11, 0x82, VAR_18);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_1(VAR_11, 0x84, VAR_19);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_1(VAR_11, 0x89, VAR_20);
 if (FUNC_3(VAR_21))
  goto fail;
 VAR_21 = FUNC_1(VAR_11, 0x3D, VAR_17);
 if (FUNC_3(VAR_21))
  goto fail;
fail:
 return VAR_21;
}
