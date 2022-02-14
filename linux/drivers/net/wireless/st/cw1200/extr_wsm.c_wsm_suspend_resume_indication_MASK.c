
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wsm_suspend_resume {int link_id; int stop; int multicast; int queue; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wsm_buf*) ;
 int FUNC_1 (struct cw1200_common*,struct wsm_suspend_resume*) ;

__attribute__((used)) static int FUNC_2(struct cw1200_common *VAR_1,
      int VAR_2, struct wsm_buf *VAR_3)
{
 u32 VAR_4;
 struct wsm_suspend_resume VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 VAR_5.link_id = VAR_2;
 VAR_5.stop = !(VAR_4 & 1);
 VAR_5.multicast = !!(VAR_4 & 8);
 VAR_5.queue = (VAR_4 >> 1) & 3;

 FUNC_1(VAR_1, &VAR_5);

 return 0;

underflow:
 return -VAR_0;
}
