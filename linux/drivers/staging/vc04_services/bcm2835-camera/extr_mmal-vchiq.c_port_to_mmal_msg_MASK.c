
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int size; int num; } ;
struct TYPE_5__ {int size; int num; } ;
struct TYPE_4__ {int alignment; int size; int num; } ;
struct vchiq_mmal_port {TYPE_3__ current_buffer; TYPE_2__ recommended_buffer; TYPE_1__ minimum_buffer; int enabled; int index; int type; } ;
struct mmal_port {scalar_t__ userdata; int buffer_size; int buffer_num; int buffer_size_recommended; int buffer_num_recommended; int buffer_alignment_min; int buffer_size_min; int buffer_num_min; int is_enabled; scalar_t__ index_all; int index; int type; } ;



__attribute__((used)) static void FUNC_0(struct vchiq_mmal_port *VAR_0, struct mmal_port *VAR_1)
{

 VAR_1->type = VAR_0->type;
 VAR_1->index = VAR_0->index;
 VAR_1->index_all = 0;
 VAR_1->is_enabled = VAR_0->enabled;
 VAR_1->buffer_num_min = VAR_0->minimum_buffer.num;
 VAR_1->buffer_size_min = VAR_0->minimum_buffer.size;
 VAR_1->buffer_alignment_min = VAR_0->minimum_buffer.alignment;
 VAR_1->buffer_num_recommended = VAR_0->recommended_buffer.num;
 VAR_1->buffer_size_recommended = VAR_0->recommended_buffer.size;


 VAR_1->buffer_num = VAR_0->current_buffer.num;
 VAR_1->buffer_size = VAR_0->current_buffer.size;
 VAR_1->userdata = (u32)(unsigned long)VAR_0;
}
