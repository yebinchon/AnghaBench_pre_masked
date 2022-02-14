
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt_notifier_param {struct vc_data* vc; } ;
struct vc_data {int vc_screenbuf_size; int vc_cols; int vc_rows; void* vc_screenbuf; int * vc_uni_pagedir_loc; int port; } ;
struct TYPE_2__ {struct vc_data* d; int SAK_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,struct vt_notifier_param*) ;
 int FUNC_3 (struct vc_data*) ;
 int VAR_5 ;
 int FUNC_4 (struct vc_data*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_7 (struct vc_data*,int ,int ,int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct vc_data*) ;
 int FUNC_10 (struct vc_data*,unsigned int,int) ;
 int VAR_8 ;

int FUNC_11(unsigned int VAR_9)
{
 struct vt_notifier_param VAR_10;
 struct vc_data *VAR_11;

 FUNC_1();

 if (VAR_9 >= VAR_3)
  return -VAR_1;

 if (VAR_7[VAR_9].d)
  return 0;







 VAR_10.vc = VAR_11 = FUNC_5(sizeof(struct vc_data), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_7[VAR_9].d = VAR_11;
 FUNC_6(&VAR_11->port);
 FUNC_0(&VAR_7[VAR_9].SAK_work, VAR_6);

 FUNC_10(VAR_11, VAR_9, 1);

 if (!*VAR_11->vc_uni_pagedir_loc)
  FUNC_3(VAR_11);

 VAR_11->vc_screenbuf = FUNC_5(VAR_11->vc_screenbuf_size, VAR_2);
 if (!VAR_11->vc_screenbuf)
  goto err_free;



 if (VAR_5 == -1)
  VAR_5 = 1;

 FUNC_7(VAR_11, VAR_11->vc_rows, VAR_11->vc_cols, 1);
 FUNC_8(VAR_9);
 FUNC_2(&VAR_8, VAR_4, &VAR_10);

 return 0;
err_free:
 FUNC_9(VAR_11);
 FUNC_4(VAR_11);
 VAR_7[VAR_9].d = ((void*)0);
 return -VAR_0;
}
