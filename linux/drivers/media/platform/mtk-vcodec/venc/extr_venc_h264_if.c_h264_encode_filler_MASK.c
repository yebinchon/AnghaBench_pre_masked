
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_h264_inst {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (unsigned char*,int,int) ;
 int FUNC_3 (struct venc_h264_inst*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct venc_h264_inst *VAR_2, void *VAR_3,
          int VAR_4)
{
 unsigned char *VAR_5 = VAR_3;

 if (VAR_4 < VAR_0) {
  FUNC_3(VAR_2, "filler size too small %d", VAR_4);
  return;
 }

 FUNC_1(VAR_5, VAR_1, FUNC_0(VAR_1));
 VAR_4 -= VAR_0;
 VAR_5 += VAR_0;
 FUNC_2(VAR_5, 0xff, VAR_4);
}
