
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct unicode_data {unsigned int correction; } ;
struct tree {int dummy; } ;
struct TYPE_3__ {unsigned int maxage; char* type; int childnode; int leaf_emit; int leaf_index; int leaf_size; int leaf_print; int leaf_equal; void* leaf_mark; struct TYPE_3__* next; } ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 void* VAR_2 ;
 struct unicode_data* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct unicode_data *VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;


 VAR_22 = 0;
 VAR_21 = (unsigned int)-1;
 do {
  VAR_20 = VAR_21;
  VAR_21 = 0;
  for (VAR_23 = 0; VAR_23 <= VAR_4; VAR_23++) {
   VAR_19 = &VAR_3[VAR_23];
   if (VAR_21 < VAR_19->correction &&
       VAR_19->correction < VAR_20)
    VAR_21 = VAR_19->correction;
  }
  VAR_22++;
 } while (VAR_21);


 VAR_18 = VAR_22 * 2;
 VAR_17 = FUNC_0(VAR_18, sizeof(struct tree));


 VAR_22 = VAR_18;
 VAR_21 = (unsigned int)-1;
 do {
  VAR_20 = VAR_21;
  VAR_17[--VAR_22].maxage = VAR_20;
  VAR_17[--VAR_22].maxage = VAR_20;
  VAR_21 = 0;
  for (VAR_23 = 0; VAR_23 <= VAR_4; VAR_23++) {
   VAR_19 = &VAR_3[VAR_23];
   if (VAR_21 < VAR_19->correction &&
       VAR_19->correction < VAR_20)
    VAR_21 = VAR_19->correction;
  }
 } while (VAR_21);


 for (VAR_23 = 0; VAR_23 != VAR_18; VAR_23++) {
  VAR_24 = 0;
  while (VAR_1[VAR_24] < VAR_17[VAR_23].maxage)
   VAR_24++;
  VAR_17[VAR_23].maxage = VAR_1[VAR_24-1];
 }


 VAR_17[VAR_18-2].next = &VAR_17[VAR_18-1];
 VAR_17[VAR_18-1].leaf_mark = VAR_8;
 VAR_17[VAR_18-2].leaf_mark = VAR_14;
 for (VAR_23 = 0; VAR_23 != VAR_18-2; VAR_23 += 2) {
  VAR_17[VAR_23].next = &VAR_17[VAR_18-2];
  VAR_17[VAR_23].leaf_mark = VAR_2;
  VAR_17[VAR_23+1].next = &VAR_17[VAR_18-1];
  VAR_17[VAR_23+1].leaf_mark = VAR_2;
 }


 for (VAR_23 = 0; VAR_23 != VAR_18; VAR_23 += 2) {
  VAR_17[VAR_23].type = "nfdicf";
  VAR_17[VAR_23].leaf_equal = VAR_12;
  VAR_17[VAR_23].leaf_print = VAR_15;
  VAR_17[VAR_23].leaf_size = VAR_16;
  VAR_17[VAR_23].leaf_index = VAR_13;
  VAR_17[VAR_23].leaf_emit = VAR_11;

  VAR_17[VAR_23+1].type = "nfdi";
  VAR_17[VAR_23+1].leaf_equal = VAR_6;
  VAR_17[VAR_23+1].leaf_print = VAR_9;
  VAR_17[VAR_23+1].leaf_size = VAR_10;
  VAR_17[VAR_23+1].leaf_index = VAR_7;
  VAR_17[VAR_23+1].leaf_emit = VAR_5;
 }


 for (VAR_23 = 0; VAR_23 != VAR_18; VAR_23++)
  VAR_17[VAR_23].childnode = VAR_0;
}
