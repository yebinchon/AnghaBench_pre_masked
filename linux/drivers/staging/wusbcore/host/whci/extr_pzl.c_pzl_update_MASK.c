
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wusbhc {int mutex; scalar_t__ active; } ;
struct whc {scalar_t__ base; int periodic_list_wq; struct wusbhc wusbhc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct whc*,char*) ;
 int FUNC_6 (struct whc*,int ,int ) ;

void FUNC_7(struct whc *VAR_2, uint32_t VAR_3)
{
 struct wusbhc *VAR_4 = &VAR_2->wusbhc;
 long VAR_5;

 FUNC_2(&VAR_4->mutex);
 if (VAR_4->active) {
  FUNC_6(VAR_2, VAR_3, VAR_3);
  VAR_5 = FUNC_4(
   VAR_2->periodic_list_wq,
   (FUNC_0(VAR_2->base + VAR_0) & VAR_1) == 0,
   FUNC_1(1000));
  if (VAR_5 == 0)
   FUNC_5(VAR_2, "PZL update timeout");
 }
 FUNC_3(&VAR_4->mutex);
}
