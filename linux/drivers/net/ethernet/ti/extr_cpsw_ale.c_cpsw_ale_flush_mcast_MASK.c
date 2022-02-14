
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpsw_ale {int port_mask_bits; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3(struct cpsw_ale *VAR_1, u32 *VAR_2,
     int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2,
          VAR_1->port_mask_bits);
 if ((VAR_4 & VAR_3) == 0)
  return;
 VAR_4 &= ~VAR_3;


 if (VAR_4)
  FUNC_2(VAR_2, VAR_4,
           VAR_1->port_mask_bits);
 else
  FUNC_1(VAR_2, VAR_0);
}
