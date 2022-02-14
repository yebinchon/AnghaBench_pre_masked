
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_cb {int fop_type; scalar_t__ buf_idx; struct mei_cl* cl; struct file const* fp; int list; } ;
struct mei_cl {int dummy; } ;
struct file {int dummy; } ;
typedef enum mei_cb_file_ops { ____Placeholder_mei_cb_file_ops } mei_cb_file_ops ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mei_cl_cb* FUNC_1 (int,int ) ;

__attribute__((used)) static struct mei_cl_cb *FUNC_2(struct mei_cl *VAR_1,
     enum mei_cb_file_ops VAR_2,
     const struct file *VAR_3)
{
 struct mei_cl_cb *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct mei_cl_cb), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->list);
 VAR_4->fp = VAR_3;
 VAR_4->cl = VAR_1;
 VAR_4->buf_idx = 0;
 VAR_4->fop_type = VAR_2;
 return VAR_4;
}
