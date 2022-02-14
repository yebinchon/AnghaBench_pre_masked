
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_algo_bit_data {struct cx88_core* data; } ;
struct TYPE_2__ {int tuner_type; } ;
struct cx88_core {TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct cx88_core*,int,int) ;
 int FUNC_1 (struct cx88_core*,int,int) ;
 int FUNC_2 (struct cx88_core*,int,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(void *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct i2c_algo_bit_data *VAR_6 = VAR_2;
 struct cx88_core *VAR_7;

 if (!VAR_6) {
  FUNC_4("Error - i2c private data undefined.\n");
  return -VAR_1;
 }

 VAR_7 = VAR_6->data;

 if (!VAR_7) {
  FUNC_4("Error - device struct undefined.\n");
  return -VAR_1;
 }

 if (VAR_3 != VAR_0)
  return -VAR_1;

 switch (VAR_7->board.tuner_type) {
 case 130:
  FUNC_3(1, "Calling XC2028/3028 callback\n");
  return FUNC_0(VAR_7, VAR_4, VAR_5);
 case 129:
  FUNC_3(1, "Calling XC4000 callback\n");
  return FUNC_1(VAR_7, VAR_4, VAR_5);
 case 128:
  FUNC_3(1, "Calling XC5000 callback\n");
  return FUNC_2(VAR_7, VAR_4, VAR_5);
 }
 FUNC_4("Error: Calling callback for tuner %d\n",
        VAR_7->board.tuner_type);
 return -VAR_1;
}
