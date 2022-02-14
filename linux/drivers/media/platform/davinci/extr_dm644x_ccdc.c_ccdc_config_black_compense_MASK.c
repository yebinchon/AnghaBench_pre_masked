
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccdc_black_compensation {int b; int gb; int gr; int r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ccdc_black_compensation *VAR_5)
{
 u32 VAR_6;

 VAR_6 = ((VAR_5->b & VAR_3) |
       ((VAR_5->gb & VAR_3) <<
        VAR_1) |
       ((VAR_5->gr & VAR_3) <<
        VAR_2) |
       ((VAR_5->r & VAR_3) <<
        VAR_4));
 FUNC_0(VAR_6, VAR_0);
}
