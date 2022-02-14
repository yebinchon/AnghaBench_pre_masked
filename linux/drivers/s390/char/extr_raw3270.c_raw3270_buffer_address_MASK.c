
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270 {int flags; } ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

void
FUNC_1(struct raw3270 *VAR_2, char *VAR_3, unsigned short VAR_4)
{
 if (FUNC_0(VAR_0, &VAR_2->flags)) {
  VAR_3[0] = (VAR_4 >> 8) & 0x3f;
  VAR_3[1] = VAR_4 & 0xff;
 } else {
  VAR_3[0] = VAR_1[(VAR_4 >> 6) & 0x3f];
  VAR_3[1] = VAR_1[VAR_4 & 0x3f];
 }
}
