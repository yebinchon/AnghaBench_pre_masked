
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_cmd_hdr {int dummy; } ;
struct wmi {int dummy; } ;
struct sk_buff {int len; int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wmi*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct wmi *VAR_1, struct sk_buff *VAR_2)
{
 if (FUNC_0(VAR_2 == ((void*)0)))
  return -VAR_0;

 if (VAR_2->len < sizeof(struct wmi_cmd_hdr)) {
  FUNC_1("bad packet 1\n");
  FUNC_3(VAR_2);
  return -VAR_0;
 }

 FUNC_4(VAR_2->data, VAR_2->len);

 return FUNC_2(VAR_1, VAR_2);
}
