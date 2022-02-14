
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rtw_dm_info {void**** dack_dck; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_10)
{
 struct rtw_dm_info *VAR_11 = &VAR_10->dm_info;
 u8 VAR_12;

 VAR_12 = (u8)FUNC_0(VAR_10, VAR_0, 0xf0000000);
 VAR_11->dack_dck[VAR_8][0][0] = VAR_12;
 VAR_12 = (u8)FUNC_0(VAR_10, VAR_1, 0xf);
 VAR_11->dack_dck[VAR_8][0][1] = VAR_12;
 VAR_12 = (u8)FUNC_0(VAR_10, VAR_2, 0xf0000000);
 VAR_11->dack_dck[VAR_8][1][0] = VAR_12;
 VAR_12 = (u8)FUNC_0(VAR_10, VAR_3, 0xf);
 VAR_11->dack_dck[VAR_8][1][1] = VAR_12;

 VAR_12 = (u8)FUNC_0(VAR_10, VAR_4, 0xf0000000);
 VAR_11->dack_dck[VAR_9][0][0] = VAR_12;
 VAR_12 = (u8)FUNC_0(VAR_10, VAR_5, 0xf);
 VAR_11->dack_dck[VAR_9][1][0] = VAR_12;
 VAR_12 = (u8)FUNC_0(VAR_10, VAR_6, 0xf0000000);
 VAR_11->dack_dck[VAR_9][0][1] = VAR_12;
 VAR_12 = (u8)FUNC_0(VAR_10, VAR_7, 0xf);
 VAR_11->dack_dck[VAR_9][1][1] = VAR_12;
}
