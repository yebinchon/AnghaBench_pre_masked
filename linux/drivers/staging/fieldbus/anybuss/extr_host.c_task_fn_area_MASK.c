
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct area_priv {unsigned int flags; } ;
struct anybuss_host {int regmap; int power_on; } ;
struct ab_task {int task_fn; struct area_priv area_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int VAR_6 ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct anybuss_host *VAR_7, struct ab_task *VAR_8)
{
 struct area_priv *VAR_9 = &VAR_8->area_pd;
 unsigned int VAR_10;
 int VAR_11;

 if (!VAR_7->power_on)
  return -VAR_1;
 FUNC_0(VAR_7->regmap, VAR_5, &VAR_10);

 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_9->flags | VAR_3 | VAR_4;
 VAR_11 = FUNC_1(VAR_7->regmap, VAR_10);
 if (VAR_11)
  return VAR_11;
 VAR_8->task_fn = VAR_6;
 return -VAR_0;
}
