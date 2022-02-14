
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_nand {scalar_t__ fcr; } ;
struct platform_device {int dummy; } ;
struct mfd_cell {int (* disable ) (struct platform_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mfd_cell* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_2, struct tmio_nand *VAR_3)
{
 const struct mfd_cell *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_1, VAR_3->fcr + VAR_0);
 if (VAR_4->disable)
  VAR_4->disable(VAR_2);
}
