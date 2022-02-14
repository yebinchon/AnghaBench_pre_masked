
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct octeon_mbox {int dummy; } ;
struct cavium_wk {scalar_t__ ctxptr; } ;


 int FUNC_0 (struct octeon_mbox*) ;

__attribute__((used)) static void FUNC_1(struct work_struct *VAR_0)
{
 struct cavium_wk *VAR_1 = (struct cavium_wk *)VAR_0;
 struct octeon_mbox *VAR_2 = (struct octeon_mbox *)VAR_1->ctxptr;

 FUNC_0(VAR_2);
}
