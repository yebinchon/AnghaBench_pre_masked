
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dcmi {int regs; int errors_count; } ;
struct dcmi_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stm32_dcmi*,struct dcmi_buf*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct stm32_dcmi *VAR_3, struct dcmi_buf *VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  return -VAR_2;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5) {
  VAR_3->errors_count++;
  return VAR_5;
 }


 FUNC_1(VAR_3->regs, VAR_1, VAR_0);

 return 0;
}
