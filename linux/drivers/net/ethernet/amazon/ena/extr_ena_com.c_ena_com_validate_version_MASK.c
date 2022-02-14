
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ena_com_dev {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ena_com_dev*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int,...) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ena_com_dev *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;




 VAR_16 = FUNC_0(VAR_15, VAR_12);
 VAR_17 = FUNC_0(VAR_15,
       VAR_7);

 if (FUNC_3((VAR_16 == VAR_0) ||
       (VAR_17 == VAR_0))) {
  FUNC_1("Reg read timeout occurred\n");
  return -VAR_13;
 }

 FUNC_2("ena device version: %d.%d\n",
  (VAR_16 & VAR_9) >>
   VAR_10,
  VAR_16 & VAR_11);

 FUNC_2("ena controller version: %d.%d.%d implementation version %d\n",
  (VAR_17 & VAR_3) >>
   VAR_4,
  (VAR_17 & VAR_5) >>
   VAR_6,
  (VAR_17 & VAR_8),
  (VAR_17 & VAR_1) >>
   VAR_2);

 VAR_18 =
  (VAR_17 & VAR_3) |
  (VAR_17 & VAR_5) |
  (VAR_17 & VAR_8);


 if (VAR_18 < VAR_14) {
  FUNC_1("ENA ctrl version is lower than the minimal ctrl version the driver supports\n");
  return -1;
 }

 return 0;
}
