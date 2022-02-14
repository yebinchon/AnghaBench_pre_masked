
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acm_wb {scalar_t__ use; } ;
struct acm {int control; int transmitting; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct acm *VAR_0, struct acm_wb *VAR_1)
{
 VAR_1->use = 0;
 VAR_0->transmitting--;
 FUNC_0(VAR_0->control);
}
