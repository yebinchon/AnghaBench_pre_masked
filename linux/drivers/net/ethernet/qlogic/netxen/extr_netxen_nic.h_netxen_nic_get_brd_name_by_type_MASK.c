
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ brdtype; char* short_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static inline int FUNC_1(u32 VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (VAR_2[VAR_5].brdtype == VAR_3) {
   FUNC_0(VAR_4, VAR_2[VAR_5].short_name);
   VAR_6 = 1;
   break;
  }
 }

 if (!VAR_6) {
  FUNC_0(VAR_4, "Unknown");
  return -VAR_0;
 }

 return 0;
}
