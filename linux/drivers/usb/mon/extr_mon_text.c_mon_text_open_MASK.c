
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rnf_complete; int rnf_error; int rnf_submit; struct mon_reader_text* r_data; struct mon_bus* m_bus; } ;
struct mon_reader_text {struct mon_reader_text* printf_buf; TYPE_1__ r; int * e_slab; int slab_name; int printf_size; int printf_lock; int wait; int e_list; } ;
struct mon_event_text {int dummy; } ;
struct mon_bus {int dummy; } ;
struct inode {struct mon_bus* i_private; } ;
struct file {struct mon_reader_text* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mon_reader_text*) ;
 struct mon_reader_text* FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int,int,int ,int ) ;
 struct mon_reader_text* FUNC_5 (int,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct mon_bus*,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,char*,struct mon_reader_text*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_9, struct file *VAR_10)
{
 struct mon_bus *VAR_11;
 struct mon_reader_text *VAR_12;
 int VAR_13;

 FUNC_8(&VAR_4);
 VAR_11 = VAR_9->i_private;

 VAR_12 = FUNC_5(sizeof(struct mon_reader_text), VAR_1);
 if (VAR_12 == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto err_alloc;
 }
 FUNC_0(&VAR_12->e_list);
 FUNC_1(&VAR_12->wait);
 FUNC_7(&VAR_12->printf_lock);

 VAR_12->printf_size = VAR_2;
 VAR_12->printf_buf = FUNC_3(VAR_12->printf_size, VAR_1);
 if (VAR_12->printf_buf == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto err_alloc_pr;
 }

 VAR_12->r.m_bus = VAR_11;
 VAR_12->r.r_data = VAR_12;
 VAR_12->r.rnf_submit = VAR_8;
 VAR_12->r.rnf_error = VAR_7;
 VAR_12->r.rnf_complete = VAR_5;

 FUNC_10(VAR_12->slab_name, VAR_3, "mon_text_%p", VAR_12);
 VAR_12->e_slab = FUNC_4(VAR_12->slab_name,
     sizeof(struct mon_event_text), sizeof(long), 0,
     VAR_6);
 if (VAR_12->e_slab == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto err_slab;
 }

 FUNC_6(VAR_11, &VAR_12->r);

 VAR_10->private_data = VAR_12;
 FUNC_9(&VAR_4);
 return 0;



err_slab:
 FUNC_2(VAR_12->printf_buf);
err_alloc_pr:
 FUNC_2(VAR_12);
err_alloc:
 FUNC_9(&VAR_4);
 return VAR_13;
}
