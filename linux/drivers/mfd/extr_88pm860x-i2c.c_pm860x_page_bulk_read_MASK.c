
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i2c_client*,int,int,unsigned char*) ;

int FUNC_3(struct i2c_client *VAR_1, int VAR_2,
     int VAR_3, unsigned char *VAR_4)
{
 unsigned char VAR_5 = 0;
 int VAR_6;

 FUNC_0(VAR_1->adapter, VAR_0);
 FUNC_2(VAR_1, 0xfa, 0, &VAR_5);
 FUNC_2(VAR_1, 0xfb, 0, &VAR_5);
 FUNC_2(VAR_1, 0xff, 0, &VAR_5);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_1, 0xFE, 0, &VAR_5);
 FUNC_2(VAR_1, 0xFC, 0, &VAR_5);
 FUNC_1(VAR_1->adapter, VAR_0);
 return VAR_6;
}
