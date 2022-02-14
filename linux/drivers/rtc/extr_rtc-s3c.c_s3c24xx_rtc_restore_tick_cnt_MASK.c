
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {scalar_t__ base; int ticnt_save; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct s3c_rtc *VAR_1)
{
 FUNC_0(VAR_1->ticnt_save, VAR_1->base + VAR_0);
}
