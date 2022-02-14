
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct b53_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct b53_platform_data {int regs; } ;
struct b53_mmap_priv {int regs; } ;
struct b53_device {struct b53_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct b53_device* FUNC_0 (TYPE_1__*,int *,struct b53_mmap_priv*) ;
 int FUNC_1 (struct b53_device*) ;
 struct b53_mmap_priv* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct platform_device*,struct b53_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct b53_platform_data *VAR_5 = VAR_4->dev.platform_data;
 struct b53_mmap_priv *VAR_6;
 struct b53_device *VAR_7;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->regs = VAR_5->regs;

 VAR_7 = FUNC_0(&VAR_4->dev, &VAR_3, VAR_6);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->pdata = VAR_5;

 FUNC_3(VAR_4, VAR_7);

 return FUNC_1(VAR_7);
}
