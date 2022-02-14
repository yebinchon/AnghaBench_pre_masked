
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinfc_host {int* addr_value; int chipselect; int addr_cycle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct hinfc_host*,int,int ) ;
 int FUNC_1 (struct hinfc_host*) ;

__attribute__((used)) static int FUNC_2(struct hinfc_host *VAR_13)
{
 FUNC_0(VAR_13, VAR_13->addr_value[0], VAR_0);
 FUNC_0(VAR_13, (VAR_12 << 8) | VAR_11,
      VAR_1);

 FUNC_0(VAR_13, VAR_10
  | VAR_7
  | VAR_6
  | VAR_5
  | ((VAR_13->chipselect & VAR_8)
   << VAR_9)
  | ((VAR_13->addr_cycle & VAR_3)
   << VAR_4),
  VAR_2);

 FUNC_1(VAR_13);

 return 0;
}
