
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int * priv; } ;
struct erase_info {int addr; int len; } ;


 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, struct erase_info *VAR_1)
{
 u_char *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_2 + VAR_1->addr, 0xff, VAR_1->len);

 return 0;
}
