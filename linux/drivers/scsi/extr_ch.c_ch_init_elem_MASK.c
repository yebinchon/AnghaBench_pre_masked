
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {TYPE_1__* device; } ;
typedef TYPE_2__ scsi_changer ;
typedef int cmd ;
struct TYPE_5__ {int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int*,int,int *,int ,int ) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_3(scsi_changer *VAR_3)
{
 int VAR_4;
 u_char VAR_5[6];

 FUNC_0(VAR_2, "INITIALIZE ELEMENT STATUS, may take some time ...\n");
 FUNC_2(VAR_5,0,sizeof(VAR_5));
 VAR_5[0] = VAR_1;
 VAR_5[1] = (VAR_3->device->lun & 0x7) << 5;
 VAR_4 = FUNC_1(VAR_3, VAR_5, 6, ((void*)0), 0, VAR_0);
 FUNC_0(VAR_2, "... finished\n");
 return VAR_4;
}
