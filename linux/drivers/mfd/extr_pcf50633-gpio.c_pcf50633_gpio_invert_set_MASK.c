
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcf50633*,int,int,int) ;

int FUNC_1(struct pcf50633 *VAR_2, int VAR_3, int VAR_4)
{
 u8 VAR_5, VAR_6;

 VAR_6 = VAR_3 - VAR_0 + VAR_1;
 VAR_5 = !!VAR_4 << 3;

 return FUNC_0(VAR_2, VAR_6, 1 << 3, VAR_5);
}
