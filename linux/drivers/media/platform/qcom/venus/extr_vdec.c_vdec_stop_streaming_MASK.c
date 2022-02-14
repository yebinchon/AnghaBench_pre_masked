
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int lock; scalar_t__ streamon_cap; scalar_t__ streamon_out; } ;
struct vb2_queue {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct venus_inst* FUNC_2 (struct vb2_queue*) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*,int ) ;

__attribute__((used)) static void FUNC_6(struct vb2_queue *VAR_4)
{
 struct venus_inst *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = -VAR_0;

 FUNC_0(&VAR_5->lock);

 if (VAR_4->type == VAR_1)
  VAR_6 = FUNC_3(VAR_5);
 else
  VAR_6 = FUNC_4(VAR_5);

 FUNC_5(VAR_5, VAR_3);

 if (VAR_6)
  goto unlock;

 if (VAR_4->type == VAR_2)
  VAR_5->streamon_out = 0;
 else
  VAR_5->streamon_cap = 0;

unlock:
 FUNC_1(&VAR_5->lock);
}
