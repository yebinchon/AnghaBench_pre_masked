
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct code_page_directory {TYPE_1__* array; int n_code_pages; int magic; } ;
struct code_page_data {int * offs; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ secno ;
struct TYPE_2__ {int index; int code_page_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (struct super_block*,scalar_t__,struct buffer_head**,int ) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (char*,...) ;

unsigned char *FUNC_7(struct super_block *VAR_2, secno VAR_3)
{
 struct buffer_head *VAR_4;
 secno VAR_5;
 unsigned VAR_6;
 unsigned char *VAR_7;
 unsigned char *VAR_8;
 int VAR_9;
 struct code_page_data *VAR_10;
 struct code_page_directory *VAR_11 = FUNC_1(VAR_2, VAR_3, &VAR_4, 0);
 if (!VAR_11) return ((void*)0);
 if (FUNC_4(VAR_11->magic) != VAR_0) {
  FUNC_6("Code page directory magic doesn't match (magic = %08x)\n",
   FUNC_4(VAR_11->magic));
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 if (!FUNC_4(VAR_11->n_code_pages)) {
  FUNC_6("n_code_pages == 0\n");
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 VAR_5 = FUNC_4(VAR_11->array[0].code_page_data);
 VAR_6 = FUNC_3(VAR_11->array[0].index);
 FUNC_0(VAR_4);

 if (VAR_6 >= 3) {
  FUNC_6("Code page index out of array\n");
  return ((void*)0);
 }

 if (!(VAR_10 = FUNC_1(VAR_2, VAR_5, &VAR_4, 0))) return ((void*)0);
 if (FUNC_3(VAR_10->offs[VAR_6]) > 0x178) {
  FUNC_6("Code page index out of sector\n");
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 VAR_7 = (unsigned char *)VAR_10 + FUNC_3(VAR_10->offs[VAR_6]) + 6;
 if (!(VAR_8 = FUNC_2(256, VAR_1))) {
  FUNC_6("out of memory for code page table\n");
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 FUNC_5(VAR_8, VAR_7, 128);
 FUNC_0(VAR_4);



 for (VAR_9=128; VAR_9<256; VAR_9++) VAR_8[VAR_9]=VAR_9;
 for (VAR_9=128; VAR_9<256; VAR_9++) if (VAR_8[VAR_9-128]!=VAR_9 && VAR_8[VAR_9-128]>=128)
  VAR_8[VAR_8[VAR_9-128]] = VAR_9;

 return VAR_8;
}
