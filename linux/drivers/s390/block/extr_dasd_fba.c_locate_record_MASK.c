
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
struct TYPE_2__ {int cmd; } ;
struct LO_fba_data {int blk_nr; int blk_ct; TYPE_1__ operation; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct LO_fba_data*) ;
 int FUNC_1 (struct LO_fba_data*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ccw1 * VAR_3, struct LO_fba_data *VAR_4, int VAR_5,
       int VAR_6, int VAR_7)
{
 VAR_3->cmd_code = VAR_0;
 VAR_3->flags = 0;
 VAR_3->count = 8;
 VAR_3->cda = (__u32) FUNC_0(VAR_4);
 FUNC_1(VAR_4, 0, sizeof (struct LO_fba_data));
 if (VAR_5 == VAR_2)
  VAR_4->operation.cmd = 0x5;
 else if (VAR_5 == VAR_1)
  VAR_4->operation.cmd = 0x6;
 else
  VAR_4->operation.cmd = 0x8;
 VAR_4->blk_nr = VAR_6;
 VAR_4->blk_ct = VAR_7;
}
