
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5)
{
 int VAR_6 = 0;

 FUNC_3(&VAR_3);


 if (!FUNC_1()) {
     VAR_6 = FUNC_2(VAR_5);
     goto unlock;
 }





 VAR_2++;
 if (VAR_2 > 1)
  goto unlock;

 if (FUNC_0(VAR_4,
      VAR_1) <= VAR_0)
  VAR_6 = FUNC_2(((void*)0));

unlock:
 FUNC_4(&VAR_3);
 return VAR_6;
}
