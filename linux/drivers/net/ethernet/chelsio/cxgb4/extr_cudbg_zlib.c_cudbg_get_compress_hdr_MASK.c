
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_compress_hdr {int dummy; } ;
struct cudbg_buffer {scalar_t__ offset; scalar_t__ size; char* data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cudbg_buffer *VAR_1,
      struct cudbg_buffer *VAR_2)
{
 if (VAR_1->offset + sizeof(struct cudbg_compress_hdr) >
     VAR_1->size)
  return VAR_0;

 VAR_2->data = (char *)VAR_1->data + VAR_1->offset;
 VAR_2->offset = 0;
 VAR_2->size = sizeof(struct cudbg_compress_hdr);
 VAR_1->offset += sizeof(struct cudbg_compress_hdr);
 return 0;
}
