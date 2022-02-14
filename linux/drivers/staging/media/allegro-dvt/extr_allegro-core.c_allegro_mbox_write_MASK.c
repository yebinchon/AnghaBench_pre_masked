
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcu_msg_header {size_t length; int type; } ;
struct allegro_mbox {size_t size; int lock; int tail; scalar_t__ data; } ;
struct allegro_dev {int sram; int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,void*,size_t) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int,int ,int *,char*,int ,unsigned int) ;
 int FUNC_8 (int *,char*,unsigned int,size_t) ;

__attribute__((used)) static int FUNC_9(struct allegro_dev *VAR_3,
         struct allegro_mbox *VAR_4, void *VAR_5, size_t VAR_6)
{
 struct mcu_msg_header *VAR_7 = VAR_5;
 unsigned int VAR_8;
 size_t VAR_9;
 int VAR_10 = 0;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_6 > VAR_4->size) {
  FUNC_8(&VAR_3->v4l2_dev,
    "message (%zu bytes) to large for mailbox (%zu bytes)\n",
    VAR_6, VAR_4->size);
  return -VAR_0;
 }

 if (VAR_7->length != VAR_6 - sizeof(*VAR_7)) {
  FUNC_8(&VAR_3->v4l2_dev,
    "invalid message length: %u bytes (expected %zu bytes)\n",
    VAR_7->length, VAR_6 - sizeof(*VAR_7));
  return -VAR_0;
 }

 FUNC_7(2, VAR_2, &VAR_3->v4l2_dev,
   "write command message: type %s, body length %d\n",
   FUNC_1(VAR_7->type), VAR_7->length);

 FUNC_2(&VAR_4->lock);
 FUNC_5(VAR_3->sram, VAR_4->tail, &VAR_8);
 if (VAR_8 > VAR_4->size) {
  FUNC_8(&VAR_3->v4l2_dev,
    "invalid tail (0x%x): must be smaller than mailbox size (0x%zx)\n",
    VAR_8, VAR_4->size);
  VAR_10 = -VAR_1;
  goto out;
 }
 VAR_9 = FUNC_0(VAR_6, VAR_4->size - (size_t)VAR_8);
 FUNC_4(VAR_3->sram, VAR_4->data + VAR_8, VAR_5, VAR_9 / 4);
 FUNC_4(VAR_3->sram, VAR_4->data,
     VAR_5 + VAR_9, (VAR_6 - VAR_9) / 4);
 FUNC_6(VAR_3->sram, VAR_4->tail, (VAR_8 + VAR_6) % VAR_4->size);

out:
 FUNC_3(&VAR_4->lock);

 return VAR_10;
}
