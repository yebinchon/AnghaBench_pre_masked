
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_wait {int dummy; } ;
struct rocker_desc_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rocker_desc_info*,struct rocker_wait*) ;
 struct rocker_wait* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct rocker_desc_info *VAR_1)
{
 struct rocker_wait *VAR_2;

 VAR_2 = FUNC_1();
 if (!VAR_2)
  return -VAR_0;
 FUNC_0(VAR_1, VAR_2);
 return 0;
}
