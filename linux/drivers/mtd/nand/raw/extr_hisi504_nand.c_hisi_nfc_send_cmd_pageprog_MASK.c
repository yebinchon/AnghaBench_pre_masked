
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinfc_host {int* addr_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hinfc_host*,int,int ) ;
 int FUNC_1 (struct hinfc_host*,int) ;

__attribute__((used)) static int FUNC_2(struct hinfc_host *VAR_5)
{
 VAR_5->addr_value[0] &= 0xffff0000;

 FUNC_0(VAR_5, VAR_5->addr_value[0], VAR_1);
 FUNC_0(VAR_5, VAR_5->addr_value[1], VAR_0);
 FUNC_0(VAR_5, VAR_3 << 8 | VAR_4,
      VAR_2);

 FUNC_1(VAR_5, 1);

 return 0;
}
