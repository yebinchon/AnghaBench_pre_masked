
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int dummy; } ;
struct hfi_buffer_requirements {unsigned int count_actual; } ;


 int VAR_0 ;
 int FUNC_0 (struct venus_inst*) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*,int ,struct hfi_buffer_requirements*) ;

__attribute__((used)) static int FUNC_3(struct venus_inst *VAR_1, unsigned int *VAR_2)
{
 struct hfi_buffer_requirements VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_0, &VAR_3);

 *VAR_2 = VAR_3.count_actual;

 FUNC_0(VAR_1);

 return VAR_4;
}
