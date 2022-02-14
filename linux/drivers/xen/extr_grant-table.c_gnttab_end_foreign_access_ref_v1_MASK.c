
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef size_t grant_ref_t ;
struct TYPE_4__ {TYPE_1__* v1; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int*,int,int ) ;

__attribute__((used)) static int FUNC_1(grant_ref_t VAR_3, int VAR_4)
{
 u16 VAR_5, VAR_6;
 u16 *VAR_7;

 VAR_7 = &VAR_2.v1[VAR_3].flags;
 VAR_6 = *VAR_7;
 do {
  VAR_5 = VAR_6;
  if (VAR_5 & (VAR_0|VAR_1))
   return 0;
 } while ((VAR_6 = FUNC_0(VAR_7, VAR_5, 0)) != VAR_5);

 return 1;
}
