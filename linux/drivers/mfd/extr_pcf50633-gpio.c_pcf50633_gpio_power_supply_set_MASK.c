
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcf50633*,int,int,int) ;
 int* VAR_1 ;

int FUNC_1(struct pcf50633 *VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8;


 VAR_6 = VAR_1[VAR_4] + 1;

 VAR_7 = !!VAR_5 << (VAR_3 - VAR_0);
 VAR_8 = 1 << (VAR_3 - VAR_0);

 return FUNC_0(VAR_2, VAR_6, VAR_8, VAR_7);
}
