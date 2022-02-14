
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct hrtimer*,int ,int ) ;
 int FUNC_1 (long,long) ;

__attribute__((used)) static void FUNC_2(struct hrtimer *VAR_1, unsigned long VAR_2)
{
 long VAR_3 = VAR_2 / 1000;
 long VAR_4 = (VAR_2 % 1000) * 1000000;
 ktime_t VAR_5 = FUNC_1(VAR_3, VAR_4);

 FUNC_0(VAR_1, VAR_5, VAR_0);
}
