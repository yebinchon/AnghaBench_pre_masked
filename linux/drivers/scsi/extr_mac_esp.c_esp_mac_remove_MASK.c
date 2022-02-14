
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {size_t id; } ;
struct mac_esp_priv {struct esp* esp; } ;
struct esp {TYPE_1__* host; struct mac_esp_priv* command_block; } ;
struct TYPE_2__ {unsigned int irq; } ;


 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct mac_esp_priv*) ;
 struct mac_esp_priv* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct esp*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct mac_esp_priv *VAR_3 = FUNC_2(VAR_2);
 struct esp *VAR_4 = VAR_3->esp;
 unsigned int VAR_5 = VAR_4->host->irq;

 FUNC_3(VAR_4);

 FUNC_5(&VAR_1);
 VAR_0[VAR_2->id] = ((void*)0);
 if (VAR_0[!VAR_2->id] == ((void*)0)) {
  FUNC_6(&VAR_1);
  FUNC_0(VAR_5, ((void*)0));
 } else
  FUNC_6(&VAR_1);

 FUNC_1(VAR_3);

 FUNC_1(VAR_4->command_block);

 FUNC_4(VAR_4->host);

 return 0;
}
