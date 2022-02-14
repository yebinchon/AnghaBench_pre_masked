
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct Scsi_Host *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3;

 if (VAR_3 >= 11 && FUNC_1(VAR_2, "CUMANASCSI2", 11) == 0) {
  VAR_2 += 11;
  VAR_3 -= 11;

  if (VAR_3 >= 5 && FUNC_1(VAR_2, "term=", 5) == 0) {
   if (VAR_2[5] == '1')
    FUNC_0(VAR_1, 1);
   else if (VAR_2[5] == '0')
    FUNC_0(VAR_1, 0);
   else
    VAR_4 = -VAR_0;
  } else
   VAR_4 = -VAR_0;
 } else
  VAR_4 = -VAR_0;

 return VAR_4;
}
