
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
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_10, u32 VAR_11)
{
 FUNC_0(VAR_10, "TTY\t0x%08X\t", VAR_11);
 FUNC_0(VAR_10, "Pitch=%d - ", VAR_11 & 0xFFFF);

 switch ((VAR_11 & VAR_3) >> VAR_4) {
 case 131:
  FUNC_2(VAR_10, "RGB565 - ");
  break;
 case 130:
  FUNC_2(VAR_10, "RGB888 - ");
  break;
 case 129:
  FUNC_2(VAR_10, "xRGB888 - ");
  break;
 case 133:
  FUNC_2(VAR_10, "ARGB8888 - ");
  break;
 case 132:
  FUNC_2(VAR_10, "NV12 - ");
  break;
 case 128:
  FUNC_2(VAR_10, "YUV420P - ");
  break;
 default:
  FUNC_2(VAR_10, "ColorFormat ??? - ");
  break;
 }

 if (VAR_11 & VAR_0)
  FUNC_2(VAR_10, "AlphaRange - ");
 if (VAR_11 & VAR_5)
  FUNC_2(VAR_10, "CrNotCb - ");
 if (VAR_11 & VAR_8)
  FUNC_2(VAR_10, "MB - ");
 if (VAR_11 & VAR_7)
  FUNC_2(VAR_10, "HSO inverse - ");
 if (VAR_11 & VAR_9)
  FUNC_2(VAR_10, "VSO inverse - ");
 if (VAR_11 & VAR_6)
  FUNC_2(VAR_10, "Dither - ");
 if (VAR_11 & VAR_2)
  FUNC_2(VAR_10, "Write CHROMA - ");
 if (VAR_11 & VAR_1)
  FUNC_2(VAR_10, "BigEndian - ");

 FUNC_1(VAR_10, '\n');
}
