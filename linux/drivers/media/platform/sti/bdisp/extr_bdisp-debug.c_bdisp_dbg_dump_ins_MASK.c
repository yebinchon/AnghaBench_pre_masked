
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;



 int VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_19, u32 VAR_20)
{
 FUNC_0(VAR_19, "INS\t0x%08X\t", VAR_20);

 switch (VAR_20 & VAR_13) {
 case 131:
  break;
 case 132:
  FUNC_2(VAR_19, "SRC1=mem - ");
  break;
 case 135:
  FUNC_2(VAR_19, "SRC1=ColorFill - ");
  break;
 case 134:
  FUNC_2(VAR_19, "SRC1=copy - ");
  break;
 case 133:
  FUNC_2(VAR_19, "SRC1=fil - ");
  break;
 default:
  FUNC_2(VAR_19, "SRC1=??? - ");
  break;
 }

 switch (VAR_20 & VAR_14) {
 case 128:
  break;
 case 129:
  FUNC_2(VAR_19, "SRC2=mem - ");
  break;
 case 130:
  FUNC_2(VAR_19, "SRC2=ColorFill - ");
  break;
 default:
  FUNC_2(VAR_19, "SRC2=??? - ");
  break;
 }

 if ((VAR_20 & VAR_15) == VAR_16)
  FUNC_2(VAR_19, "SRC3=mem - ");

 if (VAR_20 & VAR_8)
  FUNC_2(VAR_19, "IVMX - ");
 if (VAR_20 & VAR_3)
  FUNC_2(VAR_19, "CLUT - ");
 if (VAR_20 & VAR_17)
  FUNC_2(VAR_19, "Scale - ");
 if (VAR_20 & VAR_5)
  FUNC_2(VAR_19, "Flicker - ");
 if (VAR_20 & VAR_2)
  FUNC_2(VAR_19, "Clip - ");
 if (VAR_20 & VAR_1)
  FUNC_2(VAR_19, "ColorKey - ");
 if (VAR_20 & VAR_9)
  FUNC_2(VAR_19, "OVMX - ");
 if (VAR_20 & VAR_4)
  FUNC_2(VAR_19, "Deint - ");
 if (VAR_20 & VAR_11)
  FUNC_2(VAR_19, "PlaneMask - ");
 if (VAR_20 & VAR_18)
  FUNC_2(VAR_19, "VC1R - ");
 if (VAR_20 & VAR_12)
  FUNC_2(VAR_19, "Rotate - ");
 if (VAR_20 & VAR_6)
  FUNC_2(VAR_19, "GradFill - ");
 if (VAR_20 & VAR_0)
  FUNC_2(VAR_19, "AQLock - ");
 if (VAR_20 & VAR_10)
  FUNC_2(VAR_19, "Pace - ");
 if (VAR_20 & VAR_7)
  FUNC_2(VAR_19, "IRQ - ");

 FUNC_1(VAR_19, '\n');
}
