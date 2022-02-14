
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sa_family; int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
typedef scalar_t__ u16 ;
struct airo_info {scalar_t__ scan_timeout; TYPE_2__* dev; int thr_wait; scalar_t__ expires; int jobs; int sem; int flags; scalar_t__ list_bss_task; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct airo_info*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_2__*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_14(struct airo_info *VAR_13)
{
 union iwreq_data VAR_14;
 int VAR_15 = 0;
 u16 VAR_16;


 VAR_16 = FUNC_7(FUNC_0(VAR_13, VAR_7));
 FUNC_1(VAR_13, VAR_1, VAR_2);

 if ((VAR_16 == VAR_10) && (VAR_13->scan_timeout > 0))
  VAR_15 = 1;

 FUNC_3(VAR_13->dev->name, VAR_16);

 if ((VAR_16 == VAR_9) || (VAR_16 == VAR_11)) {
  if (VAR_12)
   VAR_13->expires = 0;
  if (VAR_13->list_bss_task)
   FUNC_12(VAR_13->list_bss_task);
  FUNC_10(VAR_4, &VAR_13->flags);
  FUNC_10(VAR_3, &VAR_13->flags);

  if (FUNC_5(&VAR_13->sem) != 0) {
   FUNC_10(VAR_6, &VAR_13->jobs);
   FUNC_11(&VAR_13->thr_wait);
  } else
   FUNC_4(VAR_13->dev);
  FUNC_9(VAR_13->dev);
 } else if (!VAR_15) {
  if (VAR_12 && !VAR_13->expires) {
   VAR_13->expires = FUNC_2(3*VAR_5);
   FUNC_11(&VAR_13->thr_wait);
  }


  FUNC_6(VAR_14.ap_addr.sa_data);
  VAR_14.ap_addr.sa_family = VAR_0;
  FUNC_13(VAR_13->dev, VAR_8, &VAR_14, ((void*)0));
  FUNC_8(VAR_13->dev);
 } else {
  FUNC_8(VAR_13->dev);
 }
}
