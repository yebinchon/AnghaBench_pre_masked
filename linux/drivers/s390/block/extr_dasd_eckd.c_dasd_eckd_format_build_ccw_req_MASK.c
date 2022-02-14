
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_data_t {int dummy; } ;
struct eckd_count {int dummy; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int dummy; } ;


 struct dasd_ccw_req* FUNC_0 (struct dasd_device*,struct format_data_t*,int,struct eckd_count*,int) ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_device*,struct format_data_t*,int,struct eckd_count*,int) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_device*,int *,struct format_data_t*,int) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_3(struct dasd_device *VAR_0,
          struct format_data_t *VAR_1, int VAR_2,
          int VAR_3, struct eckd_count *VAR_4, int VAR_5)
{
 struct dasd_ccw_req *VAR_6;

 if (!VAR_4) {
  VAR_6 = FUNC_2(VAR_0, ((void*)0), VAR_1, VAR_2);
 } else {
  if (VAR_3)
   VAR_6 = FUNC_1(VAR_0, VAR_1,
           VAR_2,
           VAR_4, VAR_5);
  else
   VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2,
       VAR_4, VAR_5);
 }

 return VAR_6;
}
