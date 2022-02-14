
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; } ;
struct dasd_ccw_req {int retries; int callback; int flags; } ;
struct ciw {scalar_t__ cmd; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ciw* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dasd_device*,struct dasd_ccw_req*,int *,int ) ;
 int FUNC_3 (struct dasd_ccw_req*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct dasd_device *VAR_6,
        struct dasd_ccw_req *VAR_7,
        __u8 *VAR_8,
        __u8 VAR_9)
{
 struct ciw *VAR_10;
 int VAR_11;




 VAR_10 = FUNC_0(VAR_6->cdev, VAR_0);
 if (!VAR_10 || VAR_10->cmd != VAR_3)
  return -VAR_4;

 FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_1(VAR_2, &VAR_7->flags);
 FUNC_4(VAR_1, &VAR_7->flags);
 VAR_7->retries = 5;
 VAR_7->callback = VAR_5;
 VAR_11 = FUNC_3(VAR_7);
 return VAR_11;
}
