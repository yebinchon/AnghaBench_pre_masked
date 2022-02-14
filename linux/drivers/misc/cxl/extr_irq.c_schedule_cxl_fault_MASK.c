
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct cxl_context {int fault_work; void* dar; void* dsisr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(struct cxl_context *VAR_1, u64 VAR_2, u64 VAR_3)
{
 VAR_1->dsisr = VAR_2;
 VAR_1->dar = VAR_3;
 FUNC_0(&VAR_1->fault_work);
 return VAR_0;
}
