
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_fw_client {int dummy; } ;
struct ishtp_device {int dummy; } ;
struct ishtp_cl_data {int cl_device; } ;
struct ishtp_cl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct ishtp_cl*) ;
 int FUNC_3 (struct ishtp_cl*) ;
 int FUNC_4 (struct ishtp_cl*,int ) ;
 int FUNC_5 (struct ishtp_cl*) ;
 struct ishtp_fw_client* FUNC_6 (struct ishtp_device*,int *) ;
 struct ishtp_cl_data* FUNC_7 (struct ishtp_cl*) ;
 int FUNC_8 (struct ishtp_fw_client*) ;
 struct ishtp_device* FUNC_9 (struct ishtp_cl*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct ishtp_cl*,int ) ;
 int FUNC_12 (struct ishtp_cl*,int ) ;
 int FUNC_13 (struct ishtp_cl*,int ) ;

__attribute__((used)) static int FUNC_14(struct ishtp_cl *VAR_6)
{
 int VAR_7;
 struct ishtp_device *VAR_8;
 struct ishtp_fw_client *VAR_9;
 struct ishtp_cl_data *VAR_10 = FUNC_7(VAR_6);

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7) {
  FUNC_1(FUNC_0(VAR_10),
   "ishtp_cl_link failed\n");
  return VAR_7;
 }

 VAR_8 = FUNC_9(VAR_6);


 FUNC_13(VAR_6, VAR_1);
 FUNC_12(VAR_6, VAR_0);

 VAR_9 = FUNC_6(VAR_8, &VAR_4);
 if (!VAR_9) {
  FUNC_1(FUNC_0(VAR_10),
   "ish client uuid not found\n");
  VAR_7 = -VAR_2;
  goto err_cl_unlink;
 }

 FUNC_4(VAR_6,
      FUNC_8(VAR_9));
 FUNC_11(VAR_6, VAR_3);

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7) {
  FUNC_1(FUNC_0(VAR_10),
   "client connect fail\n");
  goto err_cl_unlink;
 }

 FUNC_10(VAR_10->cl_device, VAR_5);
 return 0;

err_cl_unlink:
 FUNC_5(VAR_6);
 return VAR_7;
}
