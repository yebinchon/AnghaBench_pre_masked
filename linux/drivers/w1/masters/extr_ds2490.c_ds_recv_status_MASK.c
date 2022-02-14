
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds_status {int dummy; } ;
struct ds_device {int st_buf; int * ep; int udev; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ds_device*,int ,int) ;
 int FUNC_1 (struct ds_status*,int ,int) ;
 int FUNC_2 (struct ds_status*,int ,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int*,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ds_device *VAR_1, struct ds_status *VAR_2,
     bool VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_2)
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 VAR_4 = 0;
 VAR_5 = FUNC_4(VAR_1->udev,
    FUNC_5(VAR_1->udev,
            VAR_1->ep[VAR_0]),
    VAR_1->st_buf, sizeof(VAR_1->st_buf),
    &VAR_4, 1000);
 if (VAR_5 < 0) {
  FUNC_3("Failed to read 1-wire data from 0x%x: err=%d.\n",
         VAR_1->ep[VAR_0], VAR_5);
  return VAR_5;
 }

 if (VAR_3)
  FUNC_0(VAR_1, VAR_1->st_buf, VAR_4);

 if (VAR_2 && VAR_4 >= sizeof(*VAR_2))
  FUNC_1(VAR_2, VAR_1->st_buf, sizeof(*VAR_2));

 return VAR_4;
}
