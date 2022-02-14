
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int protocol; } ;
struct rmnet_port {int data_format; } ;
struct rmnet_map_ul_csum_header {int dummy; } ;
struct rmnet_map_header {int mux_id; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ,int ) ;
 struct rmnet_map_header* FUNC_2 (struct sk_buff*,int,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4,
        struct rmnet_port *VAR_5, u8 VAR_6,
        struct net_device *VAR_7)
{
 int VAR_8, VAR_9;
 struct rmnet_map_header *VAR_10;

 VAR_9 = 0;
 VAR_8 = sizeof(struct rmnet_map_header);

 if (VAR_5->data_format & VAR_3) {
  VAR_9 = sizeof(struct rmnet_map_ul_csum_header);
  VAR_8 += VAR_9;
 }

 if (FUNC_4(VAR_4) < VAR_8) {
  if (FUNC_1(VAR_4, VAR_8, 0, VAR_2))
   return -VAR_0;
 }

 if (VAR_5->data_format & VAR_3)
  FUNC_3(VAR_4, VAR_7);

 VAR_10 = FUNC_2(VAR_4, VAR_9, 0);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->mux_id = VAR_6;

 VAR_4->protocol = FUNC_0(VAR_1);

 return 0;
}
