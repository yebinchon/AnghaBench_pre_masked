
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hrtimer*,int ,int ) ;
 int FUNC_1 (struct hrtimer*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct hrtimer* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_7)
{
 struct hrtimer *VAR_8 = FUNC_3(&VAR_5);

 if (!VAR_4)
  return;

 FUNC_0(VAR_8, VAR_0, VAR_1);
 VAR_8->function = VAR_6;

 FUNC_1(VAR_8, FUNC_2(VAR_3),
        VAR_2);
}
