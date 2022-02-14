
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinfc_host {int chipselect; } ;


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
 int FUNC_0 (struct hinfc_host*,int,int ) ;
 int FUNC_1 (struct hinfc_host*) ;

__attribute__((used)) static int FUNC_2(struct hinfc_host *VAR_12)
{
 FUNC_0(VAR_12, VAR_3, VAR_2);
 FUNC_0(VAR_12, VAR_11, VAR_1);
 FUNC_0(VAR_12, 0, VAR_0);

 FUNC_0(VAR_12, VAR_7 | VAR_6
  | VAR_10
  | ((VAR_12->chipselect & VAR_8)
   << VAR_9)
  | 1 << VAR_5, VAR_4);

 FUNC_1(VAR_12);

 return 0;
}
