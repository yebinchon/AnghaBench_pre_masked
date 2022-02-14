
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ flag_ok; scalar_t__ vid_stream; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (scalar_t__,int *,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,scalar_t__) ;

void FUNC_4(struct pvr2_hdw *VAR_1)
{
 if (!VAR_1->flag_ok) return;
 FUNC_2(VAR_0,
     "Device being rendered inoperable");
 if (VAR_1->vid_stream) {
  FUNC_1(VAR_1->vid_stream,((void*)0),0,0);
 }
 VAR_1->flag_ok = 0;
 FUNC_3("flag_ok",VAR_1->flag_ok);
 FUNC_0(VAR_1);
}
