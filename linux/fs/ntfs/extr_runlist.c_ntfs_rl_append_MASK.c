
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ lcn; scalar_t__ length; scalar_t__ vcn; } ;
typedef TYPE_1__ runlist_element ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static inline runlist_element *FUNC_7(runlist_element *VAR_1,
  int VAR_2, runlist_element *VAR_3, int VAR_4, int VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_3);


 if ((VAR_5 + 1) < VAR_2)
  VAR_6 = FUNC_3(VAR_3 + VAR_4 - 1, VAR_1 + VAR_5 + 1);


 VAR_1 = FUNC_6(VAR_1, VAR_2, VAR_2 + VAR_4 - VAR_6);
 if (FUNC_1(VAR_1))
  return VAR_1;






 if (VAR_6)
  FUNC_2(VAR_3 + VAR_4 - 1, VAR_1 + VAR_5 + 1);


 VAR_7 = VAR_5 + VAR_4 + 1;


 FUNC_5(VAR_1, VAR_7, VAR_5 + 1 + VAR_6, VAR_2 - (VAR_5 + 1 + VAR_6));
 FUNC_4(VAR_1, VAR_5 + 1, VAR_3, 0, VAR_4);


 VAR_1[VAR_5].length = VAR_1[VAR_5 + 1].vcn - VAR_1[VAR_5].vcn;


 if (VAR_1[VAR_7].lcn == VAR_0)
  VAR_1[VAR_7].vcn = VAR_1[VAR_7 - 1].vcn + VAR_1[VAR_7 - 1].length;

 return VAR_1;
}
