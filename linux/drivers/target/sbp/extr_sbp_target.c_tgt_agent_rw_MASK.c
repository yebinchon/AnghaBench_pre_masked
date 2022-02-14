
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
struct sbp_target_agent {TYPE_2__ handler; TYPE_1__* login; } ;
struct sbp_session {int generation; int node_id; int lock; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;
struct TYPE_3__ {struct sbp_session* sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_card*,struct fw_request*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fw_card*,int,void*,struct sbp_target_agent*) ;
 int FUNC_5 (struct fw_card*,int,void*,struct sbp_target_agent*) ;
 int FUNC_6 (struct fw_card*,int,void*,struct sbp_target_agent*) ;
 int FUNC_7 (struct fw_card*,int,void*,struct sbp_target_agent*) ;
 int FUNC_8 (struct fw_card*,int,void*,struct sbp_target_agent*) ;

__attribute__((used)) static void FUNC_9(struct fw_card *VAR_2, struct fw_request *VAR_3,
  int VAR_4, int VAR_5, int VAR_6, int VAR_7,
  unsigned long long VAR_8, void *VAR_9, size_t VAR_10,
  void *VAR_11)
{
 struct sbp_target_agent *VAR_12 = VAR_11;
 struct sbp_session *VAR_13 = VAR_12->login->sess;
 int VAR_14, VAR_15, VAR_16;

 FUNC_2(&VAR_13->lock);
 VAR_14 = VAR_13->generation;
 VAR_15 = VAR_13->node_id;
 FUNC_3(&VAR_13->lock);

 if (VAR_7 != VAR_14) {
  FUNC_1("ignoring request with wrong generation\n");
  VAR_16 = VAR_1;
  goto out;
 }

 if (VAR_6 != VAR_15) {
  FUNC_1("ignoring request from foreign node (%x != %x)\n",
    VAR_6, VAR_15);
  VAR_16 = VAR_1;
  goto out;
 }


 VAR_8 -= VAR_12->handler.offset;

 if (VAR_8 == 0x00 && VAR_10 == 4) {

  VAR_16 = FUNC_5(VAR_2, VAR_4, VAR_9, VAR_12);
 } else if (VAR_8 == 0x04 && VAR_10 == 4) {

  VAR_16 = FUNC_4(VAR_2, VAR_4, VAR_9, VAR_12);
 } else if (VAR_8 == 0x08 && VAR_10 == 8) {

  VAR_16 = FUNC_7(VAR_2, VAR_4, VAR_9, VAR_12);
 } else if (VAR_8 == 0x10 && VAR_10 == 4) {

  VAR_16 = FUNC_6(VAR_2, VAR_4, VAR_9, VAR_12);
 } else if (VAR_8 == 0x14 && VAR_10 == 4) {

  VAR_16 = FUNC_8(VAR_2, VAR_4,
    VAR_9, VAR_12);
 } else {
  VAR_16 = VAR_0;
 }

out:
 FUNC_0(VAR_2, VAR_3, VAR_16);
}
