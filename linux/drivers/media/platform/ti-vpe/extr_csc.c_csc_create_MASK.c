
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct csc_data {int base; int * res; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct csc_data* FUNC_0 (int ) ;
 struct csc_data* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int *) ;
 struct csc_data* FUNC_6 (int *,int,int ) ;
 int * FUNC_7 (struct platform_device*,int ,char const*) ;

struct csc_data *FUNC_8(struct platform_device *VAR_4, const char *VAR_5)
{
 struct csc_data *VAR_6;

 FUNC_3(&VAR_4->dev, "csc_create\n");

 VAR_6 = FUNC_6(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  FUNC_4(&VAR_4->dev, "couldn't alloc csc_data\n");
  return FUNC_1(-VAR_1);
 }

 VAR_6->pdev = VAR_4;

 VAR_6->res = FUNC_7(VAR_4, VAR_3,
      VAR_5);
 if (VAR_6->res == ((void*)0)) {
  FUNC_4(&VAR_4->dev, "missing '%s' platform resources data\n",
   VAR_5);
  return FUNC_1(-VAR_0);
 }

 VAR_6->base = FUNC_5(&VAR_4->dev, VAR_6->res);
 if (FUNC_2(VAR_6->base)) {
  FUNC_4(&VAR_4->dev, "failed to ioremap\n");
  return FUNC_0(VAR_6->base);
 }

 return VAR_6;
}
