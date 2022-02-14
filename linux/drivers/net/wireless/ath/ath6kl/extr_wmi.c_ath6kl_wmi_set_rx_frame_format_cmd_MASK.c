
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_rx_frame_format_cmd {int dot11_hdr; int defrag_on_host; int meta_ver; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;

int FUNC_2(struct wmi *VAR_3, u8 VAR_4,
           u8 VAR_5,
           bool VAR_6, bool VAR_7)
{
 struct sk_buff *VAR_8;
 struct wmi_rx_frame_format_cmd *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = (struct wmi_rx_frame_format_cmd *) VAR_8->data;
 VAR_9->dot11_hdr = VAR_6 ? 1 : 0;
 VAR_9->defrag_on_host = VAR_7 ? 1 : 0;
 VAR_9->meta_ver = VAR_5;


 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_8, VAR_2,
      VAR_1);

 return VAR_10;
}
