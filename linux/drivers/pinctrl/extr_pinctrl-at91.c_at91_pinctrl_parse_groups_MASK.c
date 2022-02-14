
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int name; } ;
struct at91_pmx_pin {int bank; void* conf; void* mux; void* pin; } ;
struct at91_pinctrl {int dev; } ;
struct at91_pin_group {int npins; void** pins; struct at91_pmx_pin* pins_conf; int name; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct at91_pmx_pin*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,struct device_node*) ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int ,int,int,int ) ;
 int * FUNC_5 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_4,
         struct at91_pin_group *VAR_5,
         struct at91_pinctrl *VAR_6, u32 VAR_7)
{
 struct at91_pmx_pin *VAR_8;
 int VAR_9;
 const __be32 *VAR_10;
 int VAR_11, VAR_12;

 FUNC_2(VAR_6->dev, "group(%d): %pOFn\n", VAR_7, VAR_4);


 VAR_5->name = VAR_4->name;





 VAR_10 = FUNC_5(VAR_4, "atmel,pins", &VAR_9);

 VAR_9 /= sizeof(*VAR_10);
 if (!VAR_9 || VAR_9 % 4) {
  FUNC_3(VAR_6->dev, "wrong pins number or pins and configs should be by 4\n");
  return -VAR_0;
 }

 VAR_5->npins = VAR_9 / 4;
 VAR_8 = VAR_5->pins_conf = FUNC_4(VAR_6->dev,
         VAR_5->npins,
         sizeof(struct at91_pmx_pin),
         VAR_2);
 VAR_5->pins = FUNC_4(VAR_6->dev, VAR_5->npins, sizeof(unsigned int),
     VAR_2);
 if (!VAR_5->pins_conf || !VAR_5->pins)
  return -VAR_1;

 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_9; VAR_11 += 4, VAR_12++) {
  VAR_8->bank = FUNC_1(*VAR_10++);
  VAR_8->pin = FUNC_1(*VAR_10++);
  VAR_5->pins[VAR_12] = VAR_8->bank * VAR_3 + VAR_8->pin;
  VAR_8->mux = FUNC_1(*VAR_10++);
  VAR_8->conf = FUNC_1(*VAR_10++);

  FUNC_0(VAR_6->dev, VAR_8);
  VAR_8++;
 }

 return 0;
}
