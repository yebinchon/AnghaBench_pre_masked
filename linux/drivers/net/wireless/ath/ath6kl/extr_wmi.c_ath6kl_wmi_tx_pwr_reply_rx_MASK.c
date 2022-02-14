
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_tx_pwr_reply {int dbM; } ;
struct wmi {int parent_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wmi *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct wmi_tx_pwr_reply *VAR_4;

 if (VAR_3 < sizeof(struct wmi_tx_pwr_reply))
  return -VAR_0;

 VAR_4 = (struct wmi_tx_pwr_reply *) VAR_2;
 FUNC_0(VAR_1->parent_dev, VAR_4->dbM);

 return 0;
}
