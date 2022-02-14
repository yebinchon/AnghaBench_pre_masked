
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {unsigned char* data; size_t len; } ;
struct TYPE_2__ {int total_packets; } ;
struct hns3_enet_tqp_vector {TYPE_1__ rx_group; } ;
struct hns3_enet_ring {struct hns3_enet_tqp_vector* tqp_vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,char*,int ,int,int,unsigned char*,size_t,int) ;

__attribute__((used)) static void FUNC_2(struct hns3_enet_ring *VAR_2,
       struct sk_buff *VAR_3)
{
 struct hns3_enet_tqp_vector *VAR_4 = VAR_2->tqp_vector;
 unsigned char *VAR_5 = VAR_3->data;
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->len; VAR_6++)
  if (VAR_5[VAR_6] != (unsigned char)(VAR_6 & 0xff))
   break;


 if (VAR_6 == VAR_3->len)
  VAR_4->rx_group.total_packets++;
 else
  FUNC_1(VAR_1, "selftest:", VAR_0, 16, 1,
          VAR_3->data, VAR_3->len, 1);

 FUNC_0(VAR_3);
}
