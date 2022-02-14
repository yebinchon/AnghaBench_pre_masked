
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct heuristic_ws {struct list_head list; void* bucket_b; void* bucket; int sample; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct list_head* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct list_head*) ;
 int VAR_3 ;
 int FUNC_2 (struct list_head*) ;
 void* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int ) ;
 struct heuristic_ws* FUNC_5 (int,int ) ;

__attribute__((used)) static struct list_head *FUNC_6(unsigned int VAR_4)
{
 struct heuristic_ws *VAR_5;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_5->sample = FUNC_4(VAR_3, VAR_2);
 if (!VAR_5->sample)
  goto fail;

 VAR_5->bucket = FUNC_3(VAR_0, sizeof(*VAR_5->bucket), VAR_2);
 if (!VAR_5->bucket)
  goto fail;

 VAR_5->bucket_b = FUNC_3(VAR_0, sizeof(*VAR_5->bucket_b), VAR_2);
 if (!VAR_5->bucket_b)
  goto fail;

 FUNC_1(&VAR_5->list);
 return &VAR_5->list;
fail:
 FUNC_2(&VAR_5->list);
 return FUNC_0(-VAR_1);
}
