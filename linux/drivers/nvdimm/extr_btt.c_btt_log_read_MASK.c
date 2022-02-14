
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct log_group {TYPE_1__* ent; } ;
struct log_entry {int dummy; } ;
struct arena_info {size_t* log_index; } ;
struct TYPE_2__ {int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arena_info*,struct log_group*) ;
 int FUNC_1 (struct arena_info*,int ,struct log_group*) ;
 int FUNC_2 (int ,char*,int,int ,int ,int ) ;
 int FUNC_3 (struct log_entry*,TYPE_1__*,int ) ;
 int FUNC_4 (struct arena_info*) ;

__attribute__((used)) static int FUNC_5(struct arena_info *VAR_2, u32 VAR_3,
   struct log_entry *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8;
 struct log_group VAR_9;

 VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_9);
 if (VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_2, &VAR_9);
 if (VAR_7 < 0 || VAR_7 > 1) {
  FUNC_2(FUNC_4(VAR_2),
    "log corruption (%d): lane %d seq [%d, %d]\n",
    VAR_7, VAR_3, VAR_9.ent[VAR_2->log_index[0]].seq,
    VAR_9.ent[VAR_2->log_index[1]].seq);

  return -VAR_0;
 }

 VAR_8 = (VAR_5 ? VAR_7 : (1 - VAR_7));

 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_4, &VAR_9.ent[VAR_2->log_index[VAR_8]], VAR_1);

 return VAR_8;
}
