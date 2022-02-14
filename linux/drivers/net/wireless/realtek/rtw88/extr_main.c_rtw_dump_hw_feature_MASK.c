
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ nss; int ant_num; int ptcl; int bw; int hci; } ;
struct rtw_efuse {TYPE_2__ hw_cap; } ;
struct TYPE_3__ {scalar_t__ rf_path_num; } ;
struct rtw_dev {TYPE_1__ hal; struct rtw_efuse efuse; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct rtw_dev*,int ,char*,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_7 (struct rtw_dev*,char*) ;
 int FUNC_8 (struct rtw_dev*,int ) ;
 scalar_t__ FUNC_9 (struct rtw_dev*,scalar_t__) ;
 int FUNC_10 (struct rtw_dev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct rtw_dev *VAR_6)
{
 struct rtw_efuse *VAR_7 = &VAR_6->efuse;
 u8 VAR_8[VAR_3];
 u8 VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_9(VAR_6, VAR_4);
 if (VAR_9 != VAR_0) {
  FUNC_7(VAR_6, "failed to read hw feature report\n");
  return -VAR_1;
 }

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  VAR_8[VAR_11] = FUNC_9(VAR_6, VAR_4 + 2 + VAR_11);

 FUNC_10(VAR_6, VAR_4, 0);

 VAR_10 = FUNC_1(VAR_8);
 VAR_7->hw_cap.bw = FUNC_5(VAR_10);
 VAR_7->hw_cap.hci = FUNC_2(VAR_8);
 VAR_7->hw_cap.nss = FUNC_3(VAR_8);
 VAR_7->hw_cap.ptcl = FUNC_4(VAR_8);
 VAR_7->hw_cap.ant_num = FUNC_0(VAR_8);

 FUNC_8(VAR_6, VAR_7->hw_cap.ant_num);

 if (VAR_7->hw_cap.nss == VAR_2)
  VAR_7->hw_cap.nss = VAR_6->hal.rf_path_num;

 FUNC_6(VAR_6, VAR_5,
  "hw cap: hci=0x%02x, bw=0x%02x, ptcl=0x%02x, ant_num=%d, nss=%d\n",
  VAR_7->hw_cap.hci, VAR_7->hw_cap.bw, VAR_7->hw_cap.ptcl,
  VAR_7->hw_cap.ant_num, VAR_7->hw_cap.nss);

 return 0;
}
