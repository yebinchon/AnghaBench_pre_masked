
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int child_cnt; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ubifs_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct ubifs_info *VAR_0, struct ubifs_znode *VAR_1, void *VAR_2)
{
 long long *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1->child_cnt);
 VAR_4 = FUNC_0(VAR_4, 8);
 *VAR_3 += VAR_4;
 return 0;
}
