
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macvlan_source_entry {int hlist; struct macvlan_dev* vlan; int addr; } ;
struct macvlan_port {struct hlist_head* vlan_source_hash; } ;
struct macvlan_dev {int macaddr_count; struct macvlan_port* port; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 struct macvlan_source_entry* FUNC_2 (int,int ) ;
 size_t FUNC_3 (unsigned char const*) ;
 struct macvlan_source_entry* FUNC_4 (struct macvlan_dev*,unsigned char const*) ;

__attribute__((used)) static int FUNC_5(struct macvlan_dev *VAR_2,
       const unsigned char *VAR_3)
{
 struct macvlan_port *VAR_4 = VAR_2->port;
 struct macvlan_source_entry *VAR_5;
 struct hlist_head *VAR_6;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5)
  return 0;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_5->addr, VAR_3);
 VAR_5->vlan = VAR_2;
 VAR_6 = &VAR_4->vlan_source_hash[FUNC_3(VAR_3)];
 FUNC_1(&VAR_5->hlist, VAR_6);
 VAR_2->macaddr_count++;

 return 0;
}
