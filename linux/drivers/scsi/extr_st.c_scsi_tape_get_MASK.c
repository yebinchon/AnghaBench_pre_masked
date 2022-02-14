
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape {int kref; int device; } ;


 struct scsi_tape* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct scsi_tape *FUNC_8(int VAR_4)
{
 struct scsi_tape *VAR_5 = ((void*)0);

 FUNC_3(&VAR_3);
 FUNC_6(&VAR_2);

 VAR_5 = FUNC_0(&VAR_1, VAR_4);
 if (!VAR_5) goto out;

 FUNC_1(&VAR_5->kref);

 if (!VAR_5->device)
  goto out_put;

 if (FUNC_5(VAR_5->device))
  goto out_put;

 goto out;

out_put:
 FUNC_2(&VAR_5->kref, VAR_0);
 VAR_5 = ((void*)0);
out:
 FUNC_7(&VAR_2);
 FUNC_4(&VAR_3);
 return VAR_5;
}
