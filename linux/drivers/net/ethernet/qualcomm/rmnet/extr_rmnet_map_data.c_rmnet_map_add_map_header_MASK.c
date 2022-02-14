
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmnet_map_header {int pad_len; void* pkt_len; } ;
typedef struct rmnet_map_header u8 ;
typedef int u32 ;
struct sk_buff {int len; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct rmnet_map_header*,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;

struct rmnet_map_header *FUNC_6(struct sk_buff *VAR_1,
        int VAR_2, int VAR_3)
{
 struct rmnet_map_header *VAR_4;
 u32 VAR_5, VAR_6;
 u8 *VAR_7;

 VAR_6 = VAR_1->len - VAR_2;
 VAR_4 = (struct rmnet_map_header *)
   FUNC_3(VAR_1, sizeof(struct rmnet_map_header));
 FUNC_2(VAR_4, 0, sizeof(struct rmnet_map_header));

 if (VAR_3 == VAR_0) {
  VAR_4->pkt_len = FUNC_1(VAR_6);
  return VAR_4;
 }

 VAR_5 = FUNC_0(VAR_6, 4) - VAR_6;

 if (VAR_5 == 0)
  goto done;

 if (FUNC_5(VAR_1) < VAR_5)
  return ((void*)0);

 VAR_7 = (u8 *)FUNC_4(VAR_1, VAR_5);
 FUNC_2(VAR_7, 0, VAR_5);

done:
 VAR_4->pkt_len = FUNC_1(VAR_6 + VAR_5);
 VAR_4->pad_len = VAR_5 & 0x3F;

 return VAR_4;
}
