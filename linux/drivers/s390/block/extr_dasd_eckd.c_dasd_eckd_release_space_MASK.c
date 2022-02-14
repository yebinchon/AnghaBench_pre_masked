
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_data_t {int intensity; int stop_unit; int start_unit; } ;
struct dasd_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dasd_device *VAR_2,
       struct format_data_t *VAR_3)
{
 if (VAR_3->intensity & VAR_0)
  return FUNC_0(VAR_2);
 else if (VAR_3->intensity == 0)
  return FUNC_1(VAR_2, VAR_3->start_unit,
          VAR_3->stop_unit);
 else
  return -VAR_1;
}
