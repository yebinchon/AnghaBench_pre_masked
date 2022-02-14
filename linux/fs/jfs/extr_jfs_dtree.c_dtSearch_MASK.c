
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
struct super_block {int dummy; } ;
struct metapage {int dummy; } ;
struct ldtentry {int inumber; } ;
struct inode {struct super_block* i_sb; } ;
struct component_name {int name; int namlen; } ;
struct btstack {int nsplit; struct btframe* top; } ;
struct btframe {int index; struct metapage* mp; void* bn; } ;
typedef size_t s8 ;
typedef void* s64 ;
typedef int pxd_t ;
typedef scalar_t__ ino_t ;
struct TYPE_8__ {int nextindex; int flag; } ;
struct TYPE_9__ {int * slot; TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;
struct TYPE_10__ {int mntflag; int l2bsize; } ;


 int FUNC_0 (struct btstack*) ;
 int VAR_0 ;
 int FUNC_1 (struct btstack*,void*,int) ;
 int FUNC_2 (struct btstack*) ;
 scalar_t__ FUNC_3 (struct btstack*) ;
 int FUNC_4 (struct inode*,void*,struct metapage*,int,TYPE_2__*,int) ;
 size_t* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct metapage*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__* FUNC_7 (struct super_block*) ;
 int FUNC_8 (int ,int ) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (struct component_name*,TYPE_2__*,size_t,int) ;
 int FUNC_11 (struct component_name*) ;
 int FUNC_12 (struct component_name*,TYPE_2__*,size_t) ;
 int FUNC_13 (struct super_block*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct inode *VAR_13, struct component_name * VAR_14, ino_t * VAR_15,
      struct btstack * VAR_16, int VAR_17)
{
 int VAR_18 = 0;
 int VAR_19 = 1;
 s64 VAR_20;
 struct metapage *VAR_21;
 dtpage_t *VAR_22;
 s8 *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 struct btframe *VAR_27;
 pxd_t *VAR_28;
 int VAR_29 = 288;
 ino_t VAR_30;
 struct component_name VAR_31;
 struct super_block *VAR_32 = VAR_13->i_sb;

 VAR_31.name = FUNC_15(VAR_9 + 1, sizeof(wchar_t),
       VAR_6);
 if (!VAR_31.name) {
  VAR_18 = -VAR_4;
  goto dtSearch_Exit2;
 }



 FUNC_8(VAR_31.name, VAR_14->name);
 VAR_31.namlen = VAR_14->namlen;


 if ((FUNC_7(VAR_32)->mntflag & VAR_10) == VAR_10) {
  FUNC_11(&VAR_31);
 }
 FUNC_0(VAR_16);


 VAR_16->nsplit = 1;
 for (VAR_20 = 0;;) {

  FUNC_4(VAR_13, VAR_20, VAR_21, VAR_29, VAR_22, VAR_18);
  if (VAR_18)
   goto dtSearch_Exit1;


  VAR_23 = FUNC_5(VAR_22);




  for (VAR_24 = 0, VAR_26 = VAR_22->header.nextindex; VAR_26; VAR_26 >>= 1) {
   VAR_25 = VAR_24 + (VAR_26 >> 1);

   if (VAR_22->header.flag & VAR_0) {

    VAR_19 =
        FUNC_10(&VAR_31, VAR_22, VAR_23[VAR_25],
           FUNC_7(VAR_32)->mntflag);
   } else {


    VAR_19 = FUNC_12(&VAR_31, VAR_22, VAR_23[VAR_25]);


   }
   if (VAR_19 == 0) {






    if (VAR_22->header.flag & VAR_0) {
     VAR_30 = FUNC_16(
   ((struct ldtentry *) & VAR_22->slot[VAR_23[VAR_25]])->inumber);




     if (VAR_17 == VAR_8) {
      *VAR_15 = VAR_30;
      VAR_18 = 0;
      goto out;
     }




     if (VAR_17 == VAR_7) {
      *VAR_15 = VAR_30;
      VAR_18 = -VAR_1;
      goto out;
     }




     if ((VAR_17 == VAR_11 ||
          VAR_17 == VAR_12) &&
         *VAR_15 != VAR_30) {
      VAR_18 = -VAR_5;
      goto out;
     }





     *VAR_15 = VAR_30;
     VAR_27 = VAR_16->top;
     VAR_27->bn = VAR_20;
     VAR_27->index = VAR_25;
     VAR_27->mp = VAR_21;

     VAR_18 = 0;
     goto dtSearch_Exit1;
    }




    goto getChild;
   }

   if (VAR_19 > 0) {
    VAR_24 = VAR_25 + 1;
    --VAR_26;
   }
  }
  if (VAR_22->header.flag & VAR_0) {



   if (VAR_17 == VAR_8 || VAR_17 == VAR_11 ||
       VAR_17 == VAR_12) {
    VAR_18 = -VAR_3;
    goto out;
   }






   *VAR_15 = 0;
   VAR_27 = VAR_16->top;
   VAR_27->bn = VAR_20;
   VAR_27->index = VAR_24;
   VAR_27->mp = VAR_21;

   VAR_18 = 0;
   goto dtSearch_Exit1;
  }







  VAR_25 = VAR_24 ? VAR_24 - 1 : VAR_24;




       getChild:

  if (FUNC_3(VAR_16)) {



   FUNC_13(VAR_32, "stack overrun!\n");
   FUNC_2(VAR_16);
   VAR_18 = -VAR_2;
   goto out;
  }
  VAR_16->nsplit++;


  FUNC_1(VAR_16, VAR_20, VAR_25);


  VAR_28 = (pxd_t *) & VAR_22->slot[VAR_23[VAR_25]];
  VAR_20 = FUNC_9(VAR_28);
  VAR_29 = FUNC_17(VAR_28) << FUNC_7(VAR_13->i_sb)->l2bsize;


  FUNC_6(VAR_21);
 }

      out:
 FUNC_6(VAR_21);

      dtSearch_Exit1:

 FUNC_14(VAR_31.name);

      dtSearch_Exit2:

 return VAR_18;
}
