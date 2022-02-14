
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct davinci_mmc_config* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mmc_host {int caps; int f_min; int f_max; int parent; } ;
struct mmc_davinci_host {scalar_t__ nr_sg; } ;
struct davinci_mmc_config {int wires; int max_freq; int caps; scalar_t__ nr_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mmc_host*,char*,int ,int,int ,int *) ;
 int FUNC_1 (struct mmc_host*,char*,int ,int ,int *) ;
 struct mmc_davinci_host* FUNC_2 (struct mmc_host*) ;
 struct platform_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_3(VAR_5->parent);
 struct davinci_mmc_config *VAR_7 = VAR_6->dev.platform_data;
 struct mmc_davinci_host *VAR_8;
 int VAR_9;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_5);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_7 && VAR_7->nr_sg)
  VAR_8->nr_sg = VAR_7->nr_sg - 1;

 if (VAR_7 && (VAR_7->wires == 4 || VAR_7->wires == 0))
  VAR_5->caps |= VAR_2;

 if (VAR_7 && (VAR_7->wires == 8))
  VAR_5->caps |= (VAR_2 | VAR_3);

 VAR_5->f_min = 312500;
 VAR_5->f_max = 25000000;
 if (VAR_7 && VAR_7->max_freq)
  VAR_5->f_max = VAR_7->max_freq;
 if (VAR_7 && VAR_7->caps)
  VAR_5->caps |= VAR_7->caps;


 VAR_9 = FUNC_0(VAR_5, "cd", 0, 0, 0, ((void*)0));
 if (VAR_9 == -VAR_1)
  return VAR_9;
 else if (VAR_9)
  VAR_5->caps |= VAR_4;

 VAR_9 = FUNC_1(VAR_5, "wp", 0, 0, ((void*)0));
 if (VAR_9 == -VAR_1)
  return VAR_9;

 return 0;
}
