
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {unsigned int io_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_4)
{
 unsigned int VAR_5 = VAR_4->device->host->io_port;
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_1(VAR_5, VAR_1, VAR_2 | VAR_0);

 VAR_7 = FUNC_0(VAR_5, VAR_3);
 VAR_8 = FUNC_0(VAR_5, VAR_3);
 VAR_9 = FUNC_0(VAR_5, VAR_3);
 VAR_10 = FUNC_0(VAR_5, VAR_3);

 VAR_6 = (VAR_9 << 16) | (VAR_8 << 8) | (VAR_7 << 0);



 return VAR_6;
}
