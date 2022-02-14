
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_23, u32 VAR_24, u32 VAR_25)
{
 u32 VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 bool VAR_30 = 0;
 u32 VAR_31;
 u32 VAR_32;
 int VAR_33;

 if ((VAR_24 != VAR_8) || (VAR_25 != VAR_7))
  VAR_30 = 1;
 if ((VAR_8 * VAR_25) > (VAR_7 * VAR_24)) {
  VAR_31 = (VAR_7 * VAR_24) / VAR_25;
  VAR_32 = VAR_7;
 } else {
  VAR_31 = VAR_8;
  VAR_32 = (VAR_8 * VAR_25) / VAR_24;
 }


 VAR_26 = (VAR_8 - VAR_31) / 2;
 VAR_27 = (VAR_7 - VAR_32) / 2;
 VAR_28 = VAR_26 + VAR_31 - 1;
 VAR_29 = VAR_27 + VAR_32 - 1;

 VAR_33 = FUNC_0(VAR_23, VAR_13, VAR_26 >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_14, VAR_26 & 0xff);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_19, VAR_27 >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_20, VAR_27 & 0xff);
 if (VAR_33)
  goto done;

 VAR_33 = FUNC_0(VAR_23, VAR_11, VAR_28 >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_12, VAR_28 & 0xff);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_17, VAR_29 >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_18, VAR_29 & 0xff);
 if (VAR_33)
  goto done;

 VAR_33 = FUNC_0(VAR_23, VAR_15, VAR_24 >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_16, VAR_24 & 0xff);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_21, VAR_25 >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_22, VAR_25 & 0xff);
 if (VAR_33)
  goto done;

 VAR_33 = FUNC_0(VAR_23, VAR_3, VAR_31 >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_4, VAR_31 & 0xff);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_5, VAR_32 >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_6, VAR_32 & 0xff);
 if (VAR_33)
  goto done;

 VAR_33 = FUNC_0(VAR_23, VAR_9,
          (VAR_31 - VAR_24) >> 8);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_10,
          (VAR_31 - VAR_24) & 0xff);
 if (VAR_33)
  goto done;

 VAR_33 = FUNC_0(VAR_23, VAR_0, 0xff);
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_1, 0xef |
         (VAR_30 << 4));
 if (VAR_33)
  goto done;
 VAR_33 = FUNC_0(VAR_23, VAR_2, 0xff);

done:
 return VAR_33;
}
