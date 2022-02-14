
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int runlist_element ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline runlist_element *FUNC_7(runlist_element *VAR_0,
  int VAR_1, int VAR_2)
{
 runlist_element *VAR_3;

 VAR_1 = FUNC_1(VAR_1 * sizeof(*VAR_0));
 VAR_2 = FUNC_1(VAR_2 * sizeof(*VAR_0));
 if (VAR_1 == VAR_2)
  return VAR_0;

 VAR_3 = FUNC_5(VAR_2);
 FUNC_0(!VAR_3);

 if (FUNC_2(VAR_0 != ((void*)0))) {
  if (FUNC_6(VAR_1 > VAR_2))
   VAR_1 = VAR_2;
  FUNC_3(VAR_3, VAR_0, VAR_1);
  FUNC_4(VAR_0);
 }
 return VAR_3;
}
