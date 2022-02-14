
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {unsigned int mp_aheight; int * mp_bh; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct metapath *VAR_0, struct metapath *VAR_1)
{
 unsigned int VAR_2;

 *VAR_0 = *VAR_1;
 for (VAR_2 = 0; VAR_2 < VAR_1->mp_aheight; VAR_2++)
  FUNC_0(VAR_0->mp_bh[VAR_2]);
}
