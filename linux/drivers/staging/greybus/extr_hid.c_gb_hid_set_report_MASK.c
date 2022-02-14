
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct gb_operation {TYPE_3__* connection; TYPE_1__* request; } ;
struct gb_hid_set_report_request {int report; void* report_id; void* report_type; } ;
struct gb_hid {int bundle; int connection; } ;
struct TYPE_6__ {TYPE_2__* bundle; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct gb_hid_set_report_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct gb_operation* FUNC_1 (int ,int ,int,int ,int ) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_7(struct gb_hid *VAR_3, u8 VAR_4, u8 VAR_5,
        unsigned char *VAR_6, int VAR_7)
{
 struct gb_hid_set_report_request *VAR_8;
 struct gb_operation *VAR_9;
 int VAR_10, VAR_11 = sizeof(*VAR_8) + VAR_7 - 1;

 VAR_10 = FUNC_4(VAR_3->bundle);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_1(VAR_3->connection,
     VAR_1, VAR_11, 0,
     VAR_2);
 if (!VAR_9) {
  FUNC_5(VAR_3->bundle);
  return -VAR_0;
 }

 VAR_8 = VAR_9->request->payload;
 VAR_8->report_type = VAR_4;
 VAR_8->report_id = VAR_5;
 FUNC_6(VAR_8->report, VAR_6, VAR_7);

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_9->connection->bundle->dev,
   "failed to set report: %d\n", VAR_10);
 } else {
  VAR_10 = VAR_7;
 }

 FUNC_2(VAR_9);
 FUNC_5(VAR_3->bundle);

 return VAR_10;
}
