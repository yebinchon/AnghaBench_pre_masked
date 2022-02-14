
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct inode {TYPE_7__* i_sb; } ;
struct ext4_inode_info {scalar_t__* i_data; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef scalar_t__ __le32 ;
struct TYPE_14__ {unsigned int s_blocksize; } ;
struct TYPE_13__ {unsigned int s_bitmap_maxbytes; } ;
struct TYPE_12__ {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_11__ {TYPE_2__* bh; scalar_t__* p; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*) ;
 unsigned int FUNC_3 (TYPE_7__*) ;

 struct ext4_inode_info* FUNC_4 (struct inode*) ;

 int VAR_0 ;
 TYPE_6__* FUNC_5 (TYPE_7__*) ;

 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct inode*,int,int*,int *) ;
 TYPE_1__* FUNC_8 (struct inode*,int,int*,TYPE_1__*,scalar_t__*) ;
 int FUNC_9 (int *,struct inode*,TYPE_2__*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_10 (int *,struct inode*,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int,int) ;

int FUNC_12(handle_t *VAR_1, struct inode *VAR_2,
     ext4_lblk_t VAR_3, ext4_lblk_t VAR_4)
{
 struct ext4_inode_info *VAR_5 = FUNC_4(VAR_2);
 __le32 *VAR_6 = VAR_5->i_data;
 int VAR_7 = FUNC_2(VAR_2->i_sb);
 ext4_lblk_t VAR_8[4], VAR_9[4];
 Indirect VAR_10[4], VAR_11[4];
 Indirect *VAR_12, *VAR_13;
 Indirect *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 ext4_lblk_t VAR_16;
 __le32 VAR_17 = 0, VAR_18 = 0;
 int VAR_19 = 0, VAR_20 = 0;
 unsigned VAR_21 = VAR_2->i_sb->s_blocksize;

 VAR_16 = (FUNC_5(VAR_2->i_sb)->s_bitmap_maxbytes + VAR_21-1)
     >> FUNC_3(VAR_2->i_sb);
 if (VAR_4 >= VAR_16)
  VAR_4 = VAR_16;
 if ((VAR_3 >= VAR_4) || (VAR_3 > VAR_16))
  return 0;

 VAR_19 = FUNC_7(VAR_2, VAR_3, VAR_8, ((void*)0));
 VAR_20 = FUNC_7(VAR_2, VAR_4, VAR_9, ((void*)0));

 FUNC_1(VAR_19 > VAR_20);

 if ((VAR_19 == 1) && (VAR_19 == VAR_20)) {

  FUNC_10(VAR_1, VAR_2, ((void*)0), VAR_6 + VAR_8[0],
          VAR_6 + VAR_9[0]);
  return 0;
 } else if (VAR_20 > VAR_19) {







  if (VAR_19 == 1) {




   FUNC_10(VAR_1, VAR_2, ((void*)0), VAR_6 + VAR_8[0],
           VAR_6 + VAR_0);
   goto end_range;
  }


  VAR_12 = VAR_14 = FUNC_8(VAR_2, VAR_19, VAR_8, VAR_10, &VAR_17);
  if (VAR_17) {
   if (VAR_12 == VAR_10) {

    FUNC_9(VAR_1, VAR_2, ((void*)0),
        &VAR_17, &VAR_17+1, (VAR_10+VAR_19-1) - VAR_12);
    *VAR_12->p = 0;
   } else {

    FUNC_0(VAR_12->bh, "get_write_access");
    FUNC_9(VAR_1, VAR_2, VAR_12->bh,
     VAR_12->p,
     VAR_12->p+1, (VAR_10+VAR_19-1) - VAR_12);
   }
  }





  while (VAR_12 > VAR_10) {
   FUNC_9(VAR_1, VAR_2, VAR_12->bh,
    VAR_12->p + 1,
    (__le32 *)VAR_12->bh->b_data+VAR_7,
    (VAR_10+VAR_19-1) - VAR_12);
   VAR_12--;
  }

end_range:
  VAR_13 = VAR_15 = FUNC_8(VAR_2, VAR_20, VAR_9, VAR_11, &VAR_18);
  if (VAR_18) {
   if (VAR_13 == VAR_11) {






    goto do_indirects;
   }
  } else {






   VAR_13->p++;
  }





  while (VAR_13 > VAR_11) {
   FUNC_9(VAR_1, VAR_2, VAR_13->bh,
        (__le32 *)VAR_13->bh->b_data,
        VAR_13->p,
        (VAR_11+VAR_20-1) - VAR_13);
   VAR_13--;
  }
  goto do_indirects;
 }


 VAR_12 = VAR_14 = FUNC_8(VAR_2, VAR_19, VAR_8, VAR_10, &VAR_17);
 VAR_13 = VAR_15 = FUNC_8(VAR_2, VAR_20, VAR_9, VAR_11, &VAR_18);


 if (VAR_17) {
  int VAR_22 = FUNC_11(VAR_12 - VAR_10, VAR_13 - VAR_11);
  int VAR_23;
  int VAR_24 = 1;

  for (VAR_23 = 0; VAR_23 <= VAR_22; VAR_23++) {
   if (VAR_8[VAR_23] != VAR_9[VAR_23]) {
    VAR_24 = 0;
    break;
   }
  }

  if (!VAR_24) {
   if (VAR_12 == VAR_10) {

    FUNC_9(VAR_1, VAR_2, ((void*)0),
         &VAR_17, &VAR_17+1,
         (VAR_10+VAR_19-1) - VAR_12);
    *VAR_12->p = 0;
   } else {

    FUNC_0(VAR_12->bh, "get_write_access");
    FUNC_9(VAR_1, VAR_2, VAR_12->bh,
         VAR_12->p,
         VAR_12->p+1,
         (VAR_10+VAR_19-1) - VAR_12);
   }
  }
 }

 if (!VAR_18) {






  VAR_13->p++;
 }

 while (VAR_12 > VAR_10 || VAR_13 > VAR_11) {
  int VAR_25 = (VAR_10+VAR_19-1) - VAR_12;
  int VAR_26 = (VAR_11+VAR_20-1) - VAR_13;

  if (VAR_12 > VAR_10 && VAR_13 > VAR_11 &&
      VAR_12->bh->b_blocknr == VAR_13->bh->b_blocknr) {




   FUNC_9(VAR_1, VAR_2, VAR_12->bh,
        VAR_12->p + 1,
        VAR_13->p,
        (VAR_10+VAR_19-1) - VAR_12);
   goto cleanup;
  }
  if (VAR_12 > VAR_10 && VAR_25 <= VAR_26) {
   FUNC_9(VAR_1, VAR_2, VAR_12->bh,
        VAR_12->p + 1,
        (__le32 *)VAR_12->bh->b_data+VAR_7,
        (VAR_10+VAR_19-1) - VAR_12);
   VAR_12--;
  }
  if (VAR_13 > VAR_11 && VAR_26 <= VAR_25) {
   FUNC_9(VAR_1, VAR_2, VAR_13->bh,
        (__le32 *)VAR_13->bh->b_data,
        VAR_13->p,
        (VAR_11+VAR_20-1) - VAR_13);
   VAR_13--;
  }
 }

cleanup:
 while (VAR_14 && VAR_14 > VAR_10) {
  FUNC_0(VAR_14->bh, "call brelse");
  FUNC_6(VAR_14->bh);
  VAR_14--;
 }
 while (VAR_15 && VAR_15 > VAR_11) {
  FUNC_0(VAR_15->bh, "call brelse");
  FUNC_6(VAR_15->bh);
  VAR_15--;
 }
 return 0;

do_indirects:

 switch (VAR_8[0]) {
 default:
  if (++VAR_19 >= VAR_20)
   break;
  VAR_17 = VAR_6[129];
  if (VAR_17) {
   FUNC_9(VAR_1, VAR_2, ((void*)0), &VAR_17, &VAR_17+1, 1);
   VAR_6[129] = 0;
  }

 case 129:
  if (++VAR_19 >= VAR_20)
   break;
  VAR_17 = VAR_6[130];
  if (VAR_17) {
   FUNC_9(VAR_1, VAR_2, ((void*)0), &VAR_17, &VAR_17+1, 2);
   VAR_6[130] = 0;
  }

 case 130:
  if (++VAR_19 >= VAR_20)
   break;
  VAR_17 = VAR_6[128];
  if (VAR_17) {
   FUNC_9(VAR_1, VAR_2, ((void*)0), &VAR_17, &VAR_17+1, 3);
   VAR_6[128] = 0;
  }

 case 128:
  ;
 }
 goto cleanup;
}
