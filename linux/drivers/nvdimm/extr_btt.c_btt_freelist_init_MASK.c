
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct log_entry {int new_map; int lba; int old_map; int seq; } ;
struct free_entry {int dummy; } ;
struct arena_info {size_t nfree; TYPE_1__* freelist; } ;
struct TYPE_2__ {int sub; size_t block; int has_err; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arena_info*,size_t) ;
 int FUNC_1 (struct arena_info*,size_t,struct log_entry*,int ) ;
 int FUNC_2 (struct arena_info*,int ,size_t*,int *,int *,int ) ;
 int FUNC_3 (struct arena_info*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (size_t,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct arena_info*) ;

__attribute__((used)) static int FUNC_12(struct arena_info *VAR_3)
{
 int VAR_4, VAR_5;
 struct log_entry VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_3->freelist = FUNC_8(VAR_3->nfree, sizeof(struct free_entry),
     VAR_1);
 if (!VAR_3->freelist)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_3->nfree; VAR_7++) {
  VAR_4 = FUNC_1(VAR_3, VAR_7, &VAR_6, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;


  VAR_9 = FUNC_6(FUNC_9(VAR_6.old_map));
  VAR_10 = FUNC_6(FUNC_9(VAR_6.new_map));


  VAR_3->freelist[VAR_7].sub = 1 - VAR_4;
  VAR_3->freelist[VAR_7].seq = FUNC_10(FUNC_9(VAR_6.seq));
  VAR_3->freelist[VAR_7].block = VAR_9;





  if (FUNC_5(FUNC_9(VAR_6.old_map)) &&
      !FUNC_7(FUNC_9(VAR_6.old_map))) {
   VAR_3->freelist[VAR_7].has_err = 1;
   VAR_5 = FUNC_0(VAR_3, VAR_7);
   if (VAR_5)
    FUNC_4(FUNC_11(VAR_3),
     "Unable to clear known errors\n");
  }


  if (VAR_9 == VAR_10)
   continue;


  VAR_5 = FUNC_2(VAR_3, FUNC_9(VAR_6.lba), &VAR_8,
    ((void*)0), ((void*)0), 0);
  if (VAR_5)
   return VAR_5;
  if ((VAR_10 != VAR_8) && (VAR_9 == VAR_8)) {




   VAR_5 = FUNC_3(VAR_3, FUNC_9(VAR_6.lba),
     FUNC_9(VAR_6.new_map), 0, 0, 0);
   if (VAR_5)
    return VAR_5;
  }
 }

 return 0;
}
