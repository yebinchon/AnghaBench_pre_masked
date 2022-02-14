
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;
struct rtw_backup_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtw_dev*,struct rtw_backup_info*,struct rtw_backup_info*) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,int ,int*,int*) ;
 int FUNC_4 (struct rtw_dev*) ;
 scalar_t__ FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*,int ) ;
 int FUNC_7 (struct rtw_dev*,int ,int*,int*) ;
 int FUNC_8 (struct rtw_dev*,int ,int,int,int*,int*,int*,int*) ;
 int FUNC_9 (struct rtw_dev*,int ) ;
 int FUNC_10 (struct rtw_dev*,struct rtw_backup_info*,struct rtw_backup_info*) ;
 int FUNC_11 (struct rtw_dev*,int ,char*,int,int) ;
 int FUNC_12 (struct rtw_dev*,int,int) ;
 int FUNC_13 (struct rtw_dev*,int,int ,int) ;
 int FUNC_14 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_15(struct rtw_dev *VAR_6)
{
 struct rtw_backup_info VAR_7[VAR_2 * VAR_0];
 struct rtw_backup_info VAR_8[VAR_1];
 u32 VAR_9 = 0, VAR_10 = 0, VAR_11;
 u32 VAR_12 = 0x0, VAR_13 = 0x0, VAR_14 = 0x0, VAR_15 = 0x0;
 u32 VAR_16 = 0x0, VAR_17 = 0x0, VAR_18 = 0x0, VAR_19 = 0x0;
 u32 VAR_20 = 0x0, VAR_21 = 0x0, VAR_22 = 0x0, VAR_23 = 0x0;

 if (FUNC_5(VAR_6))
  return;



 FUNC_1(VAR_6, VAR_8, VAR_7);

 FUNC_2(VAR_6);


 FUNC_3(VAR_6, VAR_3, &VAR_20, &VAR_21);
 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  FUNC_6(VAR_6, VAR_3);
  FUNC_7(VAR_6, VAR_3, &VAR_9, &VAR_10);
  VAR_16 = VAR_9;
  VAR_17 = VAR_10;

  FUNC_8(VAR_6, VAR_3, VAR_20, VAR_21,
           &VAR_9, &VAR_10, &VAR_12, &VAR_13);

  if (VAR_9 < 5 && VAR_10 < 5)
   break;
 }
 FUNC_9(VAR_6, VAR_3);


 FUNC_3(VAR_6, VAR_4, &VAR_22, &VAR_23);
 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  FUNC_6(VAR_6, VAR_4);
  FUNC_7(VAR_6, VAR_4, &VAR_9, &VAR_10);
  VAR_18 = VAR_9;
  VAR_19 = VAR_10;

  FUNC_8(VAR_6, VAR_4, VAR_22, VAR_23,
           &VAR_9, &VAR_10, &VAR_14, &VAR_15);

  if (VAR_9 < 5 && VAR_10 < 5)
   break;
 }
 FUNC_9(VAR_6, VAR_4);

 FUNC_12(VAR_6, 0x1b00, 0x00000008);
 FUNC_13(VAR_6, 0x4130, FUNC_0(30), 0x1);
 FUNC_14(VAR_6, 0x1bcc, 0x0);
 FUNC_12(VAR_6, 0x1b00, 0x0000000a);
 FUNC_14(VAR_6, 0x1bcc, 0x0);

 FUNC_10(VAR_6, VAR_8, VAR_7);


 FUNC_4(VAR_6);

 FUNC_11(VAR_6, VAR_5, "[DACK] path A: ic=0x%x, qc=0x%x\n", VAR_16, VAR_17);
 FUNC_11(VAR_6, VAR_5, "[DACK] path B: ic=0x%x, qc=0x%x\n", VAR_18, VAR_19);
 FUNC_11(VAR_6, VAR_5, "[DACK] path A: i=0x%x, q=0x%x\n", VAR_12, VAR_13);
 FUNC_11(VAR_6, VAR_5, "[DACK] path B: i=0x%x, q=0x%x\n", VAR_14, VAR_15);
}
