
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct u132 {int dummy; } ;
struct TYPE_2__ {int* portstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct u132*,int,int*) ;
 int FUNC_3 (struct u132*,int,int) ;

__attribute__((used)) static int FUNC_4(struct u132 *VAR_7, int VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 VAR_9 = FUNC_2(VAR_7, VAR_10, &VAR_10);
 if (VAR_9)
  return VAR_9;
 VAR_11 = VAR_10;
 VAR_12 = VAR_11 + VAR_2;
 do {
  u32 VAR_13;
  do {
   VAR_9 = FUNC_2(VAR_7,
    VAR_6.portstatus[VAR_8], &VAR_13);
   if (VAR_9)
    return VAR_9;
   if (VAR_4 & VAR_13)
    continue;
   else
    break;
  } while (FUNC_1(VAR_11, VAR_12));
  if (VAR_4 & VAR_13)
   return -VAR_0;
  if (VAR_3 & VAR_13) {
   if (VAR_5 & VAR_13) {
    VAR_9 = FUNC_3(VAR_7,
     VAR_6.portstatus[VAR_8],
     VAR_5);
    if (VAR_9)
     return VAR_9;
   }
  } else
   break;

  VAR_9 = FUNC_3(VAR_7, VAR_6.portstatus[VAR_8],
    VAR_4);
  if (VAR_9)
   return VAR_9;
  FUNC_0(VAR_1);
  VAR_9 = FUNC_2(VAR_7, VAR_10, &VAR_10);
  if (VAR_9)
   return VAR_9;
  VAR_11 = VAR_10;
 } while (FUNC_1(VAR_11, VAR_12));
 return 0;
}
