
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_attach_info {scalar_t__ max_ec; scalar_t__ min_ec; int ec_count; int ec_sum; } ;
struct TYPE_2__ {int list; } ;
struct ubi_ainf_peb {int lnum; int scrub; scalar_t__ ec; TYPE_1__ u; scalar_t__ sqnum; scalar_t__ copy_flag; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct list_head*) ;
 struct ubi_ainf_peb* FUNC_1 (struct ubi_attach_info*,int,int) ;

__attribute__((used)) static int FUNC_2(struct ubi_attach_info *VAR_1, struct list_head *VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 struct ubi_ainf_peb *VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->lnum = -1;
 VAR_6->scrub = VAR_5;
 VAR_6->copy_flag = VAR_6->sqnum = 0;

 VAR_1->ec_sum += VAR_6->ec;
 VAR_1->ec_count++;

 if (VAR_1->max_ec < VAR_6->ec)
  VAR_1->max_ec = VAR_6->ec;

 if (VAR_1->min_ec > VAR_6->ec)
  VAR_1->min_ec = VAR_6->ec;

 FUNC_0(&VAR_6->u.list, VAR_2);

 return 0;
}
