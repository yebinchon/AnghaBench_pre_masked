
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stih_cec {scalar_t__ regs; } ;
struct cec_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct stih_cec* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_2, u8 VAR_3)
{
 struct stih_cec *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = FUNC_1(VAR_4->regs + VAR_0);

 VAR_5 |= 1 << VAR_3;

 if (VAR_3 == VAR_1)
  VAR_5 = 0;

 FUNC_2(VAR_5, VAR_4->regs + VAR_0);

 return 0;
}
