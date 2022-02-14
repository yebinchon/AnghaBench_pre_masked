
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct area_priv {int flags; } ;
struct anybuss_host {int ind_ab; int power_on; } ;
struct ab_task {scalar_t__ start_jiffies; struct area_priv area_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct anybuss_host *VAR_5, struct ab_task *VAR_6)
{
 struct area_priv *VAR_7 = &VAR_6->area_pd;

 if (!VAR_5->power_on)
  return -VAR_1;
 if (FUNC_0(&VAR_5->ind_ab) & VAR_7->flags) {

  if (FUNC_1(VAR_4, VAR_6->start_jiffies + VAR_3))
   return -VAR_2;
  return -VAR_0;
 }
 return 0;
}
