
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_struct {int lock; int glob_cfg; int inq_conf; TYPE_1__* sti_data; } ;
struct sti_conf_outptr {int ext_ptr; } ;
struct sti_conf_inptr {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int inq_outptr_ext; struct sti_conf_outptr inq_outptr; struct sti_conf_inptr inq_inptr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct sti_conf_inptr*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct sti_struct*,int ,int *,struct sti_conf_inptr*,struct sti_conf_outptr*,int ) ;

__attribute__((used)) static void FUNC_5(struct sti_struct *VAR_1)
{
 struct sti_conf_inptr *VAR_2 = &VAR_1->sti_data->inq_inptr;
 struct sti_conf_outptr *VAR_3 = &VAR_1->sti_data->inq_outptr;
 unsigned long VAR_4;
 s32 VAR_5;

 VAR_3->ext_ptr = FUNC_0(&VAR_1->sti_data->inq_outptr_ext);

 do {
  FUNC_2(&VAR_1->lock, VAR_4);
  FUNC_1(VAR_2, 0, sizeof(*VAR_2));
  VAR_5 = FUNC_4(VAR_1, VAR_1->inq_conf, &VAR_0,
   VAR_2, VAR_3, VAR_1->glob_cfg);
  FUNC_3(&VAR_1->lock, VAR_4);
 } while (VAR_5 == 1);
}
