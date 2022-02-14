
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct virtio_input_event {int value; void* code; void* type; } ;
struct virtio_input {int lock; int sts; scalar_t__ ready; } ;
struct scatterlist {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct virtio_input_event*) ;
 struct virtio_input_event* FUNC_3 (int,int ) ;
 int FUNC_4 (struct scatterlist*,struct virtio_input_event*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,struct scatterlist*,int,struct virtio_input_event*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct virtio_input *VAR_3,
     u16 VAR_4, u16 VAR_5, s32 VAR_6)
{
 struct virtio_input_event *VAR_7;
 struct scatterlist VAR_8[1];
 unsigned long VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->type = FUNC_0(VAR_4);
 VAR_7->code = FUNC_0(VAR_5);
 VAR_7->value = FUNC_1(VAR_6);
 FUNC_4(VAR_8, VAR_7, sizeof(*VAR_7));

 FUNC_5(&VAR_3->lock, VAR_9);
 if (VAR_3->ready) {
  VAR_10 = FUNC_7(VAR_3->sts, VAR_8, 1, VAR_7, VAR_2);
  FUNC_8(VAR_3->sts);
 } else {
  VAR_10 = -VAR_0;
 }
 FUNC_6(&VAR_3->lock, VAR_9);

 if (VAR_10 != 0)
  FUNC_2(VAR_7);
 return VAR_10;
}
