
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stifb_info {int dummy; } ;


 int FUNC_0 (struct stifb_info*) ;
 int FUNC_1 (unsigned int,struct stifb_info*,int) ;

__attribute__((used)) static void
FUNC_2(struct stifb_info *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = VAR_1 ? 0x10000000 : 0x30000000;
 FUNC_0(VAR_0);
 FUNC_1(0x01000000, VAR_0, 0x1000);
 FUNC_1(0x02000000, VAR_0, 0x1004);
 FUNC_1(VAR_2, VAR_0, 0x1008);
}
