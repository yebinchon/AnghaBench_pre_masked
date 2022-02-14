
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {struct hl_ctx* compute_ctx; scalar_t__ in_debug; } ;
struct hl_ctx {scalar_t__ asid; int * cs_pending; struct hl_device* hdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hl_device*,scalar_t__) ;
 int FUNC_2 (struct hl_device*,int) ;
 int FUNC_3 (struct hl_ctx*) ;
 int FUNC_4 (struct hl_ctx*) ;

__attribute__((used)) static void FUNC_5(struct hl_ctx *VAR_2)
{
 struct hl_device *VAR_3 = VAR_2->hdev;
 int VAR_4;
 for (VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++)
  FUNC_0(VAR_2->cs_pending[VAR_4]);

 if (VAR_2->asid != VAR_0) {






  if ((VAR_3->in_debug) && (VAR_3->compute_ctx == VAR_2))
   FUNC_2(VAR_3, 0);

  FUNC_4(VAR_2);
  FUNC_1(VAR_3, VAR_2->asid);
 } else {
  FUNC_3(VAR_2);
 }
}
