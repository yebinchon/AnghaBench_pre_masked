
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i1480 {int dev; } ;
struct fw_hdr {size_t length; int const* bin; void* address; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,size_t,int,size_t) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static
int FUNC_2(struct i1480 *VAR_1, struct fw_hdr *VAR_2, unsigned VAR_3,
  const char *VAR_4, const u32 *VAR_5, const u32 *VAR_6)
{
 size_t VAR_7 = (const char *) VAR_5 - VAR_4;
 size_t VAR_8 = (void *) VAR_6 - (void *) VAR_5;
 if (VAR_5 + 2 > VAR_6) {
  FUNC_0(VAR_1->dev, "fw hdr #%u/%zu: EOF reached in header at "
         "offset %zu, limit %zu\n",
         VAR_3, VAR_7,
         (const char *) VAR_5 + 2 - VAR_4,
         (const char *) VAR_6 - VAR_4);
  return -VAR_0;
 }
 VAR_2->next = ((void*)0);
 VAR_2->address = FUNC_1(*VAR_5++);
 VAR_2->length = FUNC_1(*VAR_5++);
 VAR_2->bin = VAR_5;
 if (VAR_2->length > VAR_8) {
  FUNC_0(VAR_1->dev, "fw hdr #%u/%zu: EOF reached in data; "
         "chunk too long (%zu bytes), only %zu left\n",
         VAR_3, VAR_7, VAR_2->length, VAR_8);
  return -VAR_0;
 }
 return 0;
}
