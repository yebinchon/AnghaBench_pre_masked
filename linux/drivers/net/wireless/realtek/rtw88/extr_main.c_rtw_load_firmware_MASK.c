
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_fw_state {int completion; } ;
struct rtw_dev {int dev; struct rtw_fw_state fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,char const*,int ,int ,struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct rtw_dev *VAR_3, const char *VAR_4)
{
 struct rtw_fw_state *VAR_5 = &VAR_3->fw;
 int VAR_6;

 FUNC_0(&VAR_5->completion);

 VAR_6 = FUNC_1(VAR_1, 1, VAR_4, VAR_3->dev,
          VAR_0, VAR_3, VAR_2);
 if (VAR_6) {
  FUNC_2(VAR_3, "async firmware request failed\n");
  return VAR_6;
 }

 return 0;
}
