
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_priv {int msg_in_sz; int * msg; int hdr; } ;
struct anybuss_host {int regmap; int ind_ab; int power_on; } ;
struct ab_task {scalar_t__ start_jiffies; struct mbox_priv mbox_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__,int *,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct anybuss_host *VAR_8, struct ab_task *VAR_9)
{
 struct mbox_priv *VAR_10 = &VAR_9->mbox_pd;
 unsigned int VAR_11;

 if (!VAR_8->power_on)
  return -VAR_1;
 FUNC_2(VAR_8->regmap, VAR_5, &VAR_11);
 if (((FUNC_0(&VAR_8->ind_ab) ^ VAR_11) & VAR_3) == 0) {

  if (FUNC_3(VAR_7, VAR_9->start_jiffies + VAR_6))
   return -VAR_2;
  return -VAR_0;
 }

 FUNC_1(VAR_8->regmap, VAR_4, &VAR_10->hdr,
    sizeof(VAR_10->hdr));
 FUNC_1(VAR_8->regmap, VAR_4 + sizeof(VAR_10->hdr),
    VAR_10->msg, VAR_10->msg_in_sz);

 VAR_11 ^= VAR_3;
 return FUNC_4(VAR_8->regmap, VAR_11);
}
