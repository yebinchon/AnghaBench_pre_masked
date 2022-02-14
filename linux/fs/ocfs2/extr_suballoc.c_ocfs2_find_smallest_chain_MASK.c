
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ocfs2_chain_list {TYPE_1__* cl_recs; int cl_count; } ;
struct TYPE_2__ {int c_total; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline u16 FUNC_2(struct ocfs2_chain_list *VAR_0)
{
 u16 VAR_1, VAR_2;

 VAR_2 = VAR_1 = 0;
 while (VAR_1 < FUNC_0(VAR_0->cl_count)) {
  if (FUNC_1(VAR_0->cl_recs[VAR_2].c_total) >
      FUNC_1(VAR_0->cl_recs[VAR_1].c_total))
   VAR_2 = VAR_1;
  VAR_1++;
 }
 return VAR_2;
}
