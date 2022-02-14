
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicpf {int num_sqs_en; int* sqs_used; int num_vf_en; } ;



__attribute__((used)) static int FUNC_0(struct nicpf *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_sqs_en; VAR_1++) {
  if (!VAR_0->sqs_used[VAR_1])
   VAR_0->sqs_used[VAR_1] = 1;
  else
   continue;
  return VAR_1 + VAR_0->num_vf_en;
 }
 return -1;
}
