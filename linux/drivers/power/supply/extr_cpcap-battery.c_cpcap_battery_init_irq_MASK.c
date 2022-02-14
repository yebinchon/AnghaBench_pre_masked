
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cpcap_interrupt_desc {char const* name; int irq; int node; int action; } ;
struct cpcap_battery_ddata {int irq_list; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 struct cpcap_interrupt_desc* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int *,int ,int ,char const*,struct cpcap_battery_ddata*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct platform_device*,char const*) ;
 int FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6,
      struct cpcap_battery_ddata *VAR_7,
      const char *VAR_8)
{
 struct cpcap_interrupt_desc *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_4(VAR_6, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = FUNC_2(VAR_7->dev, VAR_10, ((void*)0),
       VAR_5,
       VAR_4,
       VAR_8, VAR_7);
 if (VAR_11) {
  FUNC_0(VAR_7->dev, "could not get irq %s: %i\n",
   VAR_8, VAR_11);

  return VAR_11;
 }

 VAR_9 = FUNC_1(VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->name = VAR_8;
 VAR_9->irq = VAR_10;

 if (!FUNC_5(VAR_8, "lowbph", 6))
  VAR_9->action = VAR_0;
 else if (!FUNC_5(VAR_8, "lowbpl", 6))
  VAR_9->action = VAR_1;

 FUNC_3(&VAR_9->node, &VAR_7->irq_list);

 return 0;
}
