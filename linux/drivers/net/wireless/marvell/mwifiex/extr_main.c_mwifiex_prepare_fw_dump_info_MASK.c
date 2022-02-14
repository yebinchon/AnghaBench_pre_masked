
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct mwifiex_adapter {size_t num_mem_types; int devdump_len; char* devdump_data; struct memory_type_mapping* mem_type_mapping_tbl; } ;
struct memory_type_mapping {char* mem_ptr; char* mem_name; scalar_t__ mem_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__) ;

void FUNC_7(struct mwifiex_adapter *VAR_3)
{
 u8 VAR_4;
 char *VAR_5;
 u32 VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_mem_types; VAR_4++) {
  struct memory_type_mapping *VAR_7 =
    &VAR_3->mem_type_mapping_tbl[VAR_4];

  if (VAR_7->mem_ptr) {
   VAR_6 += (FUNC_4("========Start dump ") +
     FUNC_4(VAR_7->mem_name) +
     FUNC_4("========\n") +
     (VAR_7->mem_size + 1) +
     FUNC_4("\n========End dump========\n"));
  }
 }

 if (VAR_6 + 1 + VAR_3->devdump_len > VAR_2) {

  VAR_5 = FUNC_6(VAR_6 + 1 + VAR_3->devdump_len);
  FUNC_2(VAR_3, VAR_1, "Realloc device dump data.\n");
  if (!VAR_5) {
   FUNC_5(VAR_3->devdump_data);
   FUNC_2(VAR_3, VAR_0,
        "vzalloc devdump data failure!\n");
   return;
  }

  FUNC_1(VAR_5, VAR_3->devdump_data,
   VAR_3->devdump_len);
  FUNC_5(VAR_3->devdump_data);
  VAR_3->devdump_data = VAR_5;
 }

 VAR_5 = (char *)VAR_3->devdump_data + VAR_3->devdump_len;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_mem_types; VAR_4++) {
  struct memory_type_mapping *VAR_8 =
     &VAR_3->mem_type_mapping_tbl[VAR_4];

  if (VAR_8->mem_ptr) {
   FUNC_3(VAR_5, "========Start dump ");
   VAR_5 += FUNC_4("========Start dump ");

   FUNC_3(VAR_5, VAR_8->mem_name);
   VAR_5 += FUNC_4(VAR_8->mem_name);

   FUNC_3(VAR_5, "========\n");
   VAR_5 += FUNC_4("========\n");

   FUNC_0(VAR_5, VAR_8->mem_ptr, VAR_8->mem_size);
   VAR_5 += VAR_8->mem_size;

   FUNC_3(VAR_5, "\n========End dump========\n");
   VAR_5 += FUNC_4("\n========End dump========\n");
  }
 }

 VAR_3->devdump_len = VAR_5 - (char *)VAR_3->devdump_data;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_mem_types; VAR_4++) {
  struct memory_type_mapping *VAR_9 =
   &VAR_3->mem_type_mapping_tbl[VAR_4];

  FUNC_5(VAR_9->mem_ptr);
  VAR_9->mem_ptr = ((void*)0);
  VAR_9->mem_size = 0;
 }
}
