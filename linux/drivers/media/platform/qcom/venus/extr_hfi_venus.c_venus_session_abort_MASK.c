
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int core; } ;
struct venus_hfi_device {int dummy; } ;


 int VAR_0 ;
 struct venus_hfi_device* FUNC_0 (int ) ;
 int FUNC_1 (struct venus_hfi_device*) ;
 int FUNC_2 (struct venus_inst*,int ) ;

__attribute__((used)) static int FUNC_3(struct venus_inst *VAR_1)
{
 struct venus_hfi_device *VAR_2 = FUNC_0(VAR_1->core);

 FUNC_1(VAR_2);

 return FUNC_2(VAR_1, VAR_0);
}
