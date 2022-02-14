
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {int sge_control; } ;
struct adapter {scalar_t__ regs; scalar_t__ open_device_map; struct sge* sge; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct adapter *VAR_3, netdev_features_t VAR_4)
{
 struct sge *VAR_5 = VAR_3->sge;

 if (VAR_4 & VAR_2)
  VAR_5->sge_control |= VAR_1;
 else
  VAR_5->sge_control &= ~VAR_1;
 if (VAR_3->open_device_map) {
  FUNC_1(VAR_5->sge_control, VAR_3->regs + VAR_0);
  FUNC_0(VAR_3->regs + VAR_0);
 }
}
