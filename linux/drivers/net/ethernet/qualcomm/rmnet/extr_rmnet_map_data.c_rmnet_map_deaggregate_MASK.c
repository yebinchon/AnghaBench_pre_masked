
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct rmnet_port {int data_format; } ;
struct rmnet_map_header {int pkt_len; } ;
struct rmnet_map_dl_csum_trailer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int ) ;

struct sk_buff *FUNC_6(struct sk_buff *VAR_4,
          struct rmnet_port *VAR_5)
{
 struct rmnet_map_header *VAR_6;
 struct sk_buff *VAR_7;
 u32 VAR_8;

 if (VAR_4->len == 0)
  return ((void*)0);

 VAR_6 = (struct rmnet_map_header *)VAR_4->data;
 VAR_8 = FUNC_2(VAR_6->pkt_len) + sizeof(struct rmnet_map_header);

 if (VAR_5->data_format & VAR_1)
  VAR_8 += sizeof(struct rmnet_map_dl_csum_trailer);

 if (((int)VAR_4->len - (int)VAR_8) < 0)
  return ((void*)0);


 if (FUNC_2(VAR_6->pkt_len) == 0)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_8 + VAR_3, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 FUNC_5(VAR_7, VAR_2);
 FUNC_4(VAR_7, VAR_8);
 FUNC_1(VAR_7->data, VAR_4->data, VAR_8);
 FUNC_3(VAR_4, VAR_8);

 return VAR_7;
}
