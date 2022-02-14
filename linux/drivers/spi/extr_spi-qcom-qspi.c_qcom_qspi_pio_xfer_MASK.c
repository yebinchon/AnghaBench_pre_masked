
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ dir; } ;
struct qcom_qspi {scalar_t__ base; TYPE_1__ xfer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qcom_qspi*) ;
 int FUNC_1 (struct qcom_qspi*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct qcom_qspi *VAR_7)
{
 u32 VAR_8;

 FUNC_0(VAR_7);


 FUNC_2(VAR_2, VAR_7->base + VAR_1);


 if (VAR_7->xfer.dir == VAR_4)
  VAR_8 = VAR_3 | VAR_6;
 else
  VAR_8 = VAR_3 | VAR_5;
 FUNC_2(VAR_8, VAR_7->base + VAR_0);


 FUNC_1(VAR_7);
}
