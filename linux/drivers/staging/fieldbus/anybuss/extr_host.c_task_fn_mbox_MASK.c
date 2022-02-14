
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_priv {int msg_out_sz; int * msg; int hdr; } ;
struct anybuss_host {int regmap; int ind_ab; int power_on; } ;
struct ab_task {int task_fn; scalar_t__ start_jiffies; struct mbox_priv mbox_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,scalar_t__,int *,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct anybuss_host *VAR_9, struct ab_task *VAR_10)
{
 struct mbox_priv *VAR_11 = &VAR_10->mbox_pd;
 unsigned int VAR_12;
 int VAR_13;

 if (!VAR_9->power_on)
  return -VAR_1;
 FUNC_2(VAR_9->regmap, VAR_5, &VAR_12);
 if ((FUNC_0(&VAR_9->ind_ab) ^ VAR_12) & VAR_3) {

  if (FUNC_3(VAR_7, VAR_10->start_jiffies + VAR_6))
   return -VAR_2;
  return -VAR_0;
 }

 FUNC_1(VAR_9->regmap, VAR_4, &VAR_11->hdr,
     sizeof(VAR_11->hdr));
 FUNC_1(VAR_9->regmap, VAR_4 + sizeof(VAR_11->hdr),
     VAR_11->msg, VAR_11->msg_out_sz);

 VAR_12 ^= VAR_3;
 VAR_13 = FUNC_4(VAR_9->regmap, VAR_12);
 if (VAR_13)
  return VAR_13;
 VAR_10->start_jiffies = VAR_7;
 VAR_10->task_fn = VAR_8;
 return -VAR_0;
}
