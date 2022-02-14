
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int identity; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (char*,int ,unsigned long,unsigned long) ;
 char* VAR_2 ;

irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 unsigned long VAR_5;
 char *VAR_6 = (char *)VAR_4;
 u8 VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 VAR_5 = FUNC_1(VAR_6 - 8) & 0x7fffff;




 if (VAR_6 == VAR_2)
  FUNC_3("%s in danger of initiating system reset "
   "in %ld.%01ld seconds\n",
   VAR_1.identity,
   VAR_5 / 1000000, (VAR_5 / 100000) % 10);
 else
  VAR_7 |= 1;

 FUNC_2(VAR_7, VAR_6);

 return VAR_0;
}
