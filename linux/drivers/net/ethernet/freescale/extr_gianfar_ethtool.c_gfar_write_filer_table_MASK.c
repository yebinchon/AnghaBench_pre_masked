
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfar_private {int dummy; } ;
struct filer_table {int index; TYPE_1__* fe; } ;
struct TYPE_2__ {int ctrl; int prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfar_private*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct gfar_private *VAR_2,
      struct filer_table *VAR_3)
{
 u32 VAR_4 = 0;
 if (VAR_3->index > VAR_1 - 1)
  return -VAR_0;


 for (; VAR_4 < VAR_1 && (VAR_3->fe[VAR_4].ctrl | VAR_3->fe[VAR_4].prop); VAR_4++)
  FUNC_0(VAR_2, VAR_4, VAR_3->fe[VAR_4].ctrl, VAR_3->fe[VAR_4].prop);

 for (; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_2, VAR_4, 0x60, 0xFFFFFFFF);



 FUNC_0(VAR_2, VAR_4, 0x20, 0x0);

 return 0;
}
