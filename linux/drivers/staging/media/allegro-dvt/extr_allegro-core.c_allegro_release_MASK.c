
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {int private_data; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct allegro_channel {TYPE_1__ fh; int ctrl_handler; int list; } ;


 struct allegro_channel* FUNC_0 (int ) ;
 int FUNC_1 (struct allegro_channel*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0)
{
 struct allegro_channel *VAR_1 = FUNC_0(VAR_0->private_data);

 FUNC_6(VAR_1->fh.m2m_ctx);

 FUNC_2(&VAR_1->list);

 FUNC_3(&VAR_1->ctrl_handler);

 FUNC_4(&VAR_1->fh);
 FUNC_5(&VAR_1->fh);

 FUNC_1(VAR_1);

 return 0;
}
