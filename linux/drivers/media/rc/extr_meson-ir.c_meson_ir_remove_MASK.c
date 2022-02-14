
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct meson_ir {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct meson_ir*,int ,int ,int ) ;
 struct meson_ir* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct meson_ir *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;


 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_3, VAR_0, VAR_1, 0);
 FUNC_3(&VAR_3->lock, VAR_4);

 return 0;
}
