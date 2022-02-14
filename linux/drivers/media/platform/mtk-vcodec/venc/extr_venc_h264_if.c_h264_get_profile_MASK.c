
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
 case 132:
  return 66;
 case 128:
  return 77;
 case 129:
  return 100;
 case 131:
  FUNC_1(VAR_0, "unsupported CONSTRAINED_BASELINE");
  return 0;
 case 130:
  FUNC_1(VAR_0, "unsupported EXTENDED");
  return 0;
 default:
  FUNC_0(VAR_0, "unsupported profile %d", VAR_1);
  return 100;
 }
}
