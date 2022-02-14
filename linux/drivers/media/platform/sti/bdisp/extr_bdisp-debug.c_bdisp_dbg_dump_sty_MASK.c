
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
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_12,
          u32 VAR_13, u32 VAR_14, char *VAR_15)
{
 bool VAR_16, VAR_17, VAR_18;

 FUNC_0(VAR_12, "%s\t0x%08X\t", VAR_15, VAR_13);

 if (!VAR_14 || !VAR_15 || (FUNC_3(VAR_15) < 2))
  goto done;

 VAR_16 = VAR_15[FUNC_3(VAR_15) - 1] == '1';
 VAR_17 = VAR_15[FUNC_3(VAR_15) - 1] == '2';
 VAR_18 = VAR_15[FUNC_3(VAR_15) - 1] == '3';

 FUNC_0(VAR_12, "Pitch=%d - ", VAR_13 & 0xFFFF);

 switch ((VAR_13 & VAR_6) >> VAR_7) {
 case 131:
  FUNC_2(VAR_12, "RGB565 - ");
  break;
 case 130:
  FUNC_2(VAR_12, "RGB888 - ");
  break;
 case 129:
  FUNC_2(VAR_12, "xRGB888 - ");
  break;
 case 133:
  FUNC_2(VAR_12, "ARGB888 - ");
  break;
 case 132:
  FUNC_2(VAR_12, "NV12 - ");
  break;
 case 128:
  FUNC_2(VAR_12, "YUV420P - ");
  break;
 default:
  FUNC_2(VAR_12, "ColorFormat ??? - ");
  break;
 }

 if ((VAR_13 & VAR_4) && !VAR_18)
  FUNC_2(VAR_12, "AlphaRange - ");
 if ((VAR_13 & VAR_0) && !VAR_18)
  FUNC_2(VAR_12, "A1SubSet - ");
 if ((VAR_13 & VAR_9) && !VAR_16)
  FUNC_2(VAR_12, "MB - ");
 if (VAR_13 & VAR_8)
  FUNC_2(VAR_12, "HSO inverse - ");
 if (VAR_13 & VAR_10)
  FUNC_2(VAR_12, "VSO inverse - ");
 if ((VAR_13 & VAR_1) && (VAR_16 || VAR_17))
  FUNC_2(VAR_12, "ChromaExt - ");
 if ((VAR_13 & VAR_3) && VAR_18)
  FUNC_2(VAR_12, "Blank Acc - ");
 if ((VAR_13 & VAR_11) && !VAR_18)
  FUNC_2(VAR_12, "SubByte - ");
 if ((VAR_13 & VAR_2) && !VAR_18)
  FUNC_2(VAR_12, "RGBExpand - ");
 if ((VAR_13 & VAR_5) && !VAR_18)
  FUNC_2(VAR_12, "BigEndian - ");

done:
 FUNC_1(VAR_12, '\n');
}
