
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hl_ctx {TYPE_2__* hdev; } ;
struct TYPE_4__ {TYPE_1__* asic_funcs; } ;
struct TYPE_3__ {int (* write_pte ) (TYPE_2__*,int ,scalar_t__) ;} ;


 int FUNC_0 (struct hl_ctx*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct hl_ctx *VAR_0, u64 VAR_1,
     u64 VAR_2)
{
 VAR_0->hdev->asic_funcs->write_pte(VAR_0->hdev,
     FUNC_0(VAR_0, VAR_1),
     VAR_2);
 *(u64 *) (uintptr_t) VAR_1 = VAR_2;
}
