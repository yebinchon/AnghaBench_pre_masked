
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int num_phys; int * phys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ssusb_mtk *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_phys; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0->phys[VAR_1]);
  if (VAR_2)
   goto power_off_phy;
 }
 return 0;

power_off_phy:
 for (; VAR_1 > 0; VAR_1--)
  FUNC_0(VAR_0->phys[VAR_1 - 1]);

 return VAR_2;
}
