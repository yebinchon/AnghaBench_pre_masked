
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_target_agent {int doorbell; int lock; int orb_pointer; int work; int state; } ;
struct sbp2_pointer {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int ,struct sbp2_pointer*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sbp2_pointer*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct fw_card *VAR_7, int VAR_8, void *VAR_9,
  struct sbp_target_agent *VAR_10)
{
 struct sbp2_pointer *VAR_11 = VAR_9;

 switch (VAR_8) {
 case 128:
  FUNC_5(&VAR_10->lock);
  if (VAR_10->state != VAR_2 &&
    VAR_10->state != VAR_1) {
   FUNC_6(&VAR_10->lock);
   FUNC_2("Ignoring ORB_POINTER write while active.\n");
   return VAR_4;
  }
  VAR_10->state = VAR_0;
  FUNC_6(&VAR_10->lock);

  VAR_10->orb_pointer = FUNC_4(VAR_11);
  VAR_10->doorbell = 0;

  FUNC_1("tgt_agent ORB_POINTER write: 0x%llx\n",
    VAR_10->orb_pointer);

  FUNC_3(VAR_6, &VAR_10->work);

  return VAR_3;

 case 129:
  FUNC_1("tgt_agent ORB_POINTER READ\n");
  FUNC_5(&VAR_10->lock);
  FUNC_0(VAR_10->orb_pointer, VAR_11);
  FUNC_6(&VAR_10->lock);
  return VAR_3;

 default:
  return VAR_5;
 }
}
