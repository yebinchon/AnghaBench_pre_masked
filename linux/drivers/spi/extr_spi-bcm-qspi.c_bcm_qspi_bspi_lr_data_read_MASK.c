
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct bcm_qspi {int bspi_rf_op_len; size_t bspi_rf_op_idx; TYPE_4__* bspi_rf_op; TYPE_1__* pdev; } ;
struct TYPE_6__ {scalar_t__ in; } ;
struct TYPE_7__ {TYPE_2__ buf; } ;
struct TYPE_8__ {TYPE_3__ data; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ FUNC_0 (uintptr_t,int) ;
 int FUNC_1 (struct bcm_qspi*) ;
 int FUNC_2 (struct bcm_qspi*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,TYPE_4__*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct bcm_qspi *VAR_0)
{
 u32 *VAR_1 = (u32 *)VAR_0->bspi_rf_op->data.buf.in;
 u32 VAR_2 = 0;

 FUNC_4(&VAR_0->pdev->dev, "xfer %p rx %p rxlen %d\n", VAR_0->bspi_rf_op,
  VAR_0->bspi_rf_op->data.buf.in, VAR_0->bspi_rf_op_len);
 while (!FUNC_1(VAR_0)) {
  VAR_2 = FUNC_2(VAR_0);
  if (FUNC_5(VAR_0->bspi_rf_op_len >= 4) &&
      FUNC_0((uintptr_t)VAR_1, 4)) {
   VAR_1[VAR_0->bspi_rf_op_idx++] = VAR_2;
   VAR_0->bspi_rf_op_len -= 4;
  } else {

   u8 *VAR_3 = (u8 *)&VAR_1[VAR_0->bspi_rf_op_idx];

   VAR_2 = FUNC_3(VAR_2);
   while (VAR_0->bspi_rf_op_len) {
    *VAR_3++ = (u8)VAR_2;
    VAR_2 >>= 8;
    VAR_0->bspi_rf_op_len--;
   }
  }
 }
}
