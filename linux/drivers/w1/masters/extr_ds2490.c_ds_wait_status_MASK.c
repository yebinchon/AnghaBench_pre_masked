
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds_status {int status; } ;
struct ds_device {int * st_buf; int * ep; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ds_device*,int *,int) ;
 int FUNC_1 (struct ds_device*,struct ds_status*,int) ;
 int FUNC_2 (struct ds_device*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct ds_device *VAR_3, struct ds_status *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 do {
  VAR_4->status = 0;
  VAR_5 = FUNC_1(VAR_3, VAR_4, 0);
 } while (!(VAR_4->status & VAR_2) && !(VAR_5 < 0) && ++VAR_6 < 100);

 if (VAR_5 >= 16 && VAR_4->status & VAR_1) {
  FUNC_3("Resetting device after ST_EPOF.\n");
  FUNC_2(VAR_3);

  VAR_6 = 101;
 }





 if (VAR_5 > 16 || VAR_6 >= 100 || VAR_5 < 0)
  FUNC_0(VAR_3, VAR_3->st_buf, VAR_5);





 if (VAR_6 >= 100 || VAR_5 < 0)
  return -1;
 else
  return 0;
}
