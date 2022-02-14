
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct erase_info {int addr; int fail_addr; int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, struct erase_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2->addr,
   VAR_2->len, ((void*)0), ((void*)0));
 if (VAR_3)
  VAR_2->fail_addr = VAR_2->addr;

 return VAR_3;
}
