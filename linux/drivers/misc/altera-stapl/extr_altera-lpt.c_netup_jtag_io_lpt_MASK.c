
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;

int FUNC_2(void *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (!VAR_0) {
  VAR_7 = FUNC_0(2);
  FUNC_1(2, (VAR_7 | 0x02) & 0xdf);
  VAR_0 = 1;
 }

 VAR_5 = ((VAR_3 ? 0x40 : 0) | (VAR_2 ? 0x02 : 0));

 FUNC_1(0, VAR_5);

 if (VAR_4) {
  VAR_6 = FUNC_0(1);
  VAR_6 = ((VAR_6 & 0x80) ? 0 : 1);
 }

 FUNC_1(0, VAR_5 | 0x01);

 FUNC_1(0, VAR_5);

 return VAR_6;
}
