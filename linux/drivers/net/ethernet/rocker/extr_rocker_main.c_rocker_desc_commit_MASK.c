
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_desc_info {int tlv_size; TYPE_1__* desc; int data_size; } ;
struct TYPE_2__ {int tlv_size; int buf_size; } ;



__attribute__((used)) static void FUNC_0(const struct rocker_desc_info *VAR_0)
{
 VAR_0->desc->buf_size = VAR_0->data_size;
 VAR_0->desc->tlv_size = VAR_0->tlv_size;
}
