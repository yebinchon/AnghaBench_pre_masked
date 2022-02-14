
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi {struct ath6kl* parent_dev; } ;
struct ath6kl {int wmi; int fw_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int const*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int const*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3(struct wmi *VAR_1, u8 VAR_2, u32 VAR_3, u32 VAR_4,
    u32 VAR_5, const u8 *VAR_6, u16 VAR_7,
    u32 VAR_8)
{
 int VAR_9;
 struct ath6kl *VAR_10 = VAR_1->parent_dev;

 if (FUNC_2(VAR_0,
       VAR_10->fw_capabilities)) {






  VAR_9 = FUNC_0(VAR_10->wmi, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7,
          VAR_8);
 } else {
  VAR_9 = FUNC_1(VAR_10->wmi, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7);
 }

 return VAR_9;
}
