
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qspi_trans {int trans; scalar_t__ mspi_last_trans; } ;
struct bcm_qspi {int master; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct bcm_qspi *VAR_0,
        struct qspi_trans *VAR_1)
{
 if (VAR_1->mspi_last_trans &&
     FUNC_0(VAR_0->master, VAR_1->trans))
  return 1;
 else
  return 0;
}
