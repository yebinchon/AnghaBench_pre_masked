
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pvr2_hdw {TYPE_1__* hdw_desc; int ctl_lock; } ;
struct TYPE_2__ {scalar_t__ flag_has_cx25840; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_hdw*,int ,int,int,int,...) ;
 int FUNC_3 (struct pvr2_hdw*,int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct pvr2_hdw *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 if (VAR_1->hdw_desc->flag_has_cx25840) {
  VAR_3 = 1;
 } else {
  VAR_3 = 0;
 }
 VAR_2 |= FUNC_2(VAR_1, VAR_0,4, 3,
     VAR_3,0,0);

 VAR_2 |= FUNC_2(VAR_1, VAR_0,4, 8,0,0,0);
 VAR_2 |= FUNC_2(VAR_1, VAR_0,4, 0,3,0,0);
 VAR_2 |= FUNC_2(VAR_1, VAR_0,4,15,0,0,0);



 VAR_2 |= FUNC_2(VAR_1, VAR_0, 2, 4, 1);

 return VAR_2;
}
