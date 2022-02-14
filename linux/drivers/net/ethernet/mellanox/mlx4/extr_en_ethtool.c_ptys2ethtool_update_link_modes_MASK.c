
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ethtool_report { ____Placeholder_ethtool_report } ethtool_report ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long*,unsigned long*,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(unsigned long *VAR_3,
        u32 VAR_4,
        enum ethtool_report VAR_5)
{
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4 & FUNC_0(VAR_6))
   FUNC_1(VAR_3, VAR_3,
      FUNC_2(&VAR_2[VAR_6],
        VAR_5),
      VAR_1);
 }
}
