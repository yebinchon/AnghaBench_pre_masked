
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eisa_scsi_data {struct Scsi_Host** host; } ;
struct device {int dummy; } ;
struct Scsi_Host {int io_port; } ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*) ;
 struct eisa_scsi_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct eisa_scsi_data*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 int VAR_2;
 struct eisa_scsi_data *VAR_3 = FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  int VAR_4;
  struct Scsi_Host *VAR_5 = VAR_3->host[VAR_2];
  if (!VAR_5)
   continue;
  VAR_4 = VAR_5->io_port;
  FUNC_0(VAR_5);
  FUNC_3(VAR_4, VAR_0);
 }

 FUNC_2(VAR_3);
 return 0;
}
