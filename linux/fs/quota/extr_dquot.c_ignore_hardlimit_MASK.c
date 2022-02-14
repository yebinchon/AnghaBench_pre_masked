
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mem_dqinfo {int dqi_flags; TYPE_2__* dqi_format; } ;
struct TYPE_4__ {size_t type; } ;
struct dquot {TYPE_1__ dq_id; int dq_sb; } ;
struct TYPE_6__ {struct mem_dqinfo* info; } ;
struct TYPE_5__ {scalar_t__ qf_fmt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dquot *VAR_3)
{
 struct mem_dqinfo *VAR_4 = &FUNC_1(VAR_3->dq_sb)->info[VAR_3->dq_id.type];

 return FUNC_0(VAR_0) &&
        (VAR_4->dqi_format->qf_fmt_id != VAR_2 ||
  !(VAR_4->dqi_flags & VAR_1));
}
