
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iavf_stats {int dummy; } ;
struct iavf_ring {int syncp; } ;


 unsigned int FUNC_0 (struct iavf_stats*) ;
 int FUNC_1 (int *,struct iavf_ring*,struct iavf_stats const*) ;
 struct iavf_stats* VAR_0 ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_4(u64 **VAR_1, struct iavf_ring *VAR_2)
{
 const unsigned int VAR_3 = FUNC_0(VAR_0);
 const struct iavf_stats *VAR_4 = VAR_0;
 unsigned int VAR_5;
 unsigned int VAR_6;






 do {
  VAR_5 = !VAR_2 ? 0 : FUNC_2(&VAR_2->syncp);
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   FUNC_1(&(*VAR_1)[VAR_6], VAR_2, &VAR_4[VAR_6]);
 } while (VAR_2 && FUNC_3(&VAR_2->syncp, VAR_5));


 *VAR_1 += VAR_3;
}
