
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {int dummy; } ;
struct bsg_job {int dummy; } ;
typedef int blk_status_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (struct fc_rport*) ;
 struct fc_rport* FUNC_2 (struct bsg_job*) ;

__attribute__((used)) static int FUNC_3(struct bsg_job *VAR_2)
{
 struct fc_rport *VAR_3 = FUNC_2(VAR_2);
 blk_status_t VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 switch (VAR_4) {
 case 129:
  break;
 case 128:
  return -VAR_0;
 default:
  return -VAR_1;
 }

 return FUNC_0(VAR_2);
}
