
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_get_keepalive_cmd {int dummy; } ;
struct wmi {int parent_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct wmi *VAR_1, u8 *VAR_2, int VAR_3)
{
 if (VAR_3 < sizeof(struct wmi_get_keepalive_cmd))
  return -VAR_0;

 FUNC_0(VAR_1->parent_dev);

 return 0;
}
