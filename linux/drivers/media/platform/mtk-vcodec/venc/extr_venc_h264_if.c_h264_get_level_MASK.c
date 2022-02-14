
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_h264_inst {int dummy; } ;
 int FUNC_0 (struct venc_h264_inst*,char*,unsigned int) ;
 int FUNC_1 (struct venc_h264_inst*,char*) ;

__attribute__((used)) static unsigned int FUNC_2(struct venc_h264_inst *VAR_0,
       unsigned int VAR_1)
{
 switch (VAR_1) {
 case 141:
  FUNC_1(VAR_0, "unsupported 1B");
  return 0;
 case 140:
  return 10;
 case 139:
  return 11;
 case 138:
  return 12;
 case 137:
  return 13;
 case 136:
  return 20;
 case 135:
  return 21;
 case 134:
  return 22;
 case 133:
  return 30;
 case 132:
  return 31;
 case 131:
  return 32;
 case 130:
  return 40;
 case 129:
  return 41;
 case 128:
  return 42;
 default:
  FUNC_0(VAR_0, "unsupported level %d", VAR_1);
  return 31;
 }
}
