
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int session_type; struct venus_core* core; } ;
struct venus_core {int enc_codecs; int dec_codecs; } ;


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

bool FUNC_0(struct venus_inst *VAR_12, u32 VAR_13)
{
 struct venus_core *VAR_14 = VAR_12->core;
 u32 VAR_15 = VAR_12->session_type;
 u32 VAR_16;

 switch (VAR_13) {
 case 137:
  VAR_16 = VAR_2;
  break;
 case 138:
  VAR_16 = VAR_1;
  break;
 case 135:
  VAR_16 = VAR_4;
  break;
 case 134:
  VAR_16 = VAR_5;
  break;
 case 133:
  VAR_16 = VAR_6;
  break;
 case 132:
 case 131:
  VAR_16 = VAR_7;
  break;
 case 130:
  VAR_16 = VAR_8;
  break;
 case 129:
  VAR_16 = VAR_9;
  break;
 case 128:
  VAR_16 = VAR_0;
  break;
 case 136:
  VAR_16 = VAR_3;
  break;
 default:
  return 0;
 }

 if (VAR_15 == VAR_11 && VAR_14->enc_codecs & VAR_16)
  return 1;

 if (VAR_15 == VAR_10 && VAR_14->dec_codecs & VAR_16)
  return 1;

 return 0;
}
