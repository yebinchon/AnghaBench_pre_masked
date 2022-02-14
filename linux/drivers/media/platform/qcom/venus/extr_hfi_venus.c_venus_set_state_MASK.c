
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int state; int lock; } ;
typedef enum venus_state { ____Placeholder_venus_state } venus_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct venus_hfi_device *VAR_0,
       enum venus_state VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->state = VAR_1;
 FUNC_1(&VAR_0->lock);
}
