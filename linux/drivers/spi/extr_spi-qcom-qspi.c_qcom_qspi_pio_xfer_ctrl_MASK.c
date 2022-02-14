
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rem_bytes; } ;
struct qcom_qspi {scalar_t__ base; TYPE_1__ xfer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct qcom_qspi *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->base + VAR_0);
 VAR_3 &= ~VAR_1;
 VAR_3 |= VAR_2->xfer.rem_bytes;
 FUNC_1(VAR_3, VAR_2->base + VAR_0);
}
