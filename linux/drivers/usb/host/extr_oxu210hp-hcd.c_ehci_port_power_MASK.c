
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxu_hcd {int hcs_params; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct oxu_hcd*,char*,char*) ;
 int FUNC_4 (int ,int ,int ,int ,int *,int ) ;
 int FUNC_5 (struct oxu_hcd*) ;

__attribute__((used)) static void FUNC_6(struct oxu_hcd *VAR_3, int VAR_4)
{
 unsigned VAR_5;

 if (!FUNC_1(VAR_3->hcs_params))
  return;

 FUNC_3(VAR_3, "...power%s ports...\n", VAR_4 ? "up" : "down");
 for (VAR_5 = FUNC_0(VAR_3->hcs_params); VAR_5 > 0; )
  (void) FUNC_4(FUNC_5(VAR_3),
    VAR_4 ? VAR_1 : VAR_0,
    VAR_2,
    VAR_5--, ((void*)0), 0);
 FUNC_2(20);
}
