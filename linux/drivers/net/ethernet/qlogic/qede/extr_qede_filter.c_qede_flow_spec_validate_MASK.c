
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {TYPE_1__* arfs; } ;
struct qede_arfs_tuple {scalar_t__ mode; } ;
struct flow_action {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ filter_count; int arfs_fltr_bmap; } ;


 int FUNC_0 (struct qede_dev*,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct qede_dev*,struct flow_action*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct qede_dev *VAR_2,
       struct flow_action *VAR_3,
       struct qede_arfs_tuple *VAR_4,
       __u32 VAR_5)
{
 if (VAR_5 >= VAR_1) {
  FUNC_0(VAR_2, "Location out-of-bounds\n");
  return -VAR_0;
 }


 if (FUNC_2(VAR_5, VAR_2->arfs->arfs_fltr_bmap)) {
  FUNC_0(VAR_2, "Location already in use\n");
  return -VAR_0;
 }


 if (VAR_2->arfs->filter_count &&
     VAR_2->arfs->mode != VAR_4->mode) {
  FUNC_0(VAR_2,
   "flow_spec would require filtering mode %08x, but %08x is configured\n",
   VAR_4->mode, VAR_2->arfs->filter_count);
  return -VAR_0;
 }

 if (FUNC_1(VAR_2, VAR_3))
  return -VAR_0;

 return 0;
}
