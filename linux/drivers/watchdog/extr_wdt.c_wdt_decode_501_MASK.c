
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(int VAR_4)
{
 if (!(VAR_4 & VAR_2))
  FUNC_1("Overheat alarm (%d)\n", FUNC_0(VAR_3));
 if (!(VAR_4 & VAR_0))
  FUNC_1("PSU over voltage\n");
 if (!(VAR_4 & VAR_1))
  FUNC_1("PSU under voltage\n");
}
