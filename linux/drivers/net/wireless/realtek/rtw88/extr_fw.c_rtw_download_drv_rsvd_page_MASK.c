
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int rsvd_drv_pg_num; int rsvd_drv_addr; } ;
struct rtw_dev {TYPE_2__ fifo; TYPE_1__* chip; } ;
struct TYPE_3__ {int page_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct rtw_dev *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = 0;
 u16 VAR_6 = 0;

 VAR_4 = VAR_1->chip->page_size;
 VAR_5 = VAR_3 / VAR_4 + ((VAR_3 & (VAR_4 - 1)) ? 1 : 0);
 if (VAR_5 > VAR_1->fifo.rsvd_drv_pg_num)
  return -VAR_0;

 VAR_6 = VAR_1->fifo.rsvd_drv_addr;

 return FUNC_0(VAR_1, VAR_6, VAR_2, VAR_3);
}
