
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* dim2; } ;
struct TYPE_3__ {int ACMR0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(
 u8 VAR_3, u8 VAR_4, u8 VAR_5, u16 VAR_6, u16 VAR_7,
 u16 VAR_8)
{
 FUNC_3(VAR_3, VAR_6, VAR_7, VAR_8);
 FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5 ? 1 : 0);

 FUNC_1(VAR_3);
 FUNC_2(VAR_0, VAR_3, VAR_4, VAR_5 ? 0 : 1);


 FUNC_5(FUNC_4(&VAR_2.dim2->ACMR0) | FUNC_0(VAR_3), &VAR_2.dim2->ACMR0);
}
