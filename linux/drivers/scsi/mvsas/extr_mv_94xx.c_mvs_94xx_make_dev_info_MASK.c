
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_identify_frame {int dev_type; scalar_t__ phy_id; scalar_t__ ssp_tport; scalar_t__ smp_tport; scalar_t__ stp_tport; scalar_t__ ssp_iport; scalar_t__ smp_iport; scalar_t__ stp_iport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(struct sas_identify_frame *VAR_6)
{
 u32 VAR_7 = 0;

 VAR_7 |= VAR_6->dev_type;
 if (VAR_6->stp_iport)
  VAR_7 |= VAR_4;
 if (VAR_6->smp_iport)
  VAR_7 |= VAR_0;
 if (VAR_6->ssp_iport)
  VAR_7 |= VAR_2;
 if (VAR_6->stp_tport)
  VAR_7 |= VAR_5;
 if (VAR_6->smp_tport)
  VAR_7 |= VAR_1;
 if (VAR_6->ssp_tport)
  VAR_7 |= VAR_3;

 VAR_7 |= (u32)VAR_6->phy_id<<24;
 return VAR_7;
}
