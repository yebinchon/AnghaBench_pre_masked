
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int image_update_ordernum; scalar_t__ bios_image_size; scalar_t__ image_update_buffer_size; int * image_update_buffer; } ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (!VAR_0.image_update_buffer)
  return;




 FUNC_1(VAR_0.image_update_buffer, 0,
  VAR_0.image_update_buffer_size);
 FUNC_0((unsigned long) VAR_0.image_update_buffer,
  VAR_0.image_update_ordernum);




 VAR_0.image_update_ordernum = -1;
 VAR_0.image_update_buffer = ((void*)0);
 VAR_0.image_update_buffer_size = 0;
 VAR_0.bios_image_size = 0;
}
