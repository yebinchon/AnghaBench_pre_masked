
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_6__ {int* firsts; TYPE_1__* device; } ;
typedef TYPE_2__ scsi_changer ;
typedef int cmd ;
struct TYPE_5__ {int lun; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int*,int,int *,int ,int ) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_3(scsi_changer *VAR_3, u_int VAR_4, u_int VAR_5, int VAR_6)
{
 u_char VAR_7[10];

 FUNC_0("position: 0x%x\n",VAR_5);
 if (0 == VAR_4)
  VAR_4 = VAR_3->firsts[VAR_0];
 FUNC_2(VAR_7,0,sizeof(VAR_7));
 VAR_7[0] = VAR_2;
 VAR_7[1] = (VAR_3->device->lun & 0x7) << 5;
 VAR_7[2] = (VAR_4 >> 8) & 0xff;
 VAR_7[3] = VAR_4 & 0xff;
 VAR_7[4] = (VAR_5 >> 8) & 0xff;
 VAR_7[5] = VAR_5 & 0xff;
 VAR_7[8] = VAR_6 ? 1 : 0;
 return FUNC_1(VAR_3, VAR_7, 10, ((void*)0), 0, VAR_1);
}
