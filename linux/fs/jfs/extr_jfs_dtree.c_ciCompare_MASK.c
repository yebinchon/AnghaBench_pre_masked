
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct ldtentry {int next; int namlen; int * name; } ;
struct idtentry {int next; int namlen; int * name; } ;
struct dtslot {int next; int * name; } ;
struct component_name {int* name; int namlen; } ;
struct TYPE_4__ {int flag; } ;
struct TYPE_5__ {int * slot; TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct component_name * VAR_7,
       dtpage_t * VAR_8,
       int VAR_9,
       int VAR_10)
{
 wchar_t *VAR_11, VAR_12;
 __le16 *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 struct ldtentry *VAR_18;
 struct idtentry *VAR_19;
 struct dtslot *VAR_20;
 int VAR_21;
 VAR_11 = VAR_7->name;
 VAR_14 = VAR_7->namlen;




 if (VAR_8->header.flag & VAR_0) {
  VAR_18 = (struct ldtentry *) & VAR_8->slot[VAR_9];
  VAR_9 = VAR_18->next;
  VAR_13 = VAR_18->name;
  VAR_15 = VAR_18->namlen;
  if (VAR_10 & VAR_5)
   VAR_16 = FUNC_2(VAR_15, VAR_2);
  else
   VAR_16 = FUNC_2(VAR_15, VAR_3);
 }



 else {
  VAR_19 = (struct idtentry *) & VAR_8->slot[VAR_9];
  VAR_9 = VAR_19->next;
  VAR_13 = VAR_19->name;
  VAR_15 = VAR_19->namlen;
  VAR_16 = FUNC_2(VAR_15, VAR_1);
 }


 VAR_16 = FUNC_2(VAR_14, VAR_16);
 for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++, VAR_11++, VAR_13++) {

  if ((VAR_10 & VAR_6) == VAR_6)
   VAR_12 = FUNC_0(FUNC_1(*VAR_13));
  else
   VAR_12 = FUNC_1(*VAR_13);
  if ((VAR_17 = *VAR_11 - VAR_12))
   return VAR_17;
 }

 VAR_14 -= VAR_16;
 VAR_15 -= VAR_16;


 while (VAR_14 > 0 && VAR_15 > 0) {

  VAR_20 = (struct dtslot *) & VAR_8->slot[VAR_9];
  VAR_16 = FUNC_2(VAR_15, VAR_4);
  VAR_16 = FUNC_2(VAR_14, VAR_16);
  VAR_13 = VAR_20->name;
  for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++, VAR_11++, VAR_13++) {

   if ((VAR_10 & VAR_6) == VAR_6)
    VAR_12 = FUNC_0(FUNC_1(*VAR_13));
   else
    VAR_12 = FUNC_1(*VAR_13);

   if ((VAR_17 = *VAR_11 - VAR_12))
    return VAR_17;
  }

  VAR_14 -= VAR_16;
  VAR_15 -= VAR_16;
  VAR_9 = VAR_20->next;
 }

 return (VAR_14 - VAR_15);
}
