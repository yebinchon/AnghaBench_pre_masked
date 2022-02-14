
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns_head {int * current_path; int list; } ;
struct nvme_ns {scalar_t__ ana_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct nvme_ns* FUNC_1 (struct nvme_ns_head*,struct nvme_ns*) ;
 scalar_t__ FUNC_2 (struct nvme_ns*) ;
 int FUNC_3 (int ,struct nvme_ns*) ;

__attribute__((used)) static struct nvme_ns *FUNC_4(struct nvme_ns_head *VAR_2,
  int VAR_3, struct nvme_ns *VAR_4)
{
 struct nvme_ns *VAR_5, *VAR_6, *VAR_7 = ((void*)0);

 if (FUNC_0(&VAR_2->list)) {
  if (FUNC_2(VAR_4))
   return ((void*)0);
  return VAR_4;
 }

 for (VAR_5 = FUNC_1(VAR_2, VAR_4);
      VAR_5 != VAR_4;
      VAR_5 = FUNC_1(VAR_2, VAR_5)) {
  if (FUNC_2(VAR_5))
   continue;

  if (VAR_5->ana_state == VAR_1) {
   VAR_6 = VAR_5;
   goto out;
  }
  if (VAR_5->ana_state == VAR_0)
   VAR_7 = VAR_5;
 }

 if (!VAR_7)
  return ((void*)0);
 VAR_6 = VAR_7;
out:
 FUNC_3(VAR_2->current_path[VAR_3], VAR_6);
 return VAR_6;
}
