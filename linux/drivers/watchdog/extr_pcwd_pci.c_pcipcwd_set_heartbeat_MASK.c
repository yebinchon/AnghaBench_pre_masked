
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_2(int VAR_5)
{
 int VAR_6 = VAR_5 / 256;
 int VAR_7 = VAR_5 % 256;

 if ((VAR_5 < 0x0001) || (VAR_5 > 0xFFFF))
  return -VAR_1;


 FUNC_1(VAR_0, &VAR_6, &VAR_7);

 VAR_4 = VAR_5;
 if (VAR_3 >= VAR_2)
  FUNC_0("New heartbeat: %d\n", VAR_4);

 return 0;
}
