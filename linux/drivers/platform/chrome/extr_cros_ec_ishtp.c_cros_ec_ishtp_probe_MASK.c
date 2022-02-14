
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_cl_device {int dummy; } ;
struct TYPE_2__ {int wait_queue; } ;
struct ishtp_cl_data {int work_ec_evt; int work_ishtp_reset; TYPE_1__ response; struct ishtp_cl_device* cl_device; struct ishtp_cl* cros_ish_cl; } ;
struct ishtp_cl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ishtp_cl_data*) ;
 int FUNC_2 (struct ishtp_cl*) ;
 struct ishtp_cl_data* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 struct ishtp_cl* FUNC_6 (struct ishtp_cl_device*) ;
 int FUNC_7 (struct ishtp_cl*) ;
 int FUNC_8 (struct ishtp_cl*) ;
 int FUNC_9 (struct ishtp_cl*) ;
 int FUNC_10 (struct ishtp_cl*) ;
 int FUNC_11 (struct ishtp_cl_device*) ;
 int FUNC_12 (struct ishtp_cl_device*) ;
 int FUNC_13 (struct ishtp_cl_device*) ;
 int FUNC_14 (struct ishtp_cl*,struct ishtp_cl_data*) ;
 int FUNC_15 (struct ishtp_cl*,int ) ;
 int FUNC_16 (struct ishtp_cl_device*,struct ishtp_cl*) ;
 int VAR_5 ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct ishtp_cl_device *VAR_6)
{
 int VAR_7;
 struct ishtp_cl *VAR_8;
 struct ishtp_cl_data *VAR_9 =
  FUNC_3(FUNC_11(VAR_6),
        sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;


 FUNC_4(&VAR_3);

 VAR_8 = FUNC_6(VAR_6);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto end_ishtp_cl_alloc_error;
 }

 FUNC_16(VAR_6, VAR_8);
 FUNC_14(VAR_8, VAR_9);
 VAR_9->cros_ish_cl = VAR_8;
 VAR_9->cl_device = VAR_6;

 FUNC_5(&VAR_9->response.wait_queue);

 FUNC_0(&VAR_9->work_ishtp_reset,
    VAR_5);
 FUNC_0(&VAR_9->work_ec_evt,
    VAR_4);

 VAR_7 = FUNC_2(VAR_8);
 if (VAR_7)
  goto end_ishtp_cl_init_error;

 FUNC_12(VAR_6);

 FUNC_17(&VAR_3);


 VAR_7 = FUNC_1(VAR_9);
 if (VAR_7)
  goto end_cros_ec_dev_init_error;

 return 0;

end_cros_ec_dev_init_error:
 FUNC_15(VAR_8, VAR_2);
 FUNC_7(VAR_8);
 FUNC_10(VAR_8);
 FUNC_8(VAR_8);
 FUNC_13(VAR_6);
end_ishtp_cl_init_error:
 FUNC_9(VAR_8);
end_ishtp_cl_alloc_error:
 FUNC_17(&VAR_3);
 return VAR_7;
}
