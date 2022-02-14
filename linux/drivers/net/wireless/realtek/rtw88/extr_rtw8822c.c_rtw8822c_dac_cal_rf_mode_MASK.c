
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtw_dev*,int *,int *) ;
 int FUNC_1 (struct rtw_dev*,int *,int *,int *,int *) ;
 int FUNC_2 (struct rtw_dev*,int ,char*,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_5,
         u32 *VAR_6, u32 *VAR_7)
{
 u32 VAR_8[VAR_0], VAR_9[VAR_0];
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_3(VAR_5, VAR_2, 0x0, VAR_1);
 VAR_11 = FUNC_3(VAR_5, VAR_3, 0x0, VAR_1);

 FUNC_2(VAR_5, VAR_4, "[DACK] RF path-A=0x%05x\n", VAR_10);
 FUNC_2(VAR_5, VAR_4, "[DACK] RF path-B=0x%05x\n", VAR_11);

 FUNC_0(VAR_5, VAR_8, VAR_9);
 FUNC_1(VAR_5, VAR_8, VAR_9, VAR_6, VAR_7);
}
