
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmix_cmd_hdr {int cmd_id; } ;
struct wmi {int parent_dev; } ;
struct sk_buff {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct wmi*,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct wmi *VAR_2, struct sk_buff *VAR_3)
{
 struct wmix_cmd_hdr *VAR_4;
 u32 VAR_5;
 u16 VAR_6;
 u8 *VAR_7;
 int VAR_8 = 0;

 if (VAR_3->len < sizeof(struct wmix_cmd_hdr)) {
  FUNC_2("bad packet 1\n");
  return -VAR_1;
 }

 VAR_4 = (struct wmix_cmd_hdr *) VAR_3->data;
 VAR_6 = FUNC_5(VAR_4->cmd_id);

 FUNC_6(VAR_3, sizeof(struct wmix_cmd_hdr));

 VAR_7 = VAR_3->data;
 VAR_5 = VAR_3->len;

 switch (VAR_6) {
 case 128:
  FUNC_0(VAR_0, "wmi event hb challenge resp\n");
  FUNC_4(VAR_2, VAR_7, VAR_5);
  break;
 case 129:
  FUNC_0(VAR_0, "wmi event dbglog len %d\n", VAR_5);
  FUNC_1(VAR_2->parent_dev, VAR_7, VAR_5);
  break;
 default:
  FUNC_3("unknown cmd id 0x%x\n", VAR_6);
  VAR_8 = -VAR_1;
  break;
 }

 return VAR_8;
}
