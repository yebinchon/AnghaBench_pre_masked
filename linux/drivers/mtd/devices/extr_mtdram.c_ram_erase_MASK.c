
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ priv; } ;
struct erase_info {int addr; int len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mtd_info*,int,int ) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, struct erase_info *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2->addr, VAR_2->len))
  return -VAR_0;
 FUNC_1((char *)VAR_1->priv + VAR_2->addr, 0xff, VAR_2->len);

 return 0;
}
