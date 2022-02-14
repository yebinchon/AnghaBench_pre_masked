
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_file_data {scalar_t__ in_urbs_used; int err_lock; scalar_t__ out_transfer_size; scalar_t__ out_status; scalar_t__ in_transfer_size; scalar_t__ in_status; int in_anchor; int submitted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct usbtmc_file_data *VAR_0)
{
 FUNC_2(&VAR_0->submitted);
 FUNC_3(&VAR_0->in_anchor);
 FUNC_0(&VAR_0->err_lock);
 VAR_0->in_status = 0;
 VAR_0->in_transfer_size = 0;
 VAR_0->out_status = 0;
 VAR_0->out_transfer_size = 0;
 FUNC_1(&VAR_0->err_lock);

 VAR_0->in_urbs_used = 0;
 return 0;
}
