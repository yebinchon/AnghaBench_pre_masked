
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct recv_comp_data {scalar_t__ status; int tid; } ;
struct netvsc_device {scalar_t__ recv_completion_cnt; struct netvsc_channel* chan_table; } ;
struct multi_recv_comp {int next; struct recv_comp_data* slots; } ;
struct netvsc_channel {struct multi_recv_comp mrc; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,char*,size_t,int ) ;
 int FUNC_1 (struct netvsc_device*,struct multi_recv_comp*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct net_device*,struct netvsc_device*,struct netvsc_channel*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
     struct netvsc_device *VAR_2, u16 VAR_3,
     u64 VAR_4, u32 VAR_5)
{
 struct netvsc_channel *VAR_6 = &VAR_2->chan_table[VAR_3];
 struct multi_recv_comp *VAR_7 = &VAR_6->mrc;
 struct recv_comp_data *VAR_8;
 u32 VAR_9, VAR_10;

 FUNC_1(VAR_2, VAR_7, &VAR_9, &VAR_10);

 if (FUNC_3(VAR_9 > VAR_0)) {
  FUNC_2(VAR_1, VAR_2, VAR_6);
  FUNC_1(VAR_2, VAR_7, &VAR_9, &VAR_10);
 }

 if (FUNC_3(!VAR_10)) {
  FUNC_0(VAR_1, "Recv_comp full buf q:%hd, tid:%llx\n",
      VAR_3, VAR_4);
  return;
 }

 VAR_8 = VAR_7->slots + VAR_7->next;
 VAR_8->tid = VAR_4;
 VAR_8->status = VAR_5;

 if (++VAR_7->next == VAR_2->recv_completion_cnt)
  VAR_7->next = 0;
}
