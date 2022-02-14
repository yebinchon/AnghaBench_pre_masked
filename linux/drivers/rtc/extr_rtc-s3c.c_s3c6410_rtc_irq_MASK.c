
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {scalar_t__ base; int rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s3c_rtc *VAR_3, int VAR_4)
{
 FUNC_0(VAR_3->rtc, 1, VAR_0 | VAR_1);
 FUNC_1(VAR_4, VAR_3->base + VAR_2);
}
