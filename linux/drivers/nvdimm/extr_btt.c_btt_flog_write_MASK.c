
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct log_entry {int old_map; } ;
struct arena_info {TYPE_1__* freelist; } ;
struct TYPE_2__ {int seq; int has_err; int block; scalar_t__ sub; } ;


 int VAR_0 ;
 int FUNC_0 (struct arena_info*,size_t,size_t,struct log_entry*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct arena_info *VAR_1, u32 VAR_2, u32 VAR_3,
   struct log_entry *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;


 VAR_1->freelist[VAR_2].sub = 1 - VAR_1->freelist[VAR_2].sub;
 if (++(VAR_1->freelist[VAR_2].seq) == 4)
  VAR_1->freelist[VAR_2].seq = 1;
 if (FUNC_1(FUNC_3(VAR_4->old_map)))
  VAR_1->freelist[VAR_2].has_err = 1;
 VAR_1->freelist[VAR_2].block = FUNC_2(FUNC_3(VAR_4->old_map));

 return VAR_5;
}
