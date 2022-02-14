
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum vpss_ccdc_source_sel { ____Placeholder_vpss_ccdc_source_sel } vpss_ccdc_source_sel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(enum vpss_ccdc_source_sel VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_2) & ~VAR_0;


 if (VAR_5 == VAR_4 || VAR_5 == VAR_3)
  VAR_6 |= 0x08;

 VAR_6 |= (VAR_5 << VAR_1);
 FUNC_1(VAR_6, VAR_2);
}
