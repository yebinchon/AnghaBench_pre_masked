
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;
typedef int u8 ;
struct anybuss_host {int softint_pending; int wq; int qlock; int powerq; int qcache; int dev; int regmap; int ind_ab; int power_on; struct anybuss_client* client; } ;
struct anybuss_client {int (* on_area_updated ) (struct anybuss_client*) ;int (* on_online_changed ) (struct anybuss_client*,int) ;} ;
struct ab_task {int (* done_fn ) (struct anybuss_host*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ab_task*,int ,int *,int *) ;
 int FUNC_2 (struct ab_task*) ;
 unsigned int FUNC_3 (int *) ;
 struct ab_task* FUNC_4 (int ,int ,int ,int const*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (struct anybuss_host*) ;
 int FUNC_8 (struct anybuss_client*,int) ;
 int FUNC_9 (struct anybuss_client*,int) ;
 int FUNC_10 (struct anybuss_client*) ;

__attribute__((used)) static void FUNC_11(struct anybuss_host *VAR_8)
{
 struct anybuss_client *VAR_9 = VAR_8->client;
 static const u8 VAR_10;
 int VAR_11;
 unsigned int VAR_12, VAR_13;
 struct ab_task *VAR_14;

 if (!VAR_8->power_on)
  return;
 if (VAR_8->softint_pending)
  return;
 FUNC_6(VAR_8->regmap, VAR_7, &VAR_12);
 if (!((FUNC_3(&VAR_8->ind_ab) ^ VAR_12) & VAR_4))
  return;

 FUNC_6(VAR_8->regmap, VAR_6, &VAR_13);
 if (VAR_13 & VAR_3) {
  if (VAR_9->on_online_changed)
   VAR_9->on_online_changed(VAR_9, 1);
  FUNC_5(VAR_8->dev, "Fieldbus ON");
 }
 if (VAR_13 & VAR_2) {
  if (VAR_9->on_online_changed)
   VAR_9->on_online_changed(VAR_9, 0);
  FUNC_5(VAR_8->dev, "Fieldbus OFF");
 }
 if (VAR_13 & VAR_1) {
  if (VAR_9->on_area_updated)
   VAR_9->on_area_updated(VAR_9);
  FUNC_5(VAR_8->dev, "Fieldbus data changed");
 }





 VAR_14 = FUNC_4(VAR_8->qcache, VAR_5,
          VAR_6, &VAR_10, sizeof(VAR_10));
 if (!VAR_14) {
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_14->done_fn = FUNC_7;
 VAR_11 = FUNC_1(VAR_14, VAR_8->powerq, &VAR_8->qlock, &VAR_8->wq);
 FUNC_2(VAR_14);
 VAR_8->softint_pending = 1;
out:
 FUNC_0(VAR_11);
 if (VAR_11)
  FUNC_7(VAR_8);
}
