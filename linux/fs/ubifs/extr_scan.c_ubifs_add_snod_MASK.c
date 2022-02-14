
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_scan_node {int type; int offs; int list; int key; void* node; int len; int sqnum; } ;
struct ubifs_scan_leb {int nodes_cnt; int nodes; } ;
struct ubifs_ino_node {int key; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_ch {int node_type; int len; int sqnum; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct ubifs_info const*,int *) ;
 int FUNC_1 (struct ubifs_info const*,int *,int *) ;
 struct ubifs_scan_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(const struct ubifs_info *VAR_2, struct ubifs_scan_leb *VAR_3,
     void *VAR_4, int VAR_5)
{
 struct ubifs_ch *VAR_6 = VAR_4;
 struct ubifs_ino_node *VAR_7 = VAR_4;
 struct ubifs_scan_node *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct ubifs_scan_node), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->sqnum = FUNC_4(VAR_6->sqnum);
 VAR_8->type = VAR_6->node_type;
 VAR_8->offs = VAR_5;
 VAR_8->len = FUNC_3(VAR_6->len);
 VAR_8->node = VAR_4;

 switch (VAR_6->node_type) {
 case 129:
 case 130:
 case 128:
 case 131:




  FUNC_1(VAR_2, &VAR_7->key, &VAR_8->key);
  break;
 default:
  FUNC_0(VAR_2, &VAR_8->key);
  break;
 }
 FUNC_5(&VAR_8->list, &VAR_3->nodes);
 VAR_3->nodes_cnt += 1;
 return 0;
}
