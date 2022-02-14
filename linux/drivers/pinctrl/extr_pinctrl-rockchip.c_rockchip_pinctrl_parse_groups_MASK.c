
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_pinctrl {int dev; } ;
struct rockchip_pin_group {int npins; TYPE_1__* data; scalar_t__* pins; int name; } ;
struct rockchip_pin_config {int dummy; } ;
struct rockchip_pin_bank {scalar_t__ pin_base; } ;
struct device_node {int name; } ;
typedef int __be32 ;
struct TYPE_2__ {int nconfigs; int configs; void* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rockchip_pin_bank*) ;
 int FUNC_1 (struct rockchip_pin_bank*) ;
 struct rockchip_pin_bank* FUNC_2 (struct rockchip_pinctrl*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,char*,int ,struct device_node*) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (int ,int,int,int ) ;
 struct device_node* FUNC_8 (int ) ;
 int * FUNC_9 (struct device_node*,char*,int*) ;
 int FUNC_10 (struct device_node*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_11(struct device_node *VAR_3,
           struct rockchip_pin_group *VAR_4,
           struct rockchip_pinctrl *VAR_5,
           u32 VAR_6)
{
 struct rockchip_pin_bank *VAR_7;
 int VAR_8;
 const __be32 *VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 FUNC_5(VAR_5->dev, "group(%d): %pOFn\n", VAR_6, VAR_3);


 VAR_4->name = VAR_3->name;





 VAR_9 = FUNC_9(VAR_3, "rockchip,pins", &VAR_8);

 VAR_8 /= sizeof(*VAR_9);
 if (!VAR_8 || VAR_8 % 4) {
  FUNC_6(VAR_5->dev, "wrong pins number or pins and configs should be by 4\n");
  return -VAR_0;
 }

 VAR_4->npins = VAR_8 / 4;

 VAR_4->pins = FUNC_7(VAR_5->dev, VAR_4->npins, sizeof(unsigned int),
      VAR_2);
 VAR_4->data = FUNC_7(VAR_5->dev,
     VAR_4->npins,
     sizeof(struct rockchip_pin_config),
     VAR_2);
 if (!VAR_4->pins || !VAR_4->data)
  return -VAR_1;

 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_8; VAR_11 += 4, VAR_12++) {
  const __be32 *VAR_14;
  struct device_node *VAR_15;

  VAR_10 = FUNC_3(*VAR_9++);
  VAR_7 = FUNC_2(VAR_5, VAR_10);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);

  VAR_4->pins[VAR_12] = VAR_7->pin_base + FUNC_3(*VAR_9++);
  VAR_4->data[VAR_12].func = FUNC_3(*VAR_9++);

  VAR_14 = VAR_9++;
  if (!VAR_14)
   return -VAR_0;

  VAR_15 = FUNC_8(FUNC_4(VAR_14));
  VAR_13 = FUNC_10(VAR_15, ((void*)0),
    &VAR_4->data[VAR_12].configs, &VAR_4->data[VAR_12].nconfigs);
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}
