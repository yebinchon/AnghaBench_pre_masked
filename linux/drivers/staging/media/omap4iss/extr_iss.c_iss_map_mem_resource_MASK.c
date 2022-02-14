
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct iss_device {int * regs; int dev; } ;
typedef enum iss_mem_resources { ____Placeholder_iss_mem_resources } iss_mem_resources ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct resource*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1,
    struct iss_device *VAR_2,
    enum iss_mem_resources VAR_3)
{
 struct resource *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_3);

 VAR_2->regs[VAR_3] = FUNC_1(VAR_2->dev, VAR_4);

 return FUNC_0(VAR_2->regs[VAR_3]);
}
