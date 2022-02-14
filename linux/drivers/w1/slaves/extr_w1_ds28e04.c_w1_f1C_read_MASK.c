
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wrbuf ;
typedef int u8 ;
struct w1_slave {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct w1_slave*) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct w1_slave *VAR_2, int VAR_3, int VAR_4, char *VAR_5)
{
 u8 VAR_6[3];


 if (FUNC_1(VAR_2))
  return -VAR_0;

 VAR_6[0] = VAR_1;
 VAR_6[1] = VAR_3 & 0xff;
 VAR_6[2] = VAR_3 >> 8;

 FUNC_2(VAR_2->master, VAR_6, sizeof(VAR_6));
 return FUNC_0(VAR_2->master, VAR_5, VAR_4);
}
