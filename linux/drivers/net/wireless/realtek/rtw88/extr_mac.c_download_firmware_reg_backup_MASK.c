
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_dev {int dummy; } ;
struct rtw_backup_info {int len; int val; void* reg; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtw_dev*,void*) ;
 int FUNC_2 (struct rtw_dev*,void*) ;
 void* FUNC_3 (struct rtw_dev*,void*) ;
 int FUNC_4 (struct rtw_dev*,void*,int) ;
 int FUNC_5 (struct rtw_dev*,void*,int) ;
 int FUNC_6 (struct rtw_dev*,void*,size_t) ;

__attribute__((used)) static void FUNC_7(struct rtw_dev *VAR_14,
      struct rtw_backup_info *VAR_15)
{
 u8 VAR_16;
 u8 VAR_17 = 0;


 VAR_15[VAR_17].len = 1;
 VAR_15[VAR_17].reg = VAR_12 + 1;
 VAR_15[VAR_17].val = FUNC_3(VAR_14, VAR_12 + 1);
 VAR_17++;
 VAR_16 = VAR_13 << 6;
 FUNC_6(VAR_14, VAR_12 + 1, VAR_16);


 VAR_15[VAR_17].len = 1;
 VAR_15[VAR_17].reg = VAR_8;
 VAR_15[VAR_17].val = FUNC_3(VAR_14, VAR_8);
 VAR_17++;
 VAR_15[VAR_17].len = 4;
 VAR_15[VAR_17].reg = VAR_10;
 VAR_15[VAR_17].val = VAR_2;
 VAR_17++;
 VAR_16 = VAR_3 | VAR_5;
 FUNC_6(VAR_14, VAR_8, VAR_16);
 FUNC_5(VAR_14, VAR_10, VAR_2);


 VAR_15[VAR_17].len = 2;
 VAR_15[VAR_17].reg = VAR_9;
 VAR_15[VAR_17].val = FUNC_1(VAR_14, VAR_9);
 VAR_17++;
 VAR_15[VAR_17].len = 4;
 VAR_15[VAR_17].reg = VAR_11;
 VAR_15[VAR_17].val = FUNC_2(VAR_14, VAR_11) | VAR_4;
 VAR_17++;
 FUNC_4(VAR_14, VAR_9, 0x200);
 FUNC_5(VAR_14, VAR_11, VAR_15[VAR_17 - 1].val);


 VAR_16 = FUNC_3(VAR_14, VAR_7);
 VAR_15[VAR_17].len = 1;
 VAR_15[VAR_17].reg = VAR_7;
 VAR_15[VAR_17].val = VAR_16;
 VAR_17++;
 VAR_16 = (u8)((VAR_16 & (~VAR_1)) | VAR_0);
 FUNC_6(VAR_14, VAR_7, VAR_16);

 FUNC_0(VAR_17 != VAR_6, "wrong backup number\n");
}
