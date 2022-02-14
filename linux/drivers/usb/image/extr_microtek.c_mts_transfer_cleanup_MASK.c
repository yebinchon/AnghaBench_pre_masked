
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct TYPE_2__ {int srb; int (* final_callback ) (int ) ;} ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( struct urb *VAR_1 )

{
 FUNC_0();

 if ( FUNC_1(VAR_0->final_callback != ((void*)0)) )
  VAR_0->final_callback(VAR_0->srb);
}
