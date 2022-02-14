
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_cmd_hdr {int dummy; } ;
struct wmi {scalar_t__ cmd_rsp_len; int cmd_wait; int * cmd_rsp_buf; } ;
struct sk_buff {int data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct wmi *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_2(VAR_1, sizeof(struct wmi_cmd_hdr));

 if (VAR_0->cmd_rsp_buf != ((void*)0) && VAR_0->cmd_rsp_len != 0)
  FUNC_1(VAR_0->cmd_rsp_buf, VAR_1->data, VAR_0->cmd_rsp_len);

 FUNC_0(&VAR_0->cmd_wait);
}
