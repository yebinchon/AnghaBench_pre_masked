
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct area_priv {int flags; int count; int buf; int addr; scalar_t__ is_write; } ;
struct anybuss_host {int regmap; int dev; int ind_ab; int power_on; } ;
struct ab_task {int task_fn; scalar_t__ start_jiffies; struct area_priv area_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct anybuss_host *VAR_8, struct ab_task *VAR_9)
{
 struct area_priv *VAR_10 = &VAR_9->area_pd;
 unsigned int VAR_11;
 int VAR_12;

 if (!VAR_8->power_on)
  return -VAR_1;
 FUNC_5(VAR_8->regmap, VAR_4, &VAR_11);
 if (!(FUNC_0(&VAR_8->ind_ab) & VAR_10->flags)) {

  if (FUNC_6(VAR_6, VAR_9->start_jiffies + VAR_5)) {
   FUNC_1(VAR_8->dev, "timeout waiting for area");
   FUNC_2();
   return -VAR_2;
  }
  return -VAR_0;
 }

 if (VAR_10->is_write)
  FUNC_4(VAR_8->regmap, VAR_10->addr, VAR_10->buf,
      VAR_10->count);
 else
  FUNC_3(VAR_8->regmap, VAR_10->addr, VAR_10->buf,
     VAR_10->count);

 VAR_11 &= ~VAR_3;
 VAR_11 |= VAR_10->flags;
 VAR_12 = FUNC_7(VAR_8->regmap, VAR_11);
 if (VAR_12)
  return VAR_12;
 VAR_9->task_fn = VAR_7;
 return -VAR_0;
}
