
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_error_handler {unsigned long long start; unsigned long long end; int list; scalar_t__ first_error; scalar_t__ num_errors; int aspace; } ;
struct vme_bridge {int vme_error_handlers; } ;


 int VAR_0 ;
 struct vme_error_handler* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

struct vme_error_handler *FUNC_2(
 struct vme_bridge *VAR_1, u32 VAR_2,
 unsigned long long VAR_3, size_t VAR_4)
{
 struct vme_error_handler *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->aspace = VAR_2;
 VAR_5->start = VAR_3;
 VAR_5->end = VAR_3 + VAR_4;
 VAR_5->num_errors = 0;
 VAR_5->first_error = 0;
 FUNC_1(&VAR_5->list, &VAR_1->vme_error_handlers);

 return VAR_5;
}
