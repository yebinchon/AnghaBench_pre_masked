
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ale_ports; scalar_t__ ale_regs; } ;
struct cpsw_ale {TYPE_1__ params; } ;
struct ale_control_info {int port_offset; int port_shift; int offset; int shift; int bits; } ;


 int FUNC_0 (struct ale_control_info*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct ale_control_info* VAR_1 ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct cpsw_ale *VAR_2, int VAR_3, int VAR_4)
{
 const struct ale_control_info *VAR_5;
 int VAR_6, VAR_7;
 u32 VAR_8;

 if (VAR_4 < 0 || VAR_4 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5 = &VAR_1[VAR_4];
 if (VAR_5->port_offset == 0 && VAR_5->port_shift == 0)
  VAR_3 = 0;

 if (VAR_3 < 0 || VAR_3 >= VAR_2->params.ale_ports)
  return -VAR_0;

 VAR_6 = VAR_5->offset + (VAR_3 * VAR_5->port_offset);
 VAR_7 = VAR_5->shift + (VAR_3 * VAR_5->port_shift);

 VAR_8 = FUNC_2(VAR_2->params.ale_regs + VAR_6) >> VAR_7;
 return VAR_8 & FUNC_1(VAR_5->bits);
}
