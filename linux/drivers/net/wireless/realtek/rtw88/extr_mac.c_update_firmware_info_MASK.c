
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct rtw_fw_state {void* sub_index; void* sub_version; void* version; void* h2c_version; TYPE_1__* firmware; } ;
struct rtw_dev {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {void** data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct rtw_dev*,int ,char*,void*) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_5,
     struct rtw_fw_state *VAR_6)
{
 const u8 *VAR_7 = VAR_6->firmware->data;

 VAR_6->h2c_version =
  FUNC_0(*((__le16 *)(VAR_7 + VAR_0)));
 VAR_6->version =
  FUNC_0(*((__le16 *)(VAR_7 + VAR_3)));
 VAR_6->sub_version = *(VAR_7 + VAR_2);
 VAR_6->sub_index = *(VAR_7 + VAR_1);

 FUNC_1(VAR_5, VAR_4, "fw h2c version: %x\n", VAR_6->h2c_version);
 FUNC_1(VAR_5, VAR_4, "fw version:     %x\n", VAR_6->version);
 FUNC_1(VAR_5, VAR_4, "fw sub version: %x\n", VAR_6->sub_version);
 FUNC_1(VAR_5, VAR_4, "fw sub index:   %x\n", VAR_6->sub_index);
}
