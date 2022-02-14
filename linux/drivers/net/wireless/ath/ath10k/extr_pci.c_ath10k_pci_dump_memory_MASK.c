
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ath10k_mem_region {size_t len; int type; int start; int name; } ;
struct TYPE_2__ {int size; struct ath10k_mem_region* regions; } ;
struct ath10k_hw_mem_layout {TYPE_1__ region_table; } ;
struct ath10k_fw_crash_data {size_t ramdump_buf_len; int * ramdump_buf; } ;
struct ath10k_dump_ram_data_hdr {void* length; void* start; void* region_type; } ;
struct ath10k {int dump_mutex; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct ath10k_hw_mem_layout* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,struct ath10k_mem_region const*,int *) ;
 size_t FUNC_2 (struct ath10k*,struct ath10k_mem_region const*,int *) ;
 size_t FUNC_3 (struct ath10k*,struct ath10k_mem_region const*,int *) ;
 int FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (struct ath10k*,char*,int ,int,...) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,size_t) ;

__attribute__((used)) static void FUNC_9(struct ath10k *VAR_2,
       struct ath10k_fw_crash_data *VAR_3)
{
 const struct ath10k_hw_mem_layout *VAR_4;
 const struct ath10k_mem_region *VAR_5;
 struct ath10k_dump_ram_data_hdr *VAR_6;
 u32 VAR_7, VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;
 u8 *VAR_12;

 FUNC_7(&VAR_2->dump_mutex);

 if (!VAR_3)
  return;

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return;

 VAR_5 = &VAR_4->region_table.regions[0];

 VAR_12 = VAR_3->ramdump_buf;
 VAR_9 = VAR_3->ramdump_buf_len;

 FUNC_8(VAR_12, 0, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_4->region_table.size; VAR_11++) {
  VAR_7 = 0;

  if (VAR_5->len > VAR_9) {
   FUNC_5(VAR_2, "memory region %s size %d is larger that remaining ramdump buffer size %zu\n",
        VAR_5->name,
        VAR_5->len,
        VAR_9);
   break;
  }




  if (VAR_5->type == VAR_0 ||
      VAR_5->type == VAR_1) {
   VAR_8 = VAR_5->start >> 20;

   VAR_10 = FUNC_4(VAR_2, VAR_8);
   if (VAR_10) {
    FUNC_5(VAR_2, "failed to switch ram config to IRAM for section %s: %d\n",
         VAR_5->name, VAR_10);
    break;
   }
  }


  VAR_6 = (void *)VAR_12;
  VAR_12 += sizeof(*VAR_6);
  VAR_9 -= sizeof(*VAR_6);

  switch (VAR_5->type) {
  case 128:
   VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_12);
   break;
  case 129:
   VAR_7 = FUNC_2(VAR_2, VAR_5, VAR_12);
   break;
  default:
   VAR_10 = FUNC_1(VAR_2, VAR_5, VAR_12);
   if (VAR_10 < 0)
    break;

   VAR_7 = VAR_10;
   break;
  }

  VAR_6->region_type = FUNC_6(VAR_5->type);
  VAR_6->start = FUNC_6(VAR_5->start);
  VAR_6->length = FUNC_6(VAR_7);

  if (VAR_7 == 0)

   break;

  VAR_12 += VAR_7;
  VAR_9 -= VAR_7;

  VAR_5++;
 }
}
