
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct Scsi_Host {int io_port; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, unsigned int VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_3->io_port;

 FUNC_2(VAR_3);
 FUNC_3(VAR_4, VAR_0);
 FUNC_1(VAR_1, ((void*)0));
 return 0;
}
