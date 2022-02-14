
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hclge_comm_stats_str {int offset; } ;


 int FUNC_0 (void const*,int ) ;

__attribute__((used)) static u64 *FUNC_1(const void *VAR_0,
     const struct hclge_comm_stats_str VAR_1[],
     int VAR_2, u64 *VAR_3)
{
 u64 *VAR_4 = VAR_3;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4[VAR_5] = FUNC_0(VAR_0, VAR_1[VAR_5].offset);

 return VAR_4 + VAR_2;
}
