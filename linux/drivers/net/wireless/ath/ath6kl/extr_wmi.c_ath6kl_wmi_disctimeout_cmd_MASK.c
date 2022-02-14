
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_disc_timeout_cmd {int discon_timeout; } ;
struct wmi {int parent_dev; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;

int FUNC_3(struct wmi *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct sk_buff *VAR_6;
 struct wmi_disc_timeout_cmd *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (struct wmi_disc_timeout_cmd *) VAR_6->data;
 VAR_7->discon_timeout = VAR_5;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6, VAR_2,
      VAR_1);

 if (VAR_8 == 0)
  FUNC_0(VAR_3->parent_dev, VAR_5);

 return VAR_8;
}
