
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_tty {int dummy; } ;
struct ipw_network {int dummy; } ;
struct ipw_hardware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct ipw_hardware*,struct ipw_network*,int,int,int ) ;
 struct ipw_tty** VAR_7 ;

struct ipw_tty *FUNC_1(struct ipw_hardware *VAR_8,
          struct ipw_network *VAR_9)
{
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  int VAR_12 = 1;

  for (VAR_11 = VAR_10; VAR_11 < VAR_0;
    VAR_11 += VAR_1)
   if (VAR_7[VAR_11] != ((void*)0)) {
    VAR_12 = 0;
    break;
   }

  if (VAR_12) {
   VAR_11 = VAR_10;

   if (FUNC_0(VAR_11, VAR_8, VAR_9,
     VAR_2, VAR_3,
     VAR_4))
    return ((void*)0);

   VAR_11 += VAR_1;
   if (FUNC_0(VAR_11, VAR_8, VAR_9,
     VAR_2, -1,
     VAR_5))
    return ((void*)0);

   VAR_11 += VAR_1;
   if (FUNC_0(VAR_11, VAR_8, VAR_9,
     VAR_3, -1,
     VAR_6))
    return ((void*)0);

   return VAR_7[VAR_10];
  }
 }
 return ((void*)0);
}
