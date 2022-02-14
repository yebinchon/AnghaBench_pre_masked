
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int otg_switch; scalar_t__ is_host; } ;


 int FUNC_0 (struct ssusb_mtk*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ssusb_mtk *VAR_0)
{
 if (VAR_0->is_host)
  FUNC_1(&VAR_0->otg_switch, 0);

 FUNC_0(VAR_0, 0);
}
