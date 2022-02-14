
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct hns3_enet_ring {TYPE_1__* tqp; } ;
struct TYPE_4__ {int rss_type; } ;
struct hnae3_handle {TYPE_2__ kinfo; } ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
struct TYPE_3__ {struct hnae3_handle* handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct hns3_enet_ring *VAR_1,
         struct sk_buff *VAR_2, u32 VAR_3)
{
 struct hnae3_handle *VAR_4 = VAR_1->tqp->handle;
 enum pkt_hash_types VAR_5;

 if (VAR_3)
  VAR_5 = VAR_4->kinfo.rss_type;
 else
  VAR_5 = VAR_0;

 FUNC_0(VAR_2, VAR_3, VAR_5);
}
