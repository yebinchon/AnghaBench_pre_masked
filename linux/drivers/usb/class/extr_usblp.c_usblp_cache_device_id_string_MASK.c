
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usblp {char* device_id_string; int minor; TYPE_1__* intf; } ;
typedef int __be16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int,...) ;
 int FUNC_2 (struct usblp*,int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct usblp *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_2, 0, VAR_2->device_id_string, VAR_1 - 1);
 if (VAR_3 < 0) {
  FUNC_1(&VAR_2->intf->dev,
   "usblp%d: error = %d reading IEEE-1284 Device ID string\n",
   VAR_2->minor, VAR_3);
  VAR_2->device_id_string[0] = VAR_2->device_id_string[1] = '\0';
  return -VAR_0;
 }




 VAR_4 = FUNC_0(*((__be16 *)VAR_2->device_id_string));
 if (VAR_4 < 2)
  VAR_4 = 2;
 else if (VAR_4 >= VAR_1)
  VAR_4 = VAR_1 - 1;
 VAR_2->device_id_string[VAR_4] = '\0';

 FUNC_1(&VAR_2->intf->dev, "usblp%d Device ID string [len=%d]=\"%s\"\n",
  VAR_2->minor, VAR_4, &VAR_2->device_id_string[2]);

 return VAR_4;
}
