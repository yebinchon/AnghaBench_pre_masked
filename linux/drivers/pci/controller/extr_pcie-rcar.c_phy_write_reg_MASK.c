
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct rcar_pcie*) ;
 int FUNC_1 (struct rcar_pcie*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct rcar_pcie *VAR_6,
     unsigned int VAR_7, u32 VAR_8,
     unsigned int VAR_9, u32 VAR_10)
{
 u32 VAR_11;

 VAR_11 = VAR_5 |
  ((VAR_7 & 1) << VAR_4) |
  ((VAR_9 & 0xf) << VAR_3) |
  ((VAR_8 & 0xff) << VAR_0);


 FUNC_1(VAR_6, VAR_10, VAR_2);
 FUNC_1(VAR_6, VAR_11, VAR_1);


 FUNC_0(VAR_6);


 FUNC_1(VAR_6, 0, VAR_2);
 FUNC_1(VAR_6, 0, VAR_1);


 FUNC_0(VAR_6);
}
