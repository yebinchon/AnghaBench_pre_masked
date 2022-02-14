
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_ssd_info {int path_mask; int * chpid; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct chsc_ssd_info *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  VAR_2 = 0x80 >> VAR_1;
  if (VAR_0->path_mask & VAR_2)
   FUNC_0(VAR_0->chpid[VAR_1]);
 }
}
