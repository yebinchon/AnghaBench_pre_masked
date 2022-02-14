
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbp_management_request {int generation; int node_addr; int speed; int card; } ;
struct TYPE_4__ {unsigned long long offset; } ;
struct sbp_management_agent {int state; int orb_offset; int work; struct sbp_management_request* request; int lock; TYPE_2__ handler; TYPE_1__* tport; } ;
struct sbp2_pointer {int dummy; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;
struct TYPE_3__ {int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct sbp2_pointer*) ;
 int FUNC_1 (struct fw_card*) ;
 int FUNC_2 (struct fw_request*) ;
 int FUNC_3 (struct fw_card*,struct fw_request*,int) ;
 struct sbp_management_request* FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct sbp2_pointer*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10(struct fw_card *VAR_9,
 struct fw_request *VAR_10, int VAR_11, int VAR_12, int VAR_13,
 int VAR_14, unsigned long long VAR_15, void *VAR_16, size_t VAR_17,
 void *VAR_18)
{
 struct sbp_management_agent *VAR_19 = VAR_18;
 struct sbp2_pointer *VAR_20 = VAR_16;
 int VAR_21 = VAR_2;

 if (!VAR_19->tport->enable)
  goto out;

 if ((VAR_15 != VAR_19->handler.offset) || (VAR_17 != 8))
  goto out;

 if (VAR_11 == VAR_7) {
  struct sbp_management_request *VAR_22;
  int VAR_23;

  FUNC_8(&VAR_19->lock);
  VAR_23 = VAR_19->state;
  VAR_19->state = VAR_1;
  FUNC_9(&VAR_19->lock);

  if (VAR_23 == VAR_1) {
   FUNC_5("ignoring management request while busy\n");
   VAR_21 = VAR_4;
   goto out;
  }
  VAR_22 = FUNC_4(sizeof(*VAR_22), VAR_0);
  if (!VAR_22) {
   VAR_21 = VAR_4;
   goto out;
  }

  VAR_22->card = FUNC_1(VAR_9);
  VAR_22->generation = VAR_14;
  VAR_22->node_addr = VAR_13;
  VAR_22->speed = FUNC_2(VAR_10);

  VAR_19->orb_offset = FUNC_7(VAR_20);
  VAR_19->request = VAR_22;

  FUNC_6(VAR_8, &VAR_19->work);
  VAR_21 = VAR_3;
 } else if (VAR_11 == VAR_6) {
  FUNC_0(VAR_19->orb_offset, VAR_20);
  VAR_21 = VAR_3;
 } else {
  VAR_21 = VAR_5;
 }

out:
 FUNC_3(VAR_9, VAR_10, VAR_21);
}
