
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_11, u64 VAR_12)
{
 FUNC_0(VAR_11->dev, "Core device errors ( ");

 if (VAR_12 & VAR_4)
  FUNC_1("META2 ");
 if (VAR_12 & VAR_3)
  FUNC_1("META1 ");
 if (VAR_12 & VAR_5)
  FUNC_1("PEU ");
 if (VAR_12 & VAR_9)
  FUNC_1("TXC ");
 if (VAR_12 & VAR_6)
  FUNC_1("RDMC ");
 if (VAR_12 & VAR_8)
  FUNC_1("TDMC ");
 if (VAR_12 & VAR_10)
  FUNC_1("ZCP ");
 if (VAR_12 & VAR_0)
  FUNC_1("FFLP ");
 if (VAR_12 & VAR_1)
  FUNC_1("IPP ");
 if (VAR_12 & VAR_2)
  FUNC_1("MAC ");
 if (VAR_12 & VAR_7)
  FUNC_1("SMX ");

 FUNC_1(")\n");
}
