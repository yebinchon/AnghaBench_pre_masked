
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tun_struct {int flow_count; } ;
struct tun_flow_entry {int hash_link; struct tun_struct* tun; int queue_index; scalar_t__ rps_rxhash; int rxhash; int updated; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct hlist_head*) ;
 int VAR_2 ;
 struct tun_flow_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct tun_struct*,char*,int ,int ) ;

__attribute__((used)) static struct tun_flow_entry *FUNC_3(struct tun_struct *VAR_3,
           struct hlist_head *VAR_4,
           u32 VAR_5, u16 VAR_6)
{
 struct tun_flow_entry *VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);

 if (VAR_7) {
  FUNC_2(VAR_1, VAR_3, "create flow: hash %u index %u\n",
     VAR_5, VAR_6);
  VAR_7->updated = VAR_2;
  VAR_7->rxhash = VAR_5;
  VAR_7->rps_rxhash = 0;
  VAR_7->queue_index = VAR_6;
  VAR_7->tun = VAR_3;
  FUNC_0(&VAR_7->hash_link, VAR_4);
  ++VAR_3->flow_count;
 }
 return VAR_7;
}
