
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fjes_hw {TYPE_2__* ep_shm_info; } ;
struct fjes_adapter {struct fjes_hw hw; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int recv_intr_rx; int recv_intr_stop; int recv_intr_unshare; int recv_intr_zoneupdate; } ;
struct TYPE_4__ {TYPE_1__ ep_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fjes_hw*) ;
 int FUNC_1 (struct fjes_hw*,int,int) ;
 int FUNC_2 (struct fjes_adapter*,int) ;
 int FUNC_3 (struct fjes_adapter*,int) ;
 int FUNC_4 (struct fjes_adapter*,int) ;
 int FUNC_5 (struct fjes_adapter*,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct fjes_adapter *VAR_11 = VAR_10;
 struct fjes_hw *VAR_12 = &VAR_11->hw;
 irqreturn_t VAR_13;
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_12);

 if (VAR_14 & VAR_8) {
  if (VAR_14 & VAR_4) {
   FUNC_2(VAR_11, VAR_14 & VAR_7);
   VAR_12->ep_shm_info[VAR_14 & VAR_7].ep_stats
    .recv_intr_rx += 1;
  }

  if (VAR_14 & VAR_2) {
   FUNC_3(VAR_11, VAR_14 & VAR_7);
   VAR_12->ep_shm_info[VAR_14 & VAR_7].ep_stats
    .recv_intr_stop += 1;
  }

  if (VAR_14 & VAR_6) {
   FUNC_4(VAR_11, VAR_14 & VAR_7);
   VAR_12->ep_shm_info[VAR_14 & VAR_7].ep_stats
    .recv_intr_unshare += 1;
  }

  if (VAR_14 & VAR_5)
   FUNC_1(VAR_12,
         VAR_5, 1);

  if (VAR_14 & VAR_3) {
   FUNC_5(VAR_11, VAR_14 & VAR_7);
   VAR_12->ep_shm_info[VAR_14 & VAR_7].ep_stats
    .recv_intr_zoneupdate += 1;
  }

  VAR_13 = VAR_0;
 } else {
  VAR_13 = VAR_1;
 }

 return VAR_13;
}
