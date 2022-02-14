
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int slot_num; int max_slots; } ;
struct ocfs2_alloc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocfs2_super*,int) ;
 int FUNC_1 (struct ocfs2_super*,int,int) ;
 int FUNC_2 (struct ocfs2_alloc_context*) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_alloc_context*,int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_3,
    struct ocfs2_alloc_context *VAR_4,
    int VAR_5)
{
 int VAR_6, VAR_7 = -VAR_0;
 int VAR_8 = FUNC_0(VAR_3, VAR_5);


 if (VAR_8 == VAR_2)
  VAR_8 = VAR_3->slot_num + 1;

 for (VAR_6 = 0; VAR_6 < VAR_3->max_slots; VAR_6++, VAR_8++) {
  if (VAR_8 == VAR_3->max_slots)
   VAR_8 = 0;

  if (VAR_8 == VAR_3->slot_num)
   continue;

  VAR_7 = FUNC_3(VAR_3, VAR_4,
           VAR_5,
           (u32)VAR_8, ((void*)0),
           VAR_1);
  if (VAR_7 >= 0) {
   FUNC_1(VAR_3, VAR_8, VAR_5);
   break;
  }

  FUNC_2(VAR_4);
 }

 return VAR_7;
}
