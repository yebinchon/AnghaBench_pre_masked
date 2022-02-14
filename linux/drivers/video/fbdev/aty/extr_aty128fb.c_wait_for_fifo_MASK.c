
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct aty128fb_par {scalar_t__ fifo_slots; } ;


 int FUNC_0 (int,struct aty128fb_par*) ;

__attribute__((used)) static void FUNC_1(u16 VAR_0, struct aty128fb_par *VAR_1)
{
 if (VAR_1->fifo_slots < VAR_0)
  FUNC_0(64, VAR_1);
 VAR_1->fifo_slots -= VAR_0;
}
