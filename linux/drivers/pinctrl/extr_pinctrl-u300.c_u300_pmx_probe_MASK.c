
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u300_pmx {int pctl; int virtbase; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct resource*) ;
 struct u300_pmx* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int *,struct u300_pmx*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct u300_pmx*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct u300_pmx *VAR_5;
 struct resource *VAR_6;


 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = &VAR_4->dev;

 VAR_6 = FUNC_7(VAR_4, VAR_2, 0);
 VAR_5->virtbase = FUNC_4(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->virtbase))
  return FUNC_1(VAR_5->virtbase);

 VAR_5->pctl = FUNC_6(&VAR_4->dev, &VAR_3, VAR_5);
 if (FUNC_0(VAR_5->pctl)) {
  FUNC_2(&VAR_4->dev, "could not register U300 pinmux driver\n");
  return FUNC_1(VAR_5->pctl);
 }

 FUNC_8(VAR_4, VAR_5);

 FUNC_3(&VAR_4->dev, "initialized U300 pin control driver\n");

 return 0;
}
