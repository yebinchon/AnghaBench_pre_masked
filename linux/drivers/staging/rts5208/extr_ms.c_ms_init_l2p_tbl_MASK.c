
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct zone_entry {int dummy; } ;
struct ms_info {int segment_cnt; int total_block; TYPE_1__* segment; int boot_block; } ;
struct rtsx_chip {struct ms_info ms_card; } ;
struct TYPE_3__ {int* defect_list; int disable_count; scalar_t__ unused_blk_cnt; scalar_t__ set_index; scalar_t__ get_index; int * free_table; int * l2p_table; scalar_t__ build_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct rtsx_chip*,int ,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct rtsx_chip *VAR_3)
{
 struct ms_info *VAR_4 = &VAR_3->ms_card;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 u16 VAR_9, VAR_10;
 u8 VAR_11, VAR_12;

 VAR_4->segment_cnt = VAR_4->total_block >> 9;
 FUNC_0(FUNC_2(VAR_3), "ms_card->segment_cnt = %d\n",
  VAR_4->segment_cnt);

 VAR_5 = VAR_4->segment_cnt * sizeof(struct zone_entry);
 VAR_4->segment = FUNC_5(VAR_5);
 if (!VAR_4->segment)
  return VAR_1;

 VAR_8 = FUNC_1(VAR_3, VAR_4->boot_block, 1);
 if (VAR_8 != VAR_2)
  goto INIT_FAIL;

 VAR_10 = VAR_0;
 for (VAR_6 = 0; VAR_6 < (((VAR_4->total_block >> 9) * 10) + 1); VAR_6++) {
  int VAR_13;

  VAR_8 = FUNC_3(VAR_3, VAR_10++, &VAR_11);
  if (VAR_8 != VAR_2)
   goto INIT_FAIL;

  VAR_8 = FUNC_3(VAR_3, VAR_10++, &VAR_12);
  if (VAR_8 != VAR_2)
   goto INIT_FAIL;

  VAR_9 = ((u16)VAR_11 << 8) | VAR_12;
  if (VAR_9 == 0xFFFF)
   break;

  VAR_7 = VAR_9 / 512;

  VAR_13 = VAR_4->segment[VAR_7].disable_count++;
  VAR_4->segment[VAR_7].defect_list[VAR_13] = VAR_9;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->segment_cnt; VAR_6++) {
  VAR_4->segment[VAR_6].build_flag = 0;
  VAR_4->segment[VAR_6].l2p_table = ((void*)0);
  VAR_4->segment[VAR_6].free_table = ((void*)0);
  VAR_4->segment[VAR_6].get_index = 0;
  VAR_4->segment[VAR_6].set_index = 0;
  VAR_4->segment[VAR_6].unused_blk_cnt = 0;

  FUNC_0(FUNC_2(VAR_3), "defective block count of segment %d is %d\n",
   VAR_6, VAR_4->segment[VAR_6].disable_count);
 }

 return VAR_2;

INIT_FAIL:
 FUNC_4(VAR_4->segment);
 VAR_4->segment = ((void*)0);

 return VAR_1;
}
