
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ep_buffer_info {int dummy; } ep_buffer_info ;
typedef int u8 ;
struct epbuf_handler {int * ring; union ep_buffer_info* info; int size; void* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct epbuf_handler *VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->buffer = VAR_3;
 VAR_2->size = VAR_1;

 VAR_2->info = (union ep_buffer_info *)VAR_3;
 VAR_2->ring = (u8 *)(VAR_3 + sizeof(union ep_buffer_info));

 return 0;
}
