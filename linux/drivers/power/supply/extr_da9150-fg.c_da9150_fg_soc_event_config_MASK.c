
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9150_fg {int warn_soc; int crit_soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct da9150_fg*,int ,int ) ;
 int FUNC_1 (struct da9150_fg*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct da9150_fg *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4,
           VAR_5);

 if (VAR_7 > VAR_6->warn_soc) {

  FUNC_1(VAR_6, VAR_2,
       VAR_3,
       VAR_6->warn_soc + 1);
 } else if ((VAR_7 <= VAR_6->warn_soc) && (VAR_7 > VAR_6->crit_soc)) {




  FUNC_1(VAR_6, VAR_2,
       VAR_3,
       VAR_6->crit_soc + 1);

  FUNC_1(VAR_6, VAR_0,
       VAR_1,
       VAR_6->warn_soc);
 } else if (VAR_7 <= VAR_6->crit_soc) {

  FUNC_1(VAR_6, VAR_0,
       VAR_1,
       VAR_6->crit_soc);
 }
}
