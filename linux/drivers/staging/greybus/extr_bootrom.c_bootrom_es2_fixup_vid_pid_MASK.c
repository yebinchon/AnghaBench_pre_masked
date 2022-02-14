
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_interface {int quirks; void* product_id; void* vendor_id; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct gb_bootrom_get_vid_pid_response {int product_id; int vendor_id; } ;
struct gb_bootrom {struct gb_connection* connection; } ;
typedef int response ;
struct TYPE_2__ {int dev; struct gb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,void*,void*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct gb_connection*,int ,int *,int ,struct gb_bootrom_get_vid_pid_response*,int) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gb_bootrom *VAR_2)
{
 struct gb_bootrom_get_vid_pid_response VAR_3;
 struct gb_connection *VAR_4 = VAR_2->connection;
 struct gb_interface *VAR_5 = VAR_4->bundle->intf;
 int VAR_6;

 if (!(VAR_5->quirks & VAR_1))
  return;

 VAR_6 = FUNC_2(VAR_4, VAR_0,
    ((void*)0), 0, &VAR_3, sizeof(VAR_3));
 if (VAR_6) {
  FUNC_1(&VAR_4->bundle->dev,
   "Bootrom get vid/pid operation failed (%d)\n", VAR_6);
  return;
 }
 VAR_5->vendor_id = FUNC_3(VAR_3.vendor_id);
 VAR_5->product_id = FUNC_3(VAR_3.product_id);

 FUNC_0(&VAR_4->bundle->dev, "Bootrom got vid (0x%x)/pid (0x%x)\n",
  VAR_5->vendor_id, VAR_5->product_id);
}
