
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_7__ {TYPE_1__* device; } ;
typedef TYPE_2__ scsi_changer ;
typedef int cmd ;
struct TYPE_6__ {int lun; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_2__*,int*,int,int*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_8(scsi_changer *VAR_4, u_int VAR_5,
       int VAR_6, int VAR_7, u_char *VAR_8)
{
 u_char VAR_9[12];
 u_char *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(512, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_0("%s %s voltag: 0x%x => \"%s\"\n",
  VAR_7 ? "clear" : "set",
  VAR_6 ? "alternate" : "primary",
  VAR_5, VAR_8);
 FUNC_7(VAR_9,0,sizeof(VAR_9));
 VAR_9[0] = VAR_3;
 VAR_9[1] = ((VAR_4->device->lun & 0x7) << 5) |
  FUNC_3(VAR_4,VAR_5);
 VAR_9[2] = (VAR_5 >> 8) & 0xff;
 VAR_9[3] = VAR_5 & 0xff;
 VAR_9[5] = VAR_7
  ? (VAR_6 ? 0x0d : 0x0c)
  : (VAR_6 ? 0x0b : 0x0a);

 VAR_9[9] = 255;

 FUNC_6(VAR_10,VAR_8,32);
 FUNC_1(VAR_10);

 VAR_11 = FUNC_2(VAR_4, VAR_9, 12, VAR_10, 256, VAR_0);
 FUNC_4(VAR_10);
 return VAR_11;
}
