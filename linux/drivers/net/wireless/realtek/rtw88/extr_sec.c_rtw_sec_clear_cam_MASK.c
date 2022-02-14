
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtw_sec_desc {int cam_map; struct rtw_cam_entry* cam_table; } ;
struct rtw_dev {int dummy; } ;
struct rtw_cam_entry {int valid; int addr; int * key; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;

void FUNC_3(struct rtw_dev *VAR_5,
         struct rtw_sec_desc *VAR_6,
         u8 VAR_7)
{
 struct rtw_cam_entry *VAR_8 = &VAR_6->cam_table[VAR_7];
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 FUNC_0(VAR_7, VAR_6->cam_map);
 VAR_8->valid = 0;
 VAR_8->key = ((void*)0);
 FUNC_1(VAR_8->addr);

 VAR_9 = VAR_3 | VAR_1;
 VAR_11 = VAR_7 << VAR_0;
 VAR_10 = VAR_9 | VAR_11;
 FUNC_2(VAR_5, VAR_4, 0);
 FUNC_2(VAR_5, VAR_2, VAR_10);
}
