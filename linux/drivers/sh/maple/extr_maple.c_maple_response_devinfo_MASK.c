
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {scalar_t__ unit; size_t port; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct maple_device*) ;
 int FUNC_1 (struct maple_device*,char) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;

__attribute__((used)) static void FUNC_2(struct maple_device *VAR_6,
       char *VAR_7)
{
 char VAR_8;
 if (!VAR_4 || (VAR_3 == 2) || !VAR_2) {
  if ((VAR_6->unit == 0) && (VAR_0[VAR_6->port] == 0)) {
   VAR_0[VAR_6->port] = 1;
   FUNC_0(VAR_6);
  } else {
   if (VAR_6->unit != 0)
    FUNC_0(VAR_6);
   if (VAR_6->unit == 0) {
    VAR_1[VAR_6->port] = 0;
    FUNC_0(VAR_6);
   }
  }
 }
 if (VAR_6->unit == 0) {
  VAR_8 = VAR_7[2] & 0x1F;
  if (VAR_8 ^ VAR_5[VAR_6->port]) {
   FUNC_1(VAR_6, VAR_8);
   VAR_5[VAR_6->port] = VAR_8;
  }
 }
}
