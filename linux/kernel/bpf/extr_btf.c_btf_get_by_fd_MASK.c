
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* file; } ;
struct btf {int refcnt; } ;
struct TYPE_2__ {struct btf* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btf* FUNC_0 (int ) ;
 int VAR_2 ;
 struct fd FUNC_1 (int) ;
 int FUNC_2 (struct fd) ;
 int FUNC_3 (int *) ;

struct btf *FUNC_4(int VAR_3)
{
 struct btf *VAR_4;
 struct fd VAR_5;

 VAR_5 = FUNC_1(VAR_3);

 if (!VAR_5.file)
  return FUNC_0(-VAR_0);

 if (VAR_5.file->f_op != &VAR_2) {
  FUNC_2(VAR_5);
  return FUNC_0(-VAR_1);
 }

 VAR_4 = VAR_5.file->private_data;
 FUNC_3(&VAR_4->refcnt);
 FUNC_2(VAR_5);

 return VAR_4;
}
