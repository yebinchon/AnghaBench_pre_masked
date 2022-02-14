
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxafb_info {int lccr0; int clk; int disable_done; int refresh_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pxafb_info*,int ) ;
 int FUNC_2 (struct pxafb_info*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct pxafb_info *VAR_5)
{
 uint32_t VAR_6;
 FUNC_2(VAR_5, VAR_4, 0xffffffff);

 VAR_6 = FUNC_1(VAR_5, VAR_0) & ~VAR_3;
 FUNC_2(VAR_5, VAR_0, VAR_6);
 FUNC_2(VAR_5, VAR_0, VAR_6 | VAR_1);

 FUNC_4(&VAR_5->disable_done, FUNC_3(200));


 FUNC_0(VAR_5->clk);
}
