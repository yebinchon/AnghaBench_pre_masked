
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {int ticnt_en_save; scalar_t__ base; int ticnt_save; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct s3c_rtc *VAR_2)
{
 unsigned int VAR_3;

 FUNC_1(VAR_2->ticnt_save, VAR_2->base + VAR_1);
 if (VAR_2->ticnt_en_save) {
  VAR_3 = FUNC_0(VAR_2->base + VAR_0);
  FUNC_2(VAR_3 | VAR_2->ticnt_en_save, VAR_2->base + VAR_0);
 }
}
