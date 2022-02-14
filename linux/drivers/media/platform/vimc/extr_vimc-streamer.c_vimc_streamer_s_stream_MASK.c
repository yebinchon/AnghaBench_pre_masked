
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimc_stream {int * kthread; } ;
struct vimc_ent_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,struct vimc_stream*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vimc_stream*,struct vimc_ent_device*) ;
 int FUNC_5 (struct vimc_stream*) ;
 int VAR_1 ;

int FUNC_6(struct vimc_stream *VAR_2,
      struct vimc_ent_device *VAR_3,
      int VAR_4)
{
 int VAR_5;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 if (VAR_4) {
  if (VAR_2->kthread)
   return 0;

  VAR_5 = FUNC_4(VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;

  VAR_2->kthread = FUNC_2(VAR_1, VAR_2,
           "vimc-streamer thread");

  if (FUNC_0(VAR_2->kthread))
   return FUNC_1(VAR_2->kthread);

 } else {
  if (!VAR_2->kthread)
   return 0;

  VAR_5 = FUNC_3(VAR_2->kthread);
  if (VAR_5)
   return VAR_5;

  VAR_2->kthread = ((void*)0);

  FUNC_5(VAR_2);
 }

 return 0;
}
