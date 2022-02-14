
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_msg {int dummy; } ;
struct nvec_chip {unsigned char sync_write_pending; int sync_write_mutex; struct nvec_msg* last_sync_msg; int dev; int sync_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct nvec_chip*,unsigned char const*,short) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct nvec_chip *VAR_2,
      const unsigned char *VAR_3, short VAR_4,
      struct nvec_msg **VAR_5)
{
 FUNC_3(&VAR_2->sync_write_mutex);

 *VAR_5 = ((void*)0);
 VAR_2->sync_write_pending = (VAR_3[1] << 8) + VAR_3[0];

 if (FUNC_5(VAR_2, VAR_3, VAR_4) < 0) {
  FUNC_4(&VAR_2->sync_write_mutex);
  return -VAR_0;
 }

 FUNC_0(VAR_2->dev, "nvec_sync_write: 0x%04x\n",
  VAR_2->sync_write_pending);
 if (!(FUNC_6(&VAR_2->sync_write,
       FUNC_2(2000)))) {
  FUNC_1(VAR_2->dev,
    "timeout waiting for sync write to complete\n");
  FUNC_4(&VAR_2->sync_write_mutex);
  return -VAR_1;
 }

 FUNC_0(VAR_2->dev, "nvec_sync_write: pong!\n");

 *VAR_5 = VAR_2->last_sync_msg;

 FUNC_4(&VAR_2->sync_write_mutex);

 return 0;
}
