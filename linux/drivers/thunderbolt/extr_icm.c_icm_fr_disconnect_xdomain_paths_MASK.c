
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tb_xdomain {int link; } ;
struct tb {int nhi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct tb *VAR_2, struct tb_xdomain *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_1(VAR_3->link);
 if (VAR_4 == 0)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_1;

 FUNC_0(VAR_2->nhi, VAR_5, 1);
 FUNC_2(10, 50);
 FUNC_0(VAR_2->nhi, VAR_5, 2);
 return 0;
}
