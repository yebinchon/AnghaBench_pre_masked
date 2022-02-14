
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

int FUNC_1(int VAR_1, char *VAR_2)
{
 if (VAR_1 < 6)
  return -VAR_0;

 VAR_2[0] = 0x00;
 VAR_2[1] = 0x00;
 VAR_2[2] = 0x00;
 VAR_2[3] = 0x01;
 VAR_2[4] = 0x0c;
 FUNC_0(VAR_2 + 5, 0xff, VAR_1 - 6);

 VAR_2[VAR_1 - 1] = 0x80;

 return 0;
}
