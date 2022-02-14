
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
typedef size_t grant_ref_t ;
struct TYPE_8__ {TYPE_3__* v2; } ;
struct TYPE_5__ {unsigned long frame; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ full_page; TYPE_2__ hdr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int,int ) ;

__attribute__((used)) static unsigned long FUNC_4(grant_ref_t VAR_3)
{
 unsigned long VAR_4;
 u16 VAR_5;
 u16 *VAR_6;

 VAR_6 = &VAR_2.v2[VAR_3].hdr.flags;





 while (!((VAR_5 = *VAR_6) & VAR_0)) {
  if (FUNC_3(VAR_6, VAR_5, 0) == VAR_5)
   return 0;
  FUNC_1();
 }


 while (!(VAR_5 & VAR_1)) {
  VAR_5 = *VAR_6;
  FUNC_1();
 }

 FUNC_2();
 VAR_4 = VAR_2.v2[VAR_3].full_page.frame;
 FUNC_0(VAR_4 == 0);

 return VAR_4;
}
