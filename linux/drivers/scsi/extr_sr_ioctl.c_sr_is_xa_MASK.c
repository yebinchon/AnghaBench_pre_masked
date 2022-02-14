
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ms_offset; } ;
typedef TYPE_1__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int) ;
 int FUNC_3 (int ,TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int ,unsigned char*) ;
 int VAR_4 ;

int FUNC_5(Scsi_CD *VAR_5)
{
 unsigned char *VAR_6;
 int VAR_7;

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_2(2048, VAR_2 | FUNC_0(VAR_5));
 if (!VAR_6)
  return -VAR_1;
 if (0 == FUNC_4(VAR_5, VAR_5->ms_offset + 16,
    VAR_0, VAR_6)) {
  VAR_7 = (VAR_6[3] == 0x02) ? 1 : 0;
 } else {

  VAR_7 = -1;
 }
 FUNC_1(VAR_6);



 return VAR_7;
}
