
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hl_ctx {TYPE_2__* hdev; } ;
struct TYPE_4__ {TYPE_1__* asic_funcs; } ;
struct TYPE_3__ {int (* read_pte ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (struct hl_ctx*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct hl_ctx *VAR_0)
{

 FUNC_1();
 VAR_0->hdev->asic_funcs->read_pte(VAR_0->hdev, FUNC_0(VAR_0));
}
