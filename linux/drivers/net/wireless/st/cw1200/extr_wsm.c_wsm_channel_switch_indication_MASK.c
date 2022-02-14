
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_buf {int dummy; } ;
struct cw1200_common {int channel_switch_done; scalar_t__ channel_switch_in_progress; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wsm_buf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cw1200_common*) ;

__attribute__((used)) static int FUNC_4(struct cw1200_common *VAR_1,
      struct wsm_buf *VAR_2)
{
 FUNC_0(FUNC_1(VAR_2));

 VAR_1->channel_switch_in_progress = 0;
 FUNC_2(&VAR_1->channel_switch_done);

 FUNC_3(VAR_1);

 return 0;

underflow:
 return -VAR_0;
}
