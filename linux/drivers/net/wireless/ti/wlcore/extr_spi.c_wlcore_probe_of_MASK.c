
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlcore_platdev_data {int ref_clock_xtal; int tcxo_clock_freq; int ref_clock_freq; TYPE_1__* family; } ;
struct wl12xx_spi_glue {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;
 struct of_device_id* FUNC_2 (int ,struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_2, struct wl12xx_spi_glue *VAR_3,
      struct wlcore_platdev_data *VAR_4)
{
 struct device_node *VAR_5 = VAR_2->dev.of_node;
 const struct of_device_id *VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->family = VAR_6->data;
 FUNC_0(&VAR_2->dev, "selected chip family is %s\n",
   VAR_4->family->name);

 if (FUNC_1(VAR_5, "clock-xtal", ((void*)0)))
  VAR_4->ref_clock_xtal = 1;


 FUNC_3(VAR_5, "ref-clock-frequency",
        &VAR_4->ref_clock_freq);
 FUNC_3(VAR_5, "tcxo-clock-frequency",
        &VAR_4->tcxo_clock_freq);

 return 0;
}
