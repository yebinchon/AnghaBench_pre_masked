
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* file; } ;
struct bpf_map {int dummy; } ;
struct TYPE_2__ {struct bpf_map* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_map* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct fd) ;

struct bpf_map *FUNC_2(struct fd VAR_3)
{
 if (!VAR_3.file)
  return FUNC_0(-VAR_0);
 if (VAR_3.file->f_op != &VAR_2) {
  FUNC_1(VAR_3);
  return FUNC_0(-VAR_1);
 }

 return VAR_3.file->private_data;
}
