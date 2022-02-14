
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_pin_desc {int index; int chan; int func; int name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int,char*,int) ;

__attribute__((used)) static void FUNC_2(struct ptp_pin_desc *VAR_9)
{
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  FUNC_1(VAR_9[VAR_10].name, sizeof(VAR_9[VAR_10].name), "GPIO%d", 1 + VAR_10);
  VAR_9[VAR_10].index = VAR_10;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_8[VAR_10] < 1 || VAR_8[VAR_10] > VAR_1) {
   FUNC_0("gpio_tab[%d]=%hu out of range", VAR_10, VAR_8[VAR_10]);
   return;
  }
 }

 VAR_11 = VAR_8[VAR_0] - 1;
 VAR_9[VAR_11].func = VAR_7;
 VAR_9[VAR_11].chan = 0;

 VAR_11 = VAR_8[VAR_4] - 1;
 VAR_9[VAR_11].func = VAR_6;
 VAR_9[VAR_11].chan = 0;

 for (VAR_10 = VAR_2; VAR_10 < VAR_3; VAR_10++) {
  VAR_11 = VAR_8[VAR_10] - 1;
  VAR_9[VAR_11].func = VAR_5;
  VAR_9[VAR_11].chan = VAR_10 - VAR_2;
 }
}
