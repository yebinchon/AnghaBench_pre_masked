
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_node {int dummy; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nilfs_btree_node const*,int) ;
 scalar_t__ FUNC_1 (struct nilfs_btree_node const*) ;
 int FUNC_2 (struct nilfs_btree_node const*) ;

__attribute__((used)) static int FUNC_3(const struct nilfs_btree_node *VAR_1,
       __u64 VAR_2, int *VAR_3)
{
 __u64 VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;


 VAR_6 = 0;
 VAR_7 = FUNC_2(VAR_1) - 1;
 VAR_5 = 0;
 VAR_8 = 0;
 while (VAR_6 <= VAR_7) {
  VAR_5 = (VAR_6 + VAR_7) / 2;
  VAR_4 = FUNC_0(VAR_1, VAR_5);
  if (VAR_4 == VAR_2) {
   VAR_8 = 0;
   goto out;
  } else if (VAR_4 < VAR_2) {
   VAR_6 = VAR_5 + 1;
   VAR_8 = -1;
  } else {
   VAR_7 = VAR_5 - 1;
   VAR_8 = 1;
  }
 }


 if (FUNC_1(VAR_1) > VAR_0) {
  if (VAR_8 > 0 && VAR_5 > 0)
   VAR_5--;
 } else if (VAR_8 < 0)
  VAR_5++;

 out:
 *VAR_3 = VAR_5;

 return VAR_8 == 0;
}
