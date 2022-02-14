
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_clock_info {unsigned long lck_div; int pck_div; unsigned long lck; int pck; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int,int) ;
 unsigned long FUNC_2 () ;

int FUNC_3(enum omap_channel VAR_0,
  struct dispc_clock_info *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_2();

 VAR_1->lck_div = FUNC_1(FUNC_0(VAR_0), 23, 16);
 VAR_1->pck_div = FUNC_1(FUNC_0(VAR_0), 7, 0);

 VAR_1->lck = VAR_2 / VAR_1->lck_div;
 VAR_1->pck = VAR_1->lck / VAR_1->pck_div;

 return 0;
}
