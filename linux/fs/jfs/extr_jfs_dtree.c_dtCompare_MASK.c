
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct idtentry {int next; int namlen; int * name; } ;
struct dtslot {int next; int * name; } ;
struct component_name {int namlen; int * name; } ;
struct TYPE_3__ {int * slot; } ;
typedef TYPE_1__ dtpage_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct component_name * VAR_2,
       dtpage_t * VAR_3,
       int VAR_4)
{
 wchar_t *VAR_5;
 __le16 *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct idtentry *VAR_11;
 struct dtslot *VAR_12;
 VAR_5 = VAR_2->name;
 VAR_7 = VAR_2->namlen;

 VAR_11 = (struct idtentry *) & VAR_3->slot[VAR_4];
 VAR_4 = VAR_11->next;
 VAR_6 = VAR_11->name;
 VAR_8 = VAR_11->namlen;
 VAR_9 = FUNC_1(VAR_8, VAR_0);


 VAR_9 = FUNC_1(VAR_7, VAR_9);
 if ((VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_9)))
  return VAR_10;

 VAR_7 -= VAR_9;
 VAR_8 -= VAR_9;


 VAR_5 += VAR_9;
 while (VAR_7 > 0 && VAR_8 > 0) {

  VAR_12 = (struct dtslot *) & VAR_3->slot[VAR_4];
  VAR_9 = FUNC_1(VAR_8, VAR_1);
  VAR_9 = FUNC_1(VAR_7, VAR_9);
  VAR_6 = VAR_12->name;
  if ((VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_9)))
   return VAR_10;

  VAR_7 -= VAR_9;
  VAR_8 -= VAR_9;
  VAR_5 += VAR_9;
  VAR_4 = VAR_12->next;
 }

 return (VAR_7 - VAR_8);
}
