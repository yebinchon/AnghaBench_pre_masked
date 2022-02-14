
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla_tgt {scalar_t__ sess_count; int vha; struct qla_hw_data* ha; } ;
struct TYPE_2__ {int sess_lock; } ;
struct qla_hw_data {TYPE_1__ tgt; } ;


 int FUNC_0 (int ,int ,int,char*,struct qla_tgt*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct qla_tgt *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->ha;
 unsigned long VAR_3;
 int VAR_4;




 FUNC_1(&VAR_2->tgt.sess_lock, VAR_3);
 FUNC_0(VAR_0, VAR_1->vha, 0xe002,
     "tgt %p, sess_count=%d\n",
     VAR_1, VAR_1->sess_count);
 VAR_4 = (VAR_1->sess_count == 0);
 FUNC_2(&VAR_2->tgt.sess_lock, VAR_3);

 return VAR_4;
}
