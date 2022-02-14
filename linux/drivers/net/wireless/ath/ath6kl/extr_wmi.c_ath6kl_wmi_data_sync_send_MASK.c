
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_data_hdr {int info; int info3; } ;
struct wmi {int ep_id; int parent_dev; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct sk_buff*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct wmi *VAR_4, struct sk_buff *VAR_5,
         enum htc_endpoint_id VAR_6, u8 VAR_7)
{
 struct wmi_data_hdr *VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_5 == ((void*)0) || VAR_6 == VAR_4->ep_id)) {
  FUNC_3(VAR_5);
  return -VAR_0;
 }

 FUNC_4(VAR_5, sizeof(struct wmi_data_hdr));

 VAR_8 = (struct wmi_data_hdr *) VAR_5->data;
 VAR_8->info = VAR_1 << VAR_3;
 VAR_8->info3 = FUNC_2(VAR_7 & VAR_2);

 VAR_9 = FUNC_1(VAR_4->parent_dev, VAR_5, VAR_6);

 return VAR_9;
}
