
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
struct cache_detail {int name; } ;


 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct super_block*,char*) ;
 int FUNC_2 (struct dentry*,int ,int,struct cache_detail*) ;

int FUNC_3(struct super_block *VAR_0, struct cache_detail *VAR_1)
{
 int VAR_2;
 struct dentry *VAR_3;

 VAR_3 = FUNC_1(VAR_0, "cache");
 VAR_2 = FUNC_2(VAR_3, VAR_1->name, 0600, VAR_1);
 FUNC_0(VAR_3);
 return VAR_2;
}
