
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ plcp; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_14)
{
 int VAR_15 = 0;

 if (VAR_14 & VAR_10) {
  VAR_15 = VAR_14 & VAR_8;
  VAR_15 += VAR_7;


  if (VAR_15 >= VAR_5)
   VAR_15 += 1;
  if ((VAR_15 >= VAR_0) && (VAR_15 <= VAR_3))
   return VAR_15;
 } else if (VAR_14 & VAR_11 ||
     VAR_14 & VAR_9) {
  VAR_15 = VAR_14 & VAR_12;
  VAR_15 += VAR_7;


  if (VAR_15 >= VAR_5)
   VAR_15++;
  if ((VAR_15 >= VAR_1) && (VAR_15 <= VAR_4))
   return VAR_15;
  if ((VAR_14 & VAR_9) &&
      (VAR_15 <= VAR_2))
   return VAR_15;
 } else {


  u8 VAR_16 = FUNC_1(VAR_14);
  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_13); VAR_15++)
   if (VAR_13[VAR_15].plcp == VAR_16)
    return VAR_15;
 }

 return VAR_6;
}
