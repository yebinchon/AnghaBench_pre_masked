
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ocfs2_chain_list {int cl_next_free_rec; TYPE_1__* cl_recs; } ;
struct TYPE_2__ {int c_free; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline u16 FUNC_3(struct ocfs2_chain_list *VAR_0)
{
 u16 VAR_1, VAR_2;

 FUNC_0(!VAR_0->cl_next_free_rec);

 VAR_2 = VAR_1 = 0;
 while (VAR_1 < FUNC_1(VAR_0->cl_next_free_rec)) {
  if (FUNC_2(VAR_0->cl_recs[VAR_1].c_free) >
      FUNC_2(VAR_0->cl_recs[VAR_2].c_free))
   VAR_2 = VAR_1;
  VAR_1++;
 }

 FUNC_0(VAR_2 >= FUNC_1(VAR_0->cl_next_free_rec));
 return VAR_2;
}
