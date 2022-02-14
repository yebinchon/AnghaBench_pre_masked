
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int _write; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
struct TYPE_2__ {scalar_t__ BufWriteTimeoutTyp; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_1)
{
 struct map_info *VAR_2 = VAR_1->priv;
 struct cfi_private *VAR_3 = VAR_2->fldrv_priv;
 if (VAR_3->cfiq->BufWriteTimeoutTyp) {
  FUNC_0("Using buffer write method\n");
  VAR_1->_write = VAR_0;
 }
}
