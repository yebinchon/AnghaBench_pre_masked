
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int flow_count; } ;
struct tun_flow_entry {int hash_link; int queue_index; int rxhash; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tun_flow_entry*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct tun_struct*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct tun_struct *VAR_2, struct tun_flow_entry *VAR_3)
{
 FUNC_2(VAR_0, VAR_2, "delete flow: hash %u index %u\n",
    VAR_3->rxhash, VAR_3->queue_index);
 FUNC_0(&VAR_3->hash_link);
 FUNC_1(VAR_3, VAR_1);
 --VAR_2->flow_count;
}
