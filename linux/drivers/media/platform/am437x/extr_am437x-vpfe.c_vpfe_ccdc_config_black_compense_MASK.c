
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vpfe_ccdc_black_compensation {int b; int gb; int gr; int r; } ;
struct vpfe_ccdc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vpfe_ccdc*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct vpfe_ccdc *VAR_5,
    struct vpfe_ccdc_black_compensation *VAR_6)
{
 u32 VAR_7;

 VAR_7 = ((VAR_6->b & VAR_3) |
       ((VAR_6->gb & VAR_3) <<
        VAR_1) |
       ((VAR_6->gr & VAR_3) <<
        VAR_2) |
       ((VAR_6->r & VAR_3) <<
        VAR_4));
 FUNC_0(VAR_5, VAR_7, VAR_0);
}
