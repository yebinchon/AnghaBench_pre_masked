
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iavf_stats {int dummy; } ;


 int FUNC_0 (int ,void*,struct iavf_stats const*) ;

__attribute__((used)) static void
FUNC_1(u64 **VAR_0, void *VAR_1,
    const struct iavf_stats VAR_2[],
    const unsigned int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0((*VAR_0)++, VAR_1, &VAR_2[VAR_4]);
}
