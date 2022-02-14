
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_slave {int master; } ;
struct w1_f1C_data {int validcrc; int * memory; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (struct w1_slave*) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct w1_slave *VAR_5, struct w1_f1C_data *VAR_6,
    int VAR_7)
{
 u8 VAR_8[3];
 int VAR_9 = VAR_7 * VAR_4;

 if (VAR_6->validcrc & (1 << VAR_7))
  return 0;

 if (FUNC_2(VAR_5)) {
  VAR_6->validcrc = 0;
  return -VAR_2;
 }

 VAR_8[0] = VAR_3;
 VAR_8[1] = VAR_9 & 0xff;
 VAR_8[2] = VAR_9 >> 8;
 FUNC_3(VAR_5->master, VAR_8, 3);
 FUNC_1(VAR_5->master, &VAR_6->memory[VAR_9], VAR_4);


 if (FUNC_0(VAR_0, &VAR_6->memory[VAR_9], VAR_4) == VAR_1)
  VAR_6->validcrc |= (1 << VAR_7);

 return 0;
}
