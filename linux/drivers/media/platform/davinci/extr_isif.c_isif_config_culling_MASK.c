
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isif_cul {int hcpat_even; int hcpat_odd; int vcpat; int en_lpf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct isif_cul *VAR_6)
{
 u32 VAR_7;


 VAR_7 = (VAR_6->hcpat_even << VAR_1) | VAR_6->hcpat_odd;
 FUNC_1(VAR_7, VAR_0);


 FUNC_1(VAR_6->vcpat, VAR_2);


 FUNC_0(VAR_3 << VAR_4,
    VAR_6->en_lpf << VAR_4, VAR_5);
}
