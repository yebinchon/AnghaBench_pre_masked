
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rj54n1 {int auto_wb; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*) ;
 struct rj54n1* FUNC_7 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_19)
{
 struct rj54n1 *VAR_20 = FUNC_7(VAR_19);
 int VAR_21 = FUNC_6(VAR_19);

 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_19, VAR_17, FUNC_0(VAR_17));
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_19, VAR_14, FUNC_0(VAR_14));


 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_8, 3 | (7 << 4));
 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_9, 0xf);


 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_7,
    VAR_2 | 1);


 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_11, 0x84);





 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_5, 0x27);

 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_19, VAR_15, FUNC_0(VAR_15));


 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_3, 0x80);

 if (!VAR_21)
  VAR_21 = FUNC_2(VAR_19, VAR_10);
 if (VAR_21 >= 0) {
  VAR_20->auto_wb = VAR_21 & 0x80;
  VAR_21 = FUNC_4(VAR_19, VAR_16, FUNC_0(VAR_16));
 }
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_19, VAR_18, FUNC_0(VAR_18));

 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_6,
    VAR_1 | VAR_0 | VAR_12);


 if (!VAR_21)
  VAR_21 = FUNC_5(VAR_19);


 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_6,
    VAR_1 | VAR_0 | VAR_13 | VAR_12);


 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_19, VAR_4, 2);


 FUNC_1(700);

 return VAR_21;
}
