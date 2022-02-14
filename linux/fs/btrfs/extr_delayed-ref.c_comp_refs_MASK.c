
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_ref_node {scalar_t__ type; scalar_t__ seq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct btrfs_delayed_ref_node*) ;
 int FUNC_1 (struct btrfs_delayed_ref_node*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct btrfs_delayed_ref_node *VAR_2,
       struct btrfs_delayed_ref_node *VAR_3,
       bool VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2->type < VAR_3->type)
  return -1;
 if (VAR_2->type > VAR_3->type)
  return 1;
 if (VAR_2->type == VAR_1 ||
     VAR_2->type == VAR_0)
  VAR_5 = FUNC_3(FUNC_1(VAR_2),
         FUNC_1(VAR_3));
 else
  VAR_5 = FUNC_2(FUNC_0(VAR_2),
         FUNC_0(VAR_3));
 if (VAR_5)
  return VAR_5;
 if (VAR_4) {
  if (VAR_2->seq < VAR_3->seq)
   return -1;
  if (VAR_2->seq > VAR_3->seq)
   return 1;
 }
 return 0;
}
