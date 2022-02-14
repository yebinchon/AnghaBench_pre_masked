
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; int data; } ;
struct mei_cl_cb {TYPE_1__ buf; } ;
struct mei_cl {int dummy; } ;
struct file {int dummy; } ;
typedef enum mei_cb_file_ops { ____Placeholder_mei_cb_file_ops } mei_cb_file_ops ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mei_cl_cb*) ;
 struct mei_cl_cb* FUNC_2 (struct mei_cl*,int,struct file const*) ;
 int FUNC_3 (size_t,int ) ;

struct mei_cl_cb *FUNC_4(struct mei_cl *VAR_2, size_t VAR_3,
      enum mei_cb_file_ops VAR_4,
      const struct file *VAR_5)
{
 struct mei_cl_cb *VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 if (VAR_3 == 0)
  return VAR_6;

 VAR_6->buf.data = FUNC_0(FUNC_3(VAR_3, VAR_1), VAR_0);
 if (!VAR_6->buf.data) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 VAR_6->buf.size = VAR_3;

 return VAR_6;
}
