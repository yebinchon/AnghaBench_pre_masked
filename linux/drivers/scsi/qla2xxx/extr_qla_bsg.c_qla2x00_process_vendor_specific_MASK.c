
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* vendor_cmd; } ;
struct TYPE_4__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct bsg_job {struct fc_bsg_request* request; } ;


 int VAR_0 ;
 int FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct bsg_job*) ;
 int FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (struct bsg_job*) ;
 int FUNC_5 (struct bsg_job*) ;
 int FUNC_6 (struct bsg_job*) ;
 int FUNC_7 (struct bsg_job*) ;
 int FUNC_8 (struct bsg_job*) ;
 int FUNC_9 (struct bsg_job*) ;
 int FUNC_10 (struct bsg_job*) ;
 int FUNC_11 (struct bsg_job*) ;
 int FUNC_12 (struct bsg_job*) ;
 int FUNC_13 (struct bsg_job*) ;
 int FUNC_14 (struct bsg_job*) ;
 int FUNC_15 (struct bsg_job*) ;
 int FUNC_16 (struct bsg_job*) ;
 int FUNC_17 (struct bsg_job*) ;
 int FUNC_18 (struct bsg_job*) ;
 int FUNC_19 (struct bsg_job*) ;
 int FUNC_20 (struct bsg_job*) ;
 int FUNC_21 (struct bsg_job*) ;
 int FUNC_22 (struct bsg_job*) ;

__attribute__((used)) static int
FUNC_23(struct bsg_job *VAR_1)
{
 struct fc_bsg_request *VAR_2 = VAR_1->request;

 switch (VAR_2->rqst_data.h_vendor.vendor_cmd[0]) {
 case 139:
  return FUNC_10(VAR_1);

 case 150:
  return FUNC_20(VAR_1);

 case 149:
  return FUNC_21(VAR_1);

 case 151:
  return FUNC_19(VAR_1);

 case 140:
  return FUNC_0(VAR_1);

 case 146:
  return FUNC_1(VAR_1);

 case 138:
  return FUNC_13(VAR_1);

 case 130:
  return FUNC_15(VAR_1);

 case 132:
  return FUNC_14(VAR_1);

 case 137:
  return FUNC_11(VAR_1);

 case 129:
  return FUNC_16(VAR_1);

 case 128:
  return FUNC_17(VAR_1);

 case 136:
  return FUNC_12(VAR_1);

 case 148:
  return FUNC_2(VAR_1);

 case 145:
  return FUNC_22(VAR_1);

 case 135:
  return FUNC_3(VAR_1);

 case 134:
  return FUNC_18(VAR_1);

 case 143:
  return FUNC_5(VAR_1);

 case 133:
  return FUNC_6(VAR_1);

 case 144:
  return FUNC_4(VAR_1);

 case 142:
 case 141:
  return FUNC_9(VAR_1);

 case 147:
  return FUNC_7(VAR_1);

 case 131:
  return FUNC_8(VAR_1);

 default:
  return -VAR_0;
 }
}
