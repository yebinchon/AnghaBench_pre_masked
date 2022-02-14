
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct msb_data {int* boot_block_locations; size_t boot_block_count; int block_count; struct ms_boot_page* boot_page; } ;
struct ms_extra_data_register {int management_flag; } ;
struct TYPE_2__ {int block_id; } ;
struct ms_boot_page {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 struct ms_boot_page* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct ms_boot_page*) ;
 scalar_t__ FUNC_5 (struct msb_data*,int,int ,struct ms_extra_data_register*,struct scatterlist*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct scatterlist*,struct ms_boot_page*,int) ;

__attribute__((used)) static int FUNC_8(struct msb_data *VAR_7)
{
 int VAR_8 = 0;
 struct scatterlist VAR_9;
 struct ms_extra_data_register VAR_10;
 struct ms_boot_page *VAR_11;

 VAR_7->boot_block_locations[0] = VAR_5;
 VAR_7->boot_block_locations[1] = VAR_5;
 VAR_7->boot_block_count = 0;

 FUNC_2("Start of a scan for the boot blocks");

 if (!VAR_7->boot_page) {
  VAR_11 = FUNC_3(2, sizeof(struct ms_boot_page),
         VAR_2);
  if (!VAR_11)
   return -VAR_1;

  VAR_7->boot_page = VAR_11;
 } else
  VAR_11 = VAR_7->boot_page;

 VAR_7->block_count = VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

  FUNC_7(&VAR_9, VAR_11, sizeof(*VAR_11));
  if (FUNC_5(VAR_7, VAR_8, 0, &VAR_10, &VAR_9, 0)) {
   FUNC_1("boot scan: can't read pba %d", VAR_8);
   continue;
  }

  if (VAR_10.management_flag & VAR_3) {
   FUNC_1("management flag doesn't indicate boot block %d",
         VAR_8);
   continue;
  }

  if (FUNC_0(VAR_11->header.block_id) != VAR_4) {
   FUNC_1("the pba at %d doesn' contain boot block ID", VAR_8);
   continue;
  }

  FUNC_4(VAR_11);
  VAR_7->boot_block_locations[VAR_7->boot_block_count] = VAR_8;

  VAR_11++;
  VAR_7->boot_block_count++;

  if (VAR_7->boot_block_count == 2)
   break;
 }

 if (!VAR_7->boot_block_count) {
  FUNC_6("media doesn't contain master page, aborting");
  return -VAR_0;
 }

 FUNC_2("End of scan for boot blocks");
 return 0;
}
