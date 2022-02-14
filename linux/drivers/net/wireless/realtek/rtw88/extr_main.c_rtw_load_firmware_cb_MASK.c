
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_fw_state {int completion; struct firmware const* firmware; } ;
struct rtw_dev {struct rtw_fw_state fw; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rtw_dev*,char*) ;

__attribute__((used)) static void FUNC_2(const struct firmware *VAR_0, void *VAR_1)
{
 struct rtw_dev *VAR_2 = VAR_1;
 struct rtw_fw_state *VAR_3 = &VAR_2->fw;

 if (!VAR_0)
  FUNC_1(VAR_2, "failed to request firmware\n");

 VAR_3->firmware = VAR_0;
 FUNC_0(&VAR_3->completion);
}
