
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct altera_pcie*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct altera_pcie *VAR_8, u32 *VAR_9)
{
 int VAR_10;
 bool VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15 = 1;





 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_12 = FUNC_1(VAR_8, VAR_6);
  if ((VAR_12 & VAR_5) || (VAR_12 & VAR_2) || VAR_11) {
   VAR_13 = FUNC_1(VAR_8, VAR_3);
   VAR_14 = FUNC_1(VAR_8, VAR_4);

   if (VAR_12 & VAR_5) {
    VAR_11 = 1;
    VAR_15 = FUNC_0(VAR_14);
   }

   if (VAR_12 & VAR_2) {
    if (VAR_15)
     return VAR_0;

    if (VAR_9)
     *VAR_9 = VAR_13;

    return VAR_1;
   }
  }
  FUNC_2(5);
 }

 return VAR_0;
}
