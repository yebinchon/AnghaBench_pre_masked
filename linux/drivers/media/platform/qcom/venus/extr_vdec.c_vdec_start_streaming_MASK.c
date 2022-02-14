
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int lock; } ;
struct vb2_queue {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct venus_inst* FUNC_2 (struct vb2_queue*) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*,int ) ;

__attribute__((used)) static int FUNC_6(struct vb2_queue *VAR_2, unsigned int VAR_3)
{
 struct venus_inst *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 FUNC_0(&VAR_4->lock);

 if (VAR_2->type == VAR_0)
  VAR_5 = FUNC_3(VAR_4);
 else
  VAR_5 = FUNC_4(VAR_4);

 if (VAR_5)
  goto error;

 FUNC_1(&VAR_4->lock);
 return 0;

error:
 FUNC_5(VAR_4, VAR_1);
 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
