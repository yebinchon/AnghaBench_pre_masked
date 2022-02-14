
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; } ;
struct dasd_ccw_req {int memdev; int callback; } ;
struct ciw {scalar_t__ cmd; } ;
typedef int __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 struct ciw* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dasd_device*,struct dasd_ccw_req*,char*,int ) ;
 int FUNC_4 (struct dasd_ccw_req*,int ) ;
 int FUNC_5 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_6 (int ,int,int ,struct dasd_device*,int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(struct dasd_device *VAR_10,
       void **VAR_11,
       int *VAR_12, __u8 VAR_13)
{
 struct ciw *VAR_14;
 char *VAR_15 = ((void*)0);
 int VAR_16;
 struct dasd_ccw_req *VAR_17;





 VAR_14 = FUNC_2(VAR_10->cdev, VAR_0);
 if (!VAR_14 || VAR_14->cmd != VAR_1) {
  VAR_16 = -VAR_6;
  goto out_error;
 }
 VAR_15 = FUNC_8(VAR_3, VAR_8 | VAR_7);
 if (!VAR_15) {
  VAR_16 = -VAR_5;
  goto out_error;
 }
 VAR_17 = FUNC_6(VAR_2, 1 ,
       0,
       VAR_10, ((void*)0));
 if (FUNC_1(VAR_17)) {
  FUNC_0(VAR_4, VAR_10, "%s",
         "Could not allocate RCD request");
  VAR_16 = -VAR_5;
  goto out_error;
 }
 FUNC_3(VAR_10, VAR_17, VAR_15, VAR_13);
 VAR_17->callback = VAR_9;
 VAR_16 = FUNC_5(VAR_17);



 FUNC_4(VAR_17, VAR_17->memdev);
 if (VAR_16)
  goto out_error;

 *VAR_12 = VAR_3;
 *VAR_11 = VAR_15;
 return 0;
out_error:
 FUNC_7(VAR_15);
 *VAR_11 = ((void*)0);
 *VAR_12 = 0;
 return VAR_16;
}
