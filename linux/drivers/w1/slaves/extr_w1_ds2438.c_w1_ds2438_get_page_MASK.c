
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct w1_slave {int master; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 size_t FUNC_1 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (struct w1_slave*) ;
 int FUNC_3 (int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(struct w1_slave *VAR_4, int VAR_5, u8 *VAR_6)
{
 unsigned int VAR_7 = VAR_3;
 u8 VAR_8[2];
 u8 VAR_9;
 size_t VAR_10;

 while (VAR_7--) {
  VAR_9 = 0;

  if (FUNC_2(VAR_4))
   continue;
  VAR_8[0] = VAR_2;
  VAR_8[1] = 0x00;
  FUNC_3(VAR_4->master, VAR_8, 2);

  if (FUNC_2(VAR_4))
   continue;
  VAR_8[0] = VAR_1;
  VAR_8[1] = 0x00;
  FUNC_3(VAR_4->master, VAR_8, 2);

  VAR_10 = FUNC_1(VAR_4->master, VAR_6, VAR_0 + 1);
  if (VAR_10 == VAR_0 + 1) {
   VAR_9 = FUNC_0(VAR_6, VAR_0);


   if ((u8)VAR_6[VAR_0] == VAR_9)
    return 0;
  }
 }
 return -1;
}
