
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcu_msg_header {int length; int type; } ;
struct allegro_mbox {unsigned int size; int head; scalar_t__ data; } ;
struct allegro_dev {int v4l2_dev; int sram; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,void*,size_t) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int,int ,int *,char*,int ,size_t) ;
 int FUNC_6 (int *,char*,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct allegro_dev *VAR_3,
     struct allegro_mbox *VAR_4,
     void *VAR_5, size_t VAR_6)
{
 struct mcu_msg_header *VAR_7;
 unsigned int VAR_8;
 ssize_t VAR_9;
 size_t VAR_10;

 FUNC_3(VAR_3->sram, VAR_4->head, &VAR_8);
 if (VAR_8 > VAR_4->size) {
  FUNC_6(&VAR_3->v4l2_dev,
    "invalid head (0x%x): must be smaller than mailbox size (0x%zx)\n",
    VAR_8, VAR_4->size);
  return -VAR_1;
 }


 FUNC_2(VAR_3->sram, VAR_4->data + VAR_8,
    VAR_5, sizeof(*VAR_7) / 4);
 VAR_7 = VAR_5;
 VAR_9 = VAR_7->length + sizeof(*VAR_7);
 if (VAR_9 > VAR_4->size || VAR_9 & 0x3) {
  FUNC_6(&VAR_3->v4l2_dev,
    "invalid message length: %zu bytes (maximum %zu bytes)\n",
    VAR_7->length + sizeof(*VAR_7), VAR_4->size);
  return -VAR_1;
 }
 if (VAR_9 > VAR_6) {
  FUNC_6(&VAR_3->v4l2_dev,
    "destination buffer too small: %zu bytes (need %zu bytes)\n",
    VAR_6, VAR_9);
  return -VAR_0;
 }
 VAR_10 = FUNC_0((size_t)VAR_7->length,
      (size_t)(VAR_4->size - (VAR_8 + sizeof(*VAR_7))));
 FUNC_2(VAR_3->sram, VAR_4->data + VAR_8 + sizeof(*VAR_7),
    VAR_5 + sizeof(*VAR_7), VAR_10 / 4);
 FUNC_2(VAR_3->sram, VAR_4->data,
    VAR_5 + sizeof(*VAR_7) + VAR_10,
    (VAR_7->length - VAR_10) / 4);

 FUNC_4(VAR_3->sram, VAR_4->head, (VAR_8 + VAR_9) % VAR_4->size);

 FUNC_5(2, VAR_2, &VAR_3->v4l2_dev,
   "read status message: type %s, body length %d\n",
   FUNC_1(VAR_7->type), VAR_7->length);

 return VAR_9;
}
