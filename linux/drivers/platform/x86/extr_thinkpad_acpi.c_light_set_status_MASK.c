
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ light; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int *,int *,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int FUNC_1(int VAR_7)
{
 int VAR_8;

 if (VAR_6.light) {
  if (VAR_4) {
   VAR_8 = FUNC_0(VAR_4, ((void*)0), ((void*)0), "vd",
     (VAR_7) ?
      VAR_3 :
      VAR_2);
  } else {
   VAR_8 = FUNC_0(VAR_5, ((void*)0), ((void*)0), "vd",
     (VAR_7) ? 1 : 0);
  }
  return (VAR_8) ? 0 : -VAR_0;
 }

 return -VAR_1;
}
