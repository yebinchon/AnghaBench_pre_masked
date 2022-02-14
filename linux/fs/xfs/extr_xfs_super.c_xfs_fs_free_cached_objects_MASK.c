
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct shrink_control {int nr_to_scan; } ;


 int FUNC_0 (struct super_block*) ;
 long FUNC_1 (int ,int ) ;

__attribute__((used)) static long
FUNC_2(
 struct super_block *VAR_0,
 struct shrink_control *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0), VAR_1->nr_to_scan);
}
