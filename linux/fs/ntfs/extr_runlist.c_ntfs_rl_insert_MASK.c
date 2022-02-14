
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ s64 ;
struct TYPE_15__ {scalar_t__ vcn; scalar_t__ length; scalar_t__ lcn; } ;
typedef TYPE_1__ runlist_element ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static inline runlist_element *FUNC_7(runlist_element *VAR_2,
  int VAR_3, runlist_element *VAR_4, int VAR_5, int VAR_6)
{
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 int VAR_9;

 FUNC_0(!VAR_2);
 FUNC_0(!VAR_4);





 if (VAR_6 == 0)
  VAR_8 = (VAR_4[0].vcn > 0);
 else {
  s64 VAR_10;

  VAR_7 = FUNC_3(VAR_2 + VAR_6 - 1, VAR_4);

  VAR_10 = VAR_2[VAR_6 - 1].length;
  if (VAR_7)
   VAR_10 += VAR_4->length;

  VAR_8 = (VAR_4[0].vcn > VAR_2[VAR_6 - 1].vcn + VAR_10);
 }




 VAR_2 = FUNC_6(VAR_2, VAR_3, VAR_3 + VAR_5 - VAR_7 + VAR_8);
 if (FUNC_1(VAR_2))
  return VAR_2;




 if (VAR_7)
  FUNC_2(VAR_2 + VAR_6 - 1, VAR_4);







 VAR_9 = VAR_6 + VAR_5 - VAR_7 + VAR_8;


 FUNC_5(VAR_2, VAR_9, VAR_6, VAR_3 - VAR_6);
 FUNC_4(VAR_2, VAR_6 + VAR_8, VAR_4, VAR_7, VAR_5 - VAR_7);


 VAR_2[VAR_9].vcn = VAR_2[VAR_9 - 1].vcn + VAR_2[VAR_9 - 1].length;

 if (VAR_2[VAR_9].lcn == VAR_0 || VAR_2[VAR_9].lcn == VAR_1)
  VAR_2[VAR_9].length = VAR_2[VAR_9 + 1].vcn - VAR_2[VAR_9].vcn;


 if (VAR_8) {
  if (VAR_6 > 0) {
   VAR_2[VAR_6].vcn = VAR_2[VAR_6 - 1].vcn + VAR_2[VAR_6 - 1].length;
   VAR_2[VAR_6].length = VAR_2[VAR_6 + 1].vcn - VAR_2[VAR_6].vcn;
  } else {
   VAR_2[VAR_6].vcn = 0;
   VAR_2[VAR_6].length = VAR_2[VAR_6 + 1].vcn;
  }
  VAR_2[VAR_6].lcn = VAR_1;
 }
 return VAR_2;
}
