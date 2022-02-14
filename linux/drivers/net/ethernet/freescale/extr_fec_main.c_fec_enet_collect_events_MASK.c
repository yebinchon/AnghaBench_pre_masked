
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct fec_enet_private {int work_rx; int work_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool
FUNC_0(struct fec_enet_private *VAR_6, uint VAR_7)
{
 if (VAR_7 == 0)
  return 0;

 if (VAR_7 & VAR_0)
  VAR_6->work_rx |= (1 << 2);
 if (VAR_7 & VAR_1)
  VAR_6->work_rx |= (1 << 0);
 if (VAR_7 & VAR_2)
  VAR_6->work_rx |= (1 << 1);

 if (VAR_7 & VAR_3)
  VAR_6->work_tx |= (1 << 2);
 if (VAR_7 & VAR_4)
  VAR_6->work_tx |= (1 << 0);
 if (VAR_7 & VAR_5)
  VAR_6->work_tx |= (1 << 1);

 return 1;
}
