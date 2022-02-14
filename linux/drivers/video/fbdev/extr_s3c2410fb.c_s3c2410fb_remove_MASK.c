
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410fb_info {TYPE_1__* mem; int io; int * clk; } ;
struct platform_device {int dummy; } ;
struct fb_info {struct s3c2410fb_info* par; } ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int,struct s3c2410fb_info*) ;
 int FUNC_4 (int ) ;
 struct fb_info* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct s3c2410fb_info*) ;
 int FUNC_10 (struct s3c2410fb_info*,int ) ;
 int FUNC_11 (struct fb_info*) ;
 int FUNC_12 (struct fb_info*) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_5(VAR_0);
 struct s3c2410fb_info *VAR_2 = VAR_1->par;
 int VAR_3;

 FUNC_12(VAR_1);
 FUNC_9(VAR_2);

 FUNC_10(VAR_2, 0);
 FUNC_13(1000, 1100);

 FUNC_11(VAR_1);

 if (VAR_2->clk) {
  FUNC_0(VAR_2->clk);
  FUNC_1(VAR_2->clk);
  VAR_2->clk = ((void*)0);
 }

 VAR_3 = FUNC_6(VAR_0, 0);
 FUNC_3(VAR_3, VAR_2);

 FUNC_4(VAR_2->io);

 FUNC_7(VAR_2->mem->start, FUNC_8(VAR_2->mem));

 FUNC_2(VAR_1);

 return 0;
}
