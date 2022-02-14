
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid_bitmap; } ;
struct bnx2x {TYPE_1__ old_bulletin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,int ,int ) ;

void FUNC_2(struct bnx2x *VAR_3)
{
 FUNC_0(VAR_3);


 if (VAR_3->old_bulletin.valid_bitmap & 1 << VAR_2)
  FUNC_1(VAR_3, VAR_1,
           VAR_0);
}
