
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct clariion_dh_data {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_device*,struct clariion_dh_data*) ;
 int FUNC_1 (struct scsi_device*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_2,
     struct clariion_dh_data *VAR_3)
{
 int VAR_4 = VAR_1;

 if (!FUNC_1(VAR_2, 0xC0, VAR_3->buffer,
          VAR_0))
  VAR_4 = FUNC_0(VAR_2, VAR_3);

 return VAR_4;
}
