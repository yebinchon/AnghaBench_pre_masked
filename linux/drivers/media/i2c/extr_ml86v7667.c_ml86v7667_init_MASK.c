
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ml86v7667_priv {int std; int sd; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int,int) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ml86v7667_priv *VAR_21)
{
 struct i2c_client *VAR_22 = FUNC_3(&VAR_21->sd);
 int VAR_23;
 int VAR_24;


 VAR_24 = FUNC_2(VAR_22, VAR_9,
     VAR_7 | VAR_10,
     VAR_5 | VAR_10);


 VAR_24 |= FUNC_2(VAR_22, VAR_14, VAR_13,
      VAR_13);


 VAR_24 |= FUNC_2(VAR_22, VAR_1, VAR_0,
      FUNC_0(7));


 VAR_24 |= FUNC_2(VAR_22, VAR_16, VAR_15,
      VAR_15);


 VAR_24 |= FUNC_2(VAR_22, VAR_3, VAR_2, 0);






 VAR_23 = FUNC_1(VAR_22, VAR_18);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_21->std = VAR_23 & VAR_17 ? VAR_20 : VAR_19;
 VAR_24 |= FUNC_2(VAR_22, VAR_12, VAR_11, 0);

 VAR_23 = VAR_21->std & VAR_19 ? VAR_6 : VAR_8;
 VAR_24 |= FUNC_2(VAR_22, VAR_9, VAR_4, VAR_23);

 return VAR_24;
}
