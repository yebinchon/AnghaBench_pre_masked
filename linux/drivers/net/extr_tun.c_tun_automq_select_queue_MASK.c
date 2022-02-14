
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct tun_struct {int * flows; int numqueues; } ;
struct tun_flow_entry {int queue_index; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tun_flow_entry* FUNC_2 (int *,int) ;
 int FUNC_3 (struct tun_flow_entry*,int) ;
 size_t FUNC_4 (int) ;

__attribute__((used)) static u16 FUNC_5(struct tun_struct *VAR_0, struct sk_buff *VAR_1)
{
 struct tun_flow_entry *VAR_2;
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_0->numqueues);

 VAR_3 = FUNC_1(VAR_1);
 VAR_2 = FUNC_2(&VAR_0->flows[FUNC_4(VAR_3)], VAR_3);
 if (VAR_2) {
  FUNC_3(VAR_2, VAR_3);
  VAR_3 = VAR_2->queue_index;
 } else {

  VAR_3 = ((u64)VAR_3 * VAR_4) >> 32;
 }

 return VAR_3;
}
