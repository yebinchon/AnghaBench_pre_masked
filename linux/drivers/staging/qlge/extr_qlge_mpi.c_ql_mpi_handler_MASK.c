
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; } ;
struct mbox_params {int out_count; int* mbox_out; int * mbox_in; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*,...) ;
 int FUNC_1 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_2 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_3 (struct ql_adapter*) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_6 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_7 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_8 (struct ql_adapter*) ;
 int FUNC_9 (struct ql_adapter*) ;
 int FUNC_10 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_11 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_12 (struct ql_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct ql_adapter *VAR_5, struct mbox_params *VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_6->out_count;


 VAR_6->out_count = 1;
 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_5, VAR_4, VAR_5->ndev,
     "Could not read MPI, resetting ASIC!\n");
  FUNC_8(VAR_5);
  goto end;
 }

 switch (VAR_6->mbox_out[0]) {





 case 131:
 case 132:
 case 130:
 case 128:
 case 134:
 case 133:
 case 129:






  VAR_6->out_count = VAR_8;
  VAR_7 = FUNC_2(VAR_5, VAR_6);
  return VAR_7;






 case 138:
  VAR_7 = FUNC_4(VAR_5);
  break;






 case 140:
 case 139:
  VAR_7 = FUNC_3(VAR_5);
  break;

 case 136:
  FUNC_7(VAR_5, VAR_6);
  break;

 case 137:
  FUNC_6(VAR_5, VAR_6);
  break;

 case 142:



  if (VAR_6->mbox_in[0] == VAR_3) {
   VAR_6->out_count = VAR_8;
   VAR_7 = FUNC_2(VAR_5, VAR_6);
   VAR_6->mbox_out[0] = 132;
   return VAR_7;
  }
  FUNC_5(VAR_5, VAR_6);
  break;

 case 145:
  FUNC_10(VAR_5, VAR_6);
  break;

 case 144:
  FUNC_11(VAR_5, VAR_6);
  break;




 case 141:



  if (VAR_6->mbox_in[0] == VAR_3) {
   VAR_6->out_count = VAR_8;
   VAR_7 = FUNC_2(VAR_5, VAR_6);
   VAR_6->mbox_out[0] = 133;
   return VAR_7;
  }
  FUNC_0(VAR_5, VAR_4, VAR_5->ndev,
     "Firmware initialization failed.\n");
  VAR_7 = -VAR_2;
  FUNC_9(VAR_5);
  break;

 case 135:
  FUNC_0(VAR_5, VAR_4, VAR_5->ndev, "System Error.\n");
  FUNC_9(VAR_5);
  VAR_7 = -VAR_2;
  break;

 case 146:
  FUNC_1(VAR_5, VAR_6);
  break;

 case 143:

  break;
 default:
  FUNC_0(VAR_5, VAR_4, VAR_5->ndev,
     "Unsupported AE %.08x.\n", VAR_6->mbox_out[0]);

 }
end:
 FUNC_12(VAR_5, VAR_0, VAR_1);






 VAR_6->out_count = VAR_8;
 return VAR_7;
}
