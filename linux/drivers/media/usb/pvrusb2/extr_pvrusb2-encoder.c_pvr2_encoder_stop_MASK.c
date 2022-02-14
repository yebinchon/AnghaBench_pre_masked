
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int active_stream_type; } ;


 int VAR_0 ;


 int FUNC_0 (struct pvr2_hdw*,int ,int,int,int,int) ;
 int FUNC_1 (struct pvr2_hdw*,int,int) ;

int FUNC_2(struct pvr2_hdw *VAR_1)
{
 int VAR_2;


 FUNC_1(VAR_1, 0x0048, 0xffffffff);

 switch (VAR_1->active_stream_type) {
 case 128:
  VAR_2 = FUNC_0(VAR_1,VAR_0,3,
        0x01,0x01,0x14);
  break;
 case 129:
  VAR_2 = FUNC_0(VAR_1,VAR_0,3,
        0x01,0,0x13);
  break;
 default:
  VAR_2 = FUNC_0(VAR_1,VAR_0,3,
        0x01,0,0x13);
  break;
 }

 return VAR_2;
}
