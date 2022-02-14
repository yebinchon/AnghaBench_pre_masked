
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {scalar_t__ dev_type; scalar_t__ fourcc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct tm6000_core*,int ,int ) ;
 int FUNC_1 (struct tm6000_core*,int ,int) ;

void FUNC_2(struct tm6000_core *VAR_4)
{
 if (VAR_4->dev_type == VAR_0) {
  int VAR_5;

  VAR_5 = FUNC_0(VAR_4, VAR_2, 0) & 0xfc;
  if (VAR_4->fourcc == VAR_3)
   FUNC_1(VAR_4, VAR_2, VAR_5);
  else
   FUNC_1(VAR_4, VAR_2, VAR_5 | 1);
 } else {
  if (VAR_4->fourcc == VAR_3)
   FUNC_1(VAR_4, VAR_1, 0xd0);
  else
   FUNC_1(VAR_4, VAR_1, 0x90);
 }
}
