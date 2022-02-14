
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int ss_counter; int ss_idle_period; scalar_t__ sd_io; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtsx_chip*) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;

__attribute__((used)) static void FUNC_3(struct rtsx_chip *VAR_2)
{
 if (!FUNC_2(VAR_2) || VAR_2->sd_io)
  return;

 if (FUNC_1(VAR_2) != VAR_1) {
  VAR_2->ss_counter = 0;
  return;
 }

 if (VAR_2->ss_counter < (VAR_2->ss_idle_period / VAR_0))
  VAR_2->ss_counter++;
 else
  FUNC_0(VAR_2);
}
