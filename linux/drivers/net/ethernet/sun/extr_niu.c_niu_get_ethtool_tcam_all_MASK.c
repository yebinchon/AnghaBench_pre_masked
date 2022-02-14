
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct niu_tcam_entry {int valid; } ;
struct niu_parent {struct niu_tcam_entry* tcam; } ;
struct niu {struct niu_parent* parent; } ;
struct ethtool_rxnfc {int data; int rule_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct niu*,unsigned long) ;
 int FUNC_1 (struct niu*,unsigned long) ;
 int FUNC_2 (struct niu*,int) ;
 int FUNC_3 (struct niu*) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_1,
        struct ethtool_rxnfc *VAR_2,
        u32 *VAR_3)
{
 struct niu_parent *VAR_4 = VAR_1->parent;
 struct niu_tcam_entry *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;


 VAR_2->data = FUNC_3(VAR_1);

 FUNC_0(VAR_1, VAR_9);
 for (VAR_8 = 0, VAR_6 = 0; VAR_6 < VAR_2->data; VAR_6++) {
  VAR_7 = FUNC_2(VAR_1, VAR_6);
  VAR_5 = &VAR_4->tcam[VAR_7];
  if (!VAR_5->valid)
   continue;
  if (VAR_8 == VAR_2->rule_cnt) {
   VAR_10 = -VAR_0;
   break;
  }
  VAR_3[VAR_8] = VAR_6;
  VAR_8++;
 }
 FUNC_1(VAR_1, VAR_9);

 VAR_2->rule_cnt = VAR_8;

 return VAR_10;
}
