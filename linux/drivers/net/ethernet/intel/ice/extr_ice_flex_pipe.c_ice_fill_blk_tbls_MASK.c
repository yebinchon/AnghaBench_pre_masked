
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ice_hw {TYPE_6__* blk; } ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_11__ {int sid; } ;
struct TYPE_10__ {int sid; } ;
struct TYPE_9__ {int sid; } ;
struct TYPE_8__ {int sid; } ;
struct TYPE_7__ {int sid; } ;
struct TYPE_12__ {TYPE_5__ es; TYPE_4__ prof_redir; TYPE_3__ prof; TYPE_2__ xlt2; TYPE_1__ xlt1; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ice_hw*,int,int ) ;
 int FUNC_1 (struct ice_hw*) ;

void FUNC_2(struct ice_hw *VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  enum ice_block VAR_3 = (enum ice_block)VAR_2;

  FUNC_0(VAR_1, VAR_3, VAR_1->blk[VAR_3].xlt1.sid);
  FUNC_0(VAR_1, VAR_3, VAR_1->blk[VAR_3].xlt2.sid);
  FUNC_0(VAR_1, VAR_3, VAR_1->blk[VAR_3].prof.sid);
  FUNC_0(VAR_1, VAR_3, VAR_1->blk[VAR_3].prof_redir.sid);
  FUNC_0(VAR_1, VAR_3, VAR_1->blk[VAR_3].es.sid);
 }

 FUNC_1(VAR_1);
}
