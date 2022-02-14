
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_context {int pe; TYPE_1__* afu; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct cxl_context *VAR_4)
{
 u64 VAR_5;
 int VAR_6 = 1000;
 int VAR_7;





 while (VAR_6--) {
  VAR_7 = FUNC_2(VAR_4->afu, VAR_3) & 0xffff;
  if (VAR_7 != VAR_4->pe)
   return;
  VAR_5 = FUNC_2(VAR_4->afu, VAR_1);
  if (FUNC_0() &&
     ((VAR_5 & VAR_2) == 0))
   return;
  if (FUNC_1() &&
     ((VAR_5 & VAR_0) == 0))
   return;




  FUNC_4(1);
 }

 FUNC_3(&VAR_4->afu->dev, "WARNING: waiting on DSI for PE %i"
   " DSISR %016llx!\n", VAR_7, VAR_5);
 return;
}
