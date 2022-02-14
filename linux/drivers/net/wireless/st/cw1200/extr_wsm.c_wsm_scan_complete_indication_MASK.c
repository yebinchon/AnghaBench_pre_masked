
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_scan_complete {void* num_channels; void* psm; int status; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wsm_buf*) ;
 void* FUNC_1 (struct wsm_buf*) ;
 int FUNC_2 (struct cw1200_common*,struct wsm_scan_complete*) ;

__attribute__((used)) static int FUNC_3(struct cw1200_common *VAR_1,
     struct wsm_buf *VAR_2)
{
 struct wsm_scan_complete VAR_3;
 VAR_3.status = FUNC_0(VAR_2);
 VAR_3.psm = FUNC_1(VAR_2);
 VAR_3.num_channels = FUNC_1(VAR_2);
 FUNC_2(VAR_1, &VAR_3);

 return 0;

underflow:
 return -VAR_0;
}
