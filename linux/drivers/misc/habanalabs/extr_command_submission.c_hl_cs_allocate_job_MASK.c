
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dummy; } ;
struct hl_cs_job {int ext_queue; int finish_work; int userptr_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 struct hl_cs_job* FUNC_2 (int,int ) ;

struct hl_cs_job *FUNC_3(struct hl_device *VAR_2, bool VAR_3)
{
 struct hl_cs_job *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->ext_queue = VAR_3;

 if (VAR_4->ext_queue) {
  FUNC_0(&VAR_4->userptr_list);
  FUNC_1(&VAR_4->finish_work, VAR_1);
 }

 return VAR_4;
}
