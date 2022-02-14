
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ivtv {TYPE_1__* card; } ;
struct i2c_algo_bit_data {struct ivtv* data; } ;
struct TYPE_2__ {int xceive_pin; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(void *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct i2c_algo_bit_data *VAR_6 = VAR_2;
 struct ivtv *VAR_7 = VAR_6->data;
 u32 VAR_8;

 if (VAR_4 != VAR_1)
  return 0;
 FUNC_0("Resetting tuner\n");
 VAR_8 = FUNC_2(VAR_0);
 VAR_8 &= ~(1 << VAR_7->card->xceive_pin);
 FUNC_4(VAR_8, VAR_0);
 FUNC_3(FUNC_1(1));

 VAR_8 |= 1 << VAR_7->card->xceive_pin;
 FUNC_4(VAR_8, VAR_0);
 FUNC_3(FUNC_1(1));
 return 0;
}
