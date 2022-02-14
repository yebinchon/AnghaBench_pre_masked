
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_input_event {int dummy; } ;
struct virtio_input {int evt; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,struct virtio_input_event*,int) ;
 int FUNC_1 (int ,struct scatterlist*,int,struct virtio_input_event*,int ) ;

__attribute__((used)) static void FUNC_2(struct virtio_input *VAR_1,
       struct virtio_input_event *VAR_2)
{
 struct scatterlist VAR_3[1];

 FUNC_0(VAR_3, VAR_2, sizeof(*VAR_2));
 FUNC_1(VAR_1->evt, VAR_3, 1, VAR_2, VAR_0);
}
