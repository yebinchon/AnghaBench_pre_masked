
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cpcap_interrupt_desc {char const* name; int irq; int node; } ;
struct cpcap_charger_ddata {int irq_list; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 struct cpcap_interrupt_desc* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int *,int ,int ,char const*,struct cpcap_charger_ddata*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct platform_device*,char const*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5,
         struct cpcap_charger_ddata *VAR_6,
         const char *VAR_7)
{
 struct cpcap_interrupt_desc *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_4(VAR_5, VAR_7);
 if (VAR_9 < 0)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6->dev, VAR_9, ((void*)0),
       VAR_4,
       VAR_3,
       VAR_7, VAR_6);
 if (VAR_10) {
  FUNC_0(VAR_6->dev, "could not get irq %s: %i\n",
   VAR_7, VAR_10);

  return VAR_10;
 }

 VAR_8 = FUNC_1(VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->name = VAR_7;
 VAR_8->irq = VAR_9;
 FUNC_3(&VAR_8->node, &VAR_6->irq_list);

 return 0;
}
