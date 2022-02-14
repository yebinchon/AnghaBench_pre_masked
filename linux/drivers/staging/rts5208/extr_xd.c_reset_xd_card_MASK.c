
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ delay_write_flag; } ;
struct xd_info {int cis_block; TYPE_1__ delay_write; scalar_t__ zone_cnt; scalar_t__ capacity; scalar_t__ addr_cycle; scalar_t__ page_off; scalar_t__ block_shift; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct xd_info*,int ,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;

int FUNC_4(struct rtsx_chip *VAR_3)
{
 struct xd_info *VAR_4 = &VAR_3->xd_card;
 int VAR_5;

 FUNC_1(VAR_4, 0, sizeof(struct xd_info));

 VAR_4->block_shift = 0;
 VAR_4->page_off = 0;
 VAR_4->addr_cycle = 0;
 VAR_4->capacity = 0;
 VAR_4->zone_cnt = 0;
 VAR_4->cis_block = 0xFFFF;
 VAR_4->delay_write.delay_write_flag = 0;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_5 != VAR_1)
  return VAR_0;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 != VAR_1)
  return VAR_0;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 != VAR_1)
  return VAR_0;

 return VAR_1;
}
