
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct net {int dummy; } ;
struct cache_detail {int dummy; } ;


 int FUNC_0 (struct super_block*,struct cache_detail*) ;
 struct super_block* FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct cache_detail*) ;
 int FUNC_4 (struct cache_detail*) ;

int FUNC_5(struct net *VAR_0, struct cache_detail *VAR_1)
{
 struct super_block *VAR_2;
 int VAR_3 = 0;

 FUNC_4(VAR_1);
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  FUNC_2(VAR_0);
  if (VAR_3)
   FUNC_3(VAR_1);
 }
 return VAR_3;
}
