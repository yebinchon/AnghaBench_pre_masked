
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape {int index; int kref; } ;
struct device {int dummy; } ;


 struct scsi_tape* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct scsi_tape*) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4)
{
 struct scsi_tape *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = VAR_5->index;

 FUNC_6(FUNC_9(VAR_4));
 FUNC_5(VAR_5);

 FUNC_3(&VAR_3);
 FUNC_2(&VAR_5->kref, VAR_0);
 FUNC_4(&VAR_3);
 FUNC_7(&VAR_2);
 FUNC_1(&VAR_1, VAR_6);
 FUNC_8(&VAR_2);
 return 0;
}
