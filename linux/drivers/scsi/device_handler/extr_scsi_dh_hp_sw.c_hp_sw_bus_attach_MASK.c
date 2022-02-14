
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hp_sw_dh_data* handler_data; } ;
struct hp_sw_dh_data {scalar_t__ path_state; struct scsi_device* sdev; int retries; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct scsi_device*,struct hp_sw_dh_data*) ;
 int FUNC_1 (struct hp_sw_dh_data*) ;
 struct hp_sw_dh_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct scsi_device*,char*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_9)
{
 struct hp_sw_dh_data *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  return VAR_6;
 VAR_10->path_state = VAR_3;
 VAR_10->retries = VAR_4;
 VAR_10->sdev = VAR_9;

 VAR_11 = FUNC_0(VAR_9, VAR_10);
 if (VAR_11 != VAR_8)
  goto failed;
 if (VAR_10->path_state == VAR_3) {
  VAR_11 = VAR_7;
  goto failed;
 }

 FUNC_3(VAR_5, VAR_9, "%s: attached to %s path\n",
      VAR_1, VAR_10->path_state == VAR_2?
      "active":"passive");

 VAR_9->handler_data = VAR_10;
 return VAR_8;
failed:
 FUNC_1(VAR_10);
 return VAR_11;
}
