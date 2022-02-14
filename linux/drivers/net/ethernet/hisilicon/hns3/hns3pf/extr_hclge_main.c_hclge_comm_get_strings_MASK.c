
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef scalar_t__ u32 ;
struct hclge_comm_stats_str {char* desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static u8 *FUNC_1(u32 VAR_2,
      const struct hclge_comm_stats_str VAR_3[],
      int VAR_4, u8 *VAR_5)
{
 char *VAR_6 = (char *)VAR_5;
 u32 VAR_7;

 if (VAR_2 != VAR_1)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  FUNC_0(VAR_6, VAR_0, "%s", VAR_3[VAR_7].desc);
  VAR_6 = VAR_6 + VAR_0;
 }

 return (u8 *)VAR_6;
}
