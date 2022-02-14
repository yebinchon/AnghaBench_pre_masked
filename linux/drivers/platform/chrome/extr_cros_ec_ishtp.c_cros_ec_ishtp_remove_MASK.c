
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_device {int dummy; } ;
struct ishtp_cl_data {int work_ec_evt; int work_ishtp_reset; } ;
struct ishtp_cl {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ishtp_cl*) ;
 struct ishtp_cl_data* FUNC_2 (struct ishtp_cl*) ;
 struct ishtp_cl* FUNC_3 (struct ishtp_cl_device*) ;
 int FUNC_4 (struct ishtp_cl_device*) ;

__attribute__((used)) static int FUNC_5(struct ishtp_cl_device *VAR_0)
{
 struct ishtp_cl *VAR_1 = FUNC_3(VAR_0);
 struct ishtp_cl_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->work_ishtp_reset);
 FUNC_0(&VAR_2->work_ec_evt);
 FUNC_1(VAR_1);
 FUNC_4(VAR_0);

 return 0;
}
