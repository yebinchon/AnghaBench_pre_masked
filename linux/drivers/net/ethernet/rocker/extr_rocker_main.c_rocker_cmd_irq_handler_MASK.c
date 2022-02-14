
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rocker_wait {scalar_t__ nowait; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int cmd_ring; int cmd_ring_lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct rocker_wait* FUNC_0 (struct rocker_desc_info const*) ;
 int FUNC_1 (struct rocker_desc_info const*) ;
 struct rocker_desc_info* FUNC_2 (int *) ;
 int FUNC_3 (struct rocker*,int *,scalar_t__) ;
 int FUNC_4 (struct rocker_wait*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct rocker *VAR_3 = VAR_2;
 const struct rocker_desc_info *VAR_4;
 struct rocker_wait *VAR_5;
 u32 VAR_6 = 0;

 FUNC_5(&VAR_3->cmd_ring_lock);
 while ((VAR_4 = FUNC_2(&VAR_3->cmd_ring))) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5->nowait) {
   FUNC_1(VAR_4);
  } else {
   FUNC_4(VAR_5);
  }
  VAR_6++;
 }
 FUNC_6(&VAR_3->cmd_ring_lock);
 FUNC_3(VAR_3, &VAR_3->cmd_ring, VAR_6);

 return VAR_0;
}
