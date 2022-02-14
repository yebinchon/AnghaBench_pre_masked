
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct w1_slave {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (struct w1_slave*,int*) ;
 scalar_t__ FUNC_2 (struct w1_slave*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int*,size_t) ;
 int FUNC_5 (int ,int*,int) ;

__attribute__((used)) static int FUNC_6(struct w1_slave *VAR_4, u16 VAR_5,
 u8 *VAR_6, size_t VAR_7)
{
 u16 VAR_8;
 int VAR_9;
 u8 VAR_10[5];


 if (VAR_7 == 0)
  return -VAR_1;


 VAR_10[0] = VAR_3;
 VAR_10[1] = VAR_5 << 1 | 0x01;
 VAR_10[2] = VAR_7;
 VAR_8 = FUNC_0(VAR_0, VAR_10, 3);
 VAR_10[3] = ~(VAR_8 & 0xFF);
 VAR_10[4] = ~((VAR_8 >> 8) & 0xFF);
 FUNC_5(VAR_4->master, VAR_10, 5);


 if (FUNC_2(VAR_4, VAR_7 + 1) < 0)
  return -VAR_2;


 VAR_10[0] = FUNC_3(VAR_4->master);
 VAR_10[1] = 0;


 VAR_9 = FUNC_1(VAR_4, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;


 return FUNC_4(VAR_4->master, VAR_6, VAR_7);
}
