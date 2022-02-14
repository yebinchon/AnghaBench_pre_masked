
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct clariion_dh_data* handler_data; } ;
struct clariion_dh_data {size_t lun_state; void* default_sp; int port; void* current_sp; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_device*,struct clariion_dh_data*) ;
 int FUNC_1 (struct scsi_device*,struct clariion_dh_data*) ;
 int FUNC_2 (struct clariion_dh_data*) ;
 struct clariion_dh_data* FUNC_3 (int,int ) ;
 int * VAR_7 ;
 int FUNC_4 (int ,struct scsi_device*,char*,int ,void*,int ,int ,void*) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_8)
{
 struct clariion_dh_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9) , VAR_3);
 if (!VAR_9)
  return VAR_5;
 VAR_9->lun_state = VAR_0;
 VAR_9->default_sp = VAR_2;
 VAR_9->current_sp = VAR_2;

 VAR_10 = FUNC_1(VAR_8, VAR_9);
 if (VAR_10 != VAR_6)
  goto failed;

 VAR_10 = FUNC_0(VAR_8, VAR_9);
 if (VAR_10 != VAR_6)
  goto failed;

 FUNC_4(VAR_4, VAR_8,
      "%s: connected to SP %c Port %d (%s, default SP %c)\n",
      VAR_1, VAR_9->current_sp + 'A',
      VAR_9->port, VAR_7[VAR_9->lun_state],
      VAR_9->default_sp + 'A');

 VAR_8->handler_data = VAR_9;
 return VAR_6;

failed:
 FUNC_2(VAR_9);
 return VAR_10;
}
