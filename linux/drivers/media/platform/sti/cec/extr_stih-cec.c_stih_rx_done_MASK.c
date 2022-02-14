
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct stih_cec {int adap; scalar_t__ regs; } ;
struct cec_msg {int len; int* msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct cec_msg*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct stih_cec *VAR_4, u32 VAR_5)
{
 struct cec_msg VAR_6 = {};
 u8 VAR_7;

 if (VAR_5 & VAR_3)
  return;

 if (VAR_5 & VAR_2)
  return;

 VAR_6.len = FUNC_1(VAR_4->regs + VAR_0) & 0x1f;

 if (!VAR_6.len)
  return;

 if (VAR_6.len > 16)
  VAR_6.len = 16;

 for (VAR_7 = 0; VAR_7 < VAR_6.len; VAR_7++)
  VAR_6.msg[VAR_7] = FUNC_1(VAR_4->regs + VAR_1 + VAR_7);

 FUNC_0(VAR_4->adap, &VAR_6);
}
