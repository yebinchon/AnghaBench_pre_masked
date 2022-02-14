
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_pmkid_list_reply {int num_pmkid; } ;
struct wmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct wmi *VAR_2, u8 *VAR_3,
           u32 VAR_4)
{
 struct wmi_pmkid_list_reply *VAR_5;
 u32 VAR_6;

 if (VAR_4 < sizeof(struct wmi_pmkid_list_reply))
  return -VAR_0;

 VAR_5 = (struct wmi_pmkid_list_reply *)VAR_3;
 VAR_6 = sizeof(VAR_5->num_pmkid) +
  FUNC_0(VAR_5->num_pmkid) * VAR_1;

 if (VAR_4 < VAR_6)
  return -VAR_0;

 return 0;
}
