
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_1__ ;


typedef int s64 ;
struct TYPE_26__ {int vcn; int length; scalar_t__ lcn; } ;
typedef TYPE_1__ runlist_element ;
typedef void* VCN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,int,TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,int,TYPE_1__*,int,int) ;
 int FUNC_10 (TYPE_1__*,int,int ,int) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_12 (TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,int,TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_14 (TYPE_1__*,int,TYPE_1__*,int,int) ;
 scalar_t__ FUNC_15 (int) ;

runlist_element *FUNC_16(runlist_element *VAR_5,
  runlist_element *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;

 int VAR_15 = 0;
 VCN VAR_16 = 0;
 if (FUNC_15(!VAR_6))
  return VAR_5;
 if (FUNC_2(VAR_6) || FUNC_2(VAR_5))
  return FUNC_1(-VAR_0);


 if (FUNC_15(!VAR_5)) {
  VAR_5 = VAR_6;

  if (FUNC_15(VAR_5[0].vcn)) {

   for (VAR_11 = 0; FUNC_3(VAR_5[VAR_11].length); VAR_11++)
    ;
   VAR_11++;
   VAR_5 = FUNC_11(VAR_5, VAR_11, VAR_11 + 1);
   if (FUNC_2(VAR_5))
    return VAR_5;

   FUNC_10(VAR_5, 1, 0, VAR_11);
   VAR_5[0].vcn = 0;
   VAR_5[0].lcn = VAR_4;
   VAR_5[0].length = VAR_5[1].vcn;
  }
  goto finished;
 }

 VAR_8 = VAR_7 = 0;


 while (VAR_6[VAR_8].length && VAR_6[VAR_8].lcn < VAR_3)
  VAR_8++;


 FUNC_0(!VAR_6[VAR_8].length);


 VAR_9 = VAR_8;






 for (; VAR_5[VAR_7].length; VAR_7++) {
  if (VAR_5[VAR_7].vcn + VAR_5[VAR_7].length > VAR_6[VAR_9].vcn)
   break;
 }
 VAR_10 = VAR_7;


 if ((VAR_5[VAR_7].vcn == VAR_6[VAR_8].vcn) && (VAR_5[VAR_7].lcn >= 0) &&
   (VAR_6[VAR_8].lcn >= 0)) {
  FUNC_6(((void*)0), "Run lists overlap. Cannot merge!");
  return FUNC_1(-VAR_1);
 }


 for (VAR_12 = VAR_8; VAR_6[VAR_12].length; VAR_12++)
  ;
 for (VAR_11 = VAR_7; VAR_5[VAR_11].length; VAR_11++)
  ;

 if (VAR_6[VAR_12].lcn == VAR_2)
  VAR_16 = VAR_6[VAR_15 = VAR_12].vcn;


 for (VAR_14 = VAR_12; VAR_14 >= 0 && VAR_6[VAR_14].lcn < VAR_3; VAR_14--)
  ;
 for (VAR_13 = VAR_11; VAR_13 >= 0 && VAR_5[VAR_13].lcn < VAR_3; VAR_13--)
  ;

 {
 bool VAR_17;
 bool VAR_18;
 int VAR_19 = VAR_11 + 1;
 int VAR_20 = VAR_14 - VAR_9 + 1;

 VAR_17 = ((VAR_5[VAR_10].lcn < VAR_4) ||
    (VAR_5[VAR_10].vcn == VAR_6[VAR_9].vcn));
 VAR_18 = ((VAR_5[VAR_10].lcn >= VAR_4) &&
   ((VAR_5[VAR_10].vcn + VAR_5[VAR_10].length) <=
    (VAR_6[VAR_12 - 1].vcn + VAR_6[VAR_12 - 1].length)));


 if (VAR_18 && !VAR_5[VAR_10].length)
  VAR_20++;
 if (VAR_15 && (VAR_5[VAR_10].vcn + VAR_5[VAR_10].length > VAR_6[VAR_12 - 1].vcn))
  VAR_18 = 0;






 if (VAR_17) {
  if (VAR_18)
   VAR_5 = FUNC_13(VAR_5, VAR_19, VAR_6 + VAR_9, VAR_20, VAR_10);
  else
   VAR_5 = FUNC_9(VAR_5, VAR_19, VAR_6 + VAR_9, VAR_20, VAR_10);
 } else {
  if (VAR_18)
   VAR_5 = FUNC_8(VAR_5, VAR_19, VAR_6 + VAR_9, VAR_20, VAR_10);
  else
   VAR_5 = FUNC_14(VAR_5, VAR_19, VAR_6 + VAR_9, VAR_20, VAR_10);
 }
 if (FUNC_2(VAR_5)) {
  FUNC_6(((void*)0), "Merge failed.");
  return VAR_5;
 }
 FUNC_7(VAR_6);
 if (VAR_15) {
  FUNC_4("Triggering marker code.");
  for (VAR_19 = VAR_11; VAR_5[VAR_19].length; VAR_19++)
   ;

  if (VAR_5[VAR_19].vcn <= VAR_16) {
   int VAR_21 = 0;

   if (VAR_5[VAR_19].vcn == VAR_16) {
    FUNC_4("Old marker = 0x%llx, replacing "
      "with LCN_ENOENT.",
      (unsigned long long)
      VAR_5[VAR_19].lcn);
    VAR_5[VAR_19].lcn = VAR_2;
    goto finished;
   }





   if (VAR_5[VAR_19].lcn == VAR_2) {
    VAR_19--;
    VAR_21 = 1;
   }
   if (VAR_5[VAR_19].lcn != VAR_4) {

    if (!VAR_21) {
     VAR_5 = FUNC_12(VAR_5, VAR_19,
       VAR_19 + 2);
     VAR_21 = 2;
    }
    VAR_19++;

    if (VAR_21 != 1)
     VAR_5[VAR_19].vcn = VAR_5[VAR_19 - 1].vcn +
       VAR_5[VAR_19 - 1].length;
    VAR_5[VAR_19].lcn = VAR_4;

    VAR_21--;
   }
   VAR_5[VAR_19].length = VAR_16 - VAR_5[VAR_19].vcn;

   VAR_19++;
   if (!VAR_21)
    VAR_5 = FUNC_12(VAR_5, VAR_19, VAR_19 + 1);
   VAR_5[VAR_19].vcn = VAR_16;
   VAR_5[VAR_19].lcn = VAR_2;
   VAR_5[VAR_19].length = (s64)0;
  }
 }
 }

finished:

 FUNC_4("Merged runlist:");
 FUNC_5(VAR_5);
 return VAR_5;
}
