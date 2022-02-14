
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct clariion_dh_data* handler_data; } ;
struct clariion_dh_data {scalar_t__ lun_state; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_device*,struct clariion_dh_data*) ;
 int FUNC_1 (struct scsi_device*,struct clariion_dh_data*) ;
 int FUNC_2 (char const*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_6, const char *VAR_7)
{
 struct clariion_dh_data *VAR_8 = VAR_6->handler_data;
 unsigned int VAR_9 = 0, VAR_10 = 0, VAR_11;
 const char *VAR_12 = VAR_7;
 int VAR_13 = VAR_5;

 if ((FUNC_2(VAR_7, "%u", &VAR_11) != 1) || (VAR_11 != 2))
  return -VAR_4;

 while (*VAR_12++)
  ;
 if ((FUNC_2(VAR_12, "%u", &VAR_10) != 1) || (VAR_10 > 1))
  return -VAR_4;

 while (*VAR_12++)
  ;
 if ((FUNC_2(VAR_12, "%u", &VAR_9) != 1) || (VAR_9 > 1))
  return -VAR_4;

 if (VAR_10)
  VAR_8->flags |= VAR_3;
 else
  VAR_8->flags &= ~VAR_3;

 if (VAR_9)
  VAR_8->flags |= VAR_0;
 else
  VAR_8->flags &= ~VAR_0;






 if (VAR_8->lun_state != VAR_1)
  goto done;

 VAR_8->lun_state = VAR_2;
 VAR_13 = FUNC_1(VAR_6, VAR_8);
 if (VAR_13 != VAR_5)
  goto done;


 VAR_13 = FUNC_0(VAR_6, VAR_8);

done:
 return VAR_13;
}
