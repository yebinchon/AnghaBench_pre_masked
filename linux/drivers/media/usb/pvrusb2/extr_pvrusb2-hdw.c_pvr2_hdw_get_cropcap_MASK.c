
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_cropcap {int dummy; } ;
struct pvr2_hdw {int big_lock; int cropcap_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_cropcap*,int *,int) ;
 int FUNC_3 (struct pvr2_hdw*) ;

int FUNC_4(struct pvr2_hdw *VAR_0, struct v4l2_cropcap *VAR_1)
{
 int VAR_2 = 0;
 FUNC_1(VAR_0->big_lock);
 VAR_2 = FUNC_3(VAR_0);
 if (!VAR_2) {
  FUNC_2(VAR_1, &VAR_0->cropcap_info, sizeof(VAR_0->cropcap_info));
 }
 FUNC_0(VAR_0->big_lock);
 return VAR_2;
}
