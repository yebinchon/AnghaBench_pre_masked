
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct enetc_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enetc_hw*,int,int ) ;
 int FUNC_1 (struct enetc_hw*,int,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct enetc_hw *VAR_2, int VAR_3,
           bool VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_0);

 VAR_5 = (VAR_5 & ~VAR_1) | (VAR_4 ? VAR_1 : 0);
 FUNC_1(VAR_2, VAR_3, VAR_0, VAR_5);
}
