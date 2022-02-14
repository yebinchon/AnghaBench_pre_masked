
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qspi_xfer {int buswidth; scalar_t__ is_last; int dir; } ;
struct qcom_qspi {scalar_t__ base; struct qspi_xfer xfer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qcom_qspi*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct qcom_qspi *VAR_4)
{
 u32 VAR_5;
 const struct qspi_xfer *VAR_6;

 VAR_6 = &VAR_4->xfer;
 VAR_5 = FUNC_1(VAR_4->base + VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_6->dir;
 if (VAR_6->is_last)
  VAR_5 &= ~VAR_3;
 else
  VAR_5 |= VAR_3;
 VAR_5 &= ~VAR_0;
 VAR_5 |= FUNC_0(VAR_4, VAR_6->buswidth);

 FUNC_2(VAR_5, VAR_4->base + VAR_1);
}
