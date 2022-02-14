
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int scan_work; scalar_t__ req_no; int req_list; int ref; } ;
struct ccw_device {int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct zfcp_adapter*) ;
 int FUNC_2 (struct zfcp_adapter*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct zfcp_adapter* FUNC_6 (struct ccw_device*) ;
 int FUNC_7 (struct ccw_device*,int ,char*) ;
 struct zfcp_adapter* FUNC_8 (struct ccw_device*) ;
 int FUNC_9 (struct zfcp_adapter*) ;
 int FUNC_10 (struct zfcp_adapter*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct ccw_device *VAR_0)
{
 struct zfcp_adapter *VAR_1 = FUNC_8(VAR_0);

 if (!VAR_1) {
  VAR_1 = FUNC_6(VAR_0);

  if (FUNC_1(VAR_1)) {
   FUNC_3(&VAR_0->dev,
    "Setting up data structures for the "
    "FCP adapter failed\n");
   return FUNC_2(VAR_1);
  }
  FUNC_5(&VAR_1->ref);
 }


 FUNC_0(!FUNC_11(VAR_1->req_list));
 VAR_1->req_no = 0;

 FUNC_7(VAR_0, 0, "ccsonl1");
 FUNC_10(VAR_1);
 FUNC_4(&VAR_1->scan_work);
 FUNC_9(VAR_1);
 return 0;
}
