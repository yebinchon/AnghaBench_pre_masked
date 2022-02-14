
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {scalar_t__ base; int ticnt_save; int ticnt_en_save; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s3c_rtc *VAR_3)
{
 VAR_3->ticnt_en_save = FUNC_1(VAR_3->base + VAR_0);
 VAR_3->ticnt_en_save &= VAR_2;
 VAR_3->ticnt_save = FUNC_0(VAR_3->base + VAR_1);
}
