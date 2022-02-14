
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ vcn; scalar_t__ length; } ;
typedef TYPE_1__ runlist_element ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static inline runlist_element *FUNC_5(runlist_element *VAR_0, int VAR_1,
  runlist_element *VAR_2, int VAR_3, int VAR_4)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_2);


 VAR_0 = FUNC_4(VAR_0, VAR_1, VAR_1 + VAR_3 + 1);
 if (FUNC_1(VAR_0))
  return VAR_0;






 FUNC_3(VAR_0, VAR_4 + 1 + VAR_3, VAR_4, VAR_1 - VAR_4);
 FUNC_2(VAR_0, VAR_4 + 1, VAR_2, 0, VAR_3);


 VAR_0[VAR_4].length = VAR_0[VAR_4+1].vcn - VAR_0[VAR_4].vcn;
 VAR_0[VAR_4+VAR_3+1].vcn = VAR_0[VAR_4+VAR_3].vcn + VAR_0[VAR_4+VAR_3].length;
 VAR_0[VAR_4+VAR_3+1].length = VAR_0[VAR_4+VAR_3+2].vcn - VAR_0[VAR_4+VAR_3+1].vcn;

 return VAR_0;
}
