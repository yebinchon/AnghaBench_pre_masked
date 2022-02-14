
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {scalar_t__ vc_screenbuf_size; scalar_t__ vc_origin; scalar_t__ vc_screenbuf; int vc_y; int vc_x; } ;
struct TYPE_2__ {int orig_y; int orig_x; } ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_3)
{
 static int VAR_4 = 0;

 if (!VAR_4) {




  VAR_4 = 1;
  VAR_3->vc_x = VAR_0.orig_x;
  VAR_3->vc_y = VAR_0.orig_y;
 }




 if (!VAR_1)
  FUNC_0((u16 *) VAR_3->vc_screenbuf, (u16 *) VAR_3->vc_origin,
       VAR_3->vc_screenbuf_size > VAR_2 ? VAR_2 : VAR_3->vc_screenbuf_size);
}
