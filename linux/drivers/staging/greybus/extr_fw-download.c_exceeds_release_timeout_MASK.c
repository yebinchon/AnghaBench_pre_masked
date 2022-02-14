
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_request {int timedout; int firmware_id; int release_timeout_j; struct fw_download* fw_download; } ;
struct fw_download {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct fw_download*,struct fw_request*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fw_request *VAR_2)
{
 struct fw_download *VAR_3 = VAR_2->fw_download;

 if (FUNC_2(VAR_1, VAR_2->release_timeout_j))
  return 0;

 FUNC_0(VAR_3->parent,
  "Firmware download didn't finish in time, abort: %d\n",
  VAR_2->firmware_id);

 VAR_2->timedout = 1;
 FUNC_1(VAR_3, VAR_2);

 return -VAR_0;
}
