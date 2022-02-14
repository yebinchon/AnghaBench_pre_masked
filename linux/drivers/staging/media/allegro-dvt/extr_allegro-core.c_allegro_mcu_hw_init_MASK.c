
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fw_info {int suballocator_size; int mailbox_size; int mailbox_status; int mailbox_cmd; } ;
struct TYPE_3__ {int size; int paddr; } ;
struct allegro_dev {TYPE_1__ suballocator; int v4l2_dev; int mbox_status; int mbox_command; } ;


 int VAR_0 ;
 int FUNC_0 (struct allegro_dev*,TYPE_1__*,int ) ;
 int FUNC_1 (struct allegro_dev*,TYPE_1__*) ;
 int FUNC_2 (struct allegro_dev*,int *,int ,int ) ;
 int FUNC_3 (struct allegro_dev*) ;
 int FUNC_4 (struct allegro_dev*) ;
 int FUNC_5 (struct allegro_dev*) ;
 int FUNC_6 (struct allegro_dev*,int ,int ) ;
 int FUNC_7 (struct allegro_dev*) ;
 int FUNC_8 (struct allegro_dev*,int) ;
 int FUNC_9 (int *,char*,...) ;

__attribute__((used)) static int FUNC_10(struct allegro_dev *VAR_1,
          const struct fw_info *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, &VAR_1->mbox_command,
     VAR_2->mailbox_cmd, VAR_2->mailbox_size);
 FUNC_2(VAR_1, &VAR_1->mbox_status,
     VAR_2->mailbox_status, VAR_2->mailbox_size);

 FUNC_4(VAR_1);


 FUNC_7(VAR_1);
 VAR_3 = FUNC_8(VAR_1, 5000);
 if (VAR_3 < 0) {
  FUNC_9(&VAR_1->v4l2_dev,
    "mcu did not send INIT after reset\n");
  VAR_3 = -VAR_0;
  goto err_disable_interrupts;
 }

 VAR_3 = FUNC_0(VAR_1, &VAR_1->suballocator,
       VAR_2->suballocator_size);
 if (VAR_3) {
  FUNC_9(&VAR_1->v4l2_dev,
    "failed to allocate %zu bytes for suballocator\n",
    VAR_2->suballocator_size);
  goto err_reset_mcu;
 }

 FUNC_6(VAR_1, VAR_1->suballocator.paddr,
         VAR_1->suballocator.size);
 VAR_3 = FUNC_8(VAR_1, 5000);
 if (VAR_3 < 0) {
  FUNC_9(&VAR_1->v4l2_dev,
    "mcu failed to configure sub-allocator\n");
  VAR_3 = -VAR_0;
  goto err_free_suballocator;
 }

 return 0;

err_free_suballocator:
 FUNC_1(VAR_1, &VAR_1->suballocator);
err_reset_mcu:
 FUNC_5(VAR_1);
err_disable_interrupts:
 FUNC_3(VAR_1);

 return VAR_3;
}
