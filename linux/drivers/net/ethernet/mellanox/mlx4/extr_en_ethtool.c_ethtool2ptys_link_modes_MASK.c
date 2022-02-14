
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ethtool_report { ____Placeholder_ethtool_report } ethtool_report ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned long const*,int ) ;
 int FUNC_1 (int *,int) ;
 int * VAR_2 ;

__attribute__((used)) static u32 FUNC_2(const unsigned long *VAR_3,
       enum ethtool_report VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_0(
       FUNC_1(&VAR_2[VAR_5],
         VAR_4),
       VAR_3,
       VAR_1))
   VAR_6 |= 1 << VAR_5;
 }
 return VAR_6;
}
