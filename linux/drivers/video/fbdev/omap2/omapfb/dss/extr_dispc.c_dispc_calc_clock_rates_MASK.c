
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_clock_info {int lck_div; int pck_div; unsigned long lck; int pck; } ;


 int VAR_0 ;

int FUNC_0(unsigned long VAR_1,
  struct dispc_clock_info *VAR_2)
{
 if (VAR_2->lck_div > 255 || VAR_2->lck_div == 0)
  return -VAR_0;
 if (VAR_2->pck_div < 1 || VAR_2->pck_div > 255)
  return -VAR_0;

 VAR_2->lck = VAR_1 / VAR_2->lck_div;
 VAR_2->pck = VAR_2->lck / VAR_2->pck_div;

 return 0;
}
