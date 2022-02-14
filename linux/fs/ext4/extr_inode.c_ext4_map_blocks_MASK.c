
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blkbits; int i_ino; int i_sb; } ;
struct extent_status {int es_lblk; int es_len; } ;
struct ext4_map_blocks {int m_flags; int m_len; scalar_t__ m_lblk; int m_pblk; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {int i_data_sem; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct ext4_map_blocks*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,int,int) ;
 int FUNC_8 (struct inode*,int,int,int,unsigned int) ;
 scalar_t__ FUNC_9 (struct extent_status*) ;
 scalar_t__ FUNC_10 (struct extent_status*) ;
 scalar_t__ FUNC_11 (struct extent_status*) ;
 scalar_t__ FUNC_12 (struct extent_status*) ;
 scalar_t__ FUNC_13 (struct inode*,scalar_t__,int *,struct extent_status*) ;
 int FUNC_14 (struct extent_status*) ;
 scalar_t__ FUNC_15 (struct inode*,scalar_t__ (*) (struct extent_status*),int,int) ;
 int FUNC_16 (int *,struct inode*,struct ext4_map_blocks*,int) ;
 int FUNC_17 (int *,struct inode*,struct ext4_map_blocks*,int) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*,int,int,int) ;
 int FUNC_20 (int *,struct inode*,int,int) ;
 int FUNC_21 (int *,struct inode*,int,int) ;
 int FUNC_22 (int *,struct inode*,struct ext4_map_blocks*,struct ext4_map_blocks*,int) ;
 scalar_t__ FUNC_23 (struct inode*) ;
 scalar_t__ FUNC_24 (struct inode*,int ) ;
 int FUNC_25 (int ,char*,int ,int,int) ;
 int FUNC_26 (char*,int ,int,int,unsigned long) ;
 int FUNC_27 (struct ext4_map_blocks*,struct ext4_map_blocks*,int) ;
 scalar_t__ FUNC_28 (int) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;

int FUNC_31(handle_t *VAR_19, struct inode *VAR_20,
      struct ext4_map_blocks *VAR_21, int VAR_22)
{
 struct extent_status VAR_23;
 int VAR_24;
 int VAR_25 = 0;






 VAR_21->m_flags = 0;
 FUNC_26("ext4_map_blocks(): inode %lu, flag %d, max_blocks %u,"
    "logical block %lu\n", VAR_20->i_ino, VAR_22, VAR_21->m_len,
    (unsigned long) VAR_21->m_lblk);




 if (FUNC_28(VAR_21->m_len > VAR_18))
  VAR_21->m_len = VAR_18;


 if (FUNC_28(VAR_21->m_lblk >= VAR_17))
  return -VAR_0;


 if (FUNC_13(VAR_20, VAR_21->m_lblk, ((void*)0), &VAR_23)) {
  if (FUNC_12(&VAR_23) || FUNC_11(&VAR_23)) {
   VAR_21->m_pblk = FUNC_14(&VAR_23) +
     VAR_21->m_lblk - VAR_23.es_lblk;
   VAR_21->m_flags |= FUNC_12(&VAR_23) ?
     VAR_10 : VAR_12;
   VAR_24 = VAR_23.es_len - (VAR_21->m_lblk - VAR_23.es_lblk);
   if (VAR_24 > VAR_21->m_len)
    VAR_24 = VAR_21->m_len;
   VAR_21->m_len = VAR_24;
  } else if (FUNC_9(&VAR_23) || FUNC_10(&VAR_23)) {
   VAR_21->m_pblk = 0;
   VAR_24 = VAR_23.es_len - (VAR_21->m_lblk - VAR_23.es_lblk);
   if (VAR_24 > VAR_21->m_len)
    VAR_24 = VAR_21->m_len;
   VAR_21->m_len = VAR_24;
   VAR_24 = 0;
  } else {
   FUNC_0();
  }




  goto found;
 }





 FUNC_4(&FUNC_1(VAR_20)->i_data_sem);
 if (FUNC_24(VAR_20, VAR_8)) {
  VAR_24 = FUNC_16(VAR_19, VAR_20, VAR_21, VAR_22 &
          VAR_5);
 } else {
  VAR_24 = FUNC_17(VAR_19, VAR_20, VAR_21, VAR_22 &
          VAR_5);
 }
 if (VAR_24 > 0) {
  unsigned int VAR_26;

  if (FUNC_28(VAR_24 != VAR_21->m_len)) {
   FUNC_25(VAR_20->i_sb,
         "ES len assertion failed for inode "
         "%lu: retval %d != map->m_len %d",
         VAR_20->i_ino, VAR_24, VAR_21->m_len);
   FUNC_2(1);
  }

  VAR_26 = VAR_21->m_flags & VAR_12 ?
    VAR_15 : VAR_16;
  if (!(VAR_22 & VAR_3) &&
      !(VAR_26 & VAR_16) &&
      FUNC_15(VAR_20, &FUNC_9, VAR_21->m_lblk,
           VAR_21->m_lblk + VAR_21->m_len - 1))
   VAR_26 |= VAR_14;
  VAR_25 = FUNC_8(VAR_20, VAR_21->m_lblk,
         VAR_21->m_len, VAR_21->m_pblk, VAR_26);
  if (VAR_25 < 0)
   VAR_24 = VAR_25;
 }
 FUNC_29((&FUNC_1(VAR_20)->i_data_sem));

found:
 if (VAR_24 > 0 && VAR_21->m_flags & VAR_10) {
  VAR_25 = FUNC_3(VAR_20, VAR_21);
  if (VAR_25 != 0)
   return VAR_25;
 }


 if ((VAR_22 & VAR_2) == 0)
  return VAR_24;
 if (VAR_24 > 0 && VAR_21->m_flags & VAR_10)





  if (!(VAR_22 & VAR_1))
   return VAR_24;





 VAR_21->m_flags &= ~VAR_9;







 FUNC_5(&FUNC_1(VAR_20)->i_data_sem);





 if (FUNC_24(VAR_20, VAR_8)) {
  VAR_24 = FUNC_16(VAR_19, VAR_20, VAR_21, VAR_22);
 } else {
  VAR_24 = FUNC_17(VAR_19, VAR_20, VAR_21, VAR_22);

  if (VAR_24 > 0 && VAR_21->m_flags & VAR_11) {





   FUNC_6(VAR_20, VAR_13);
  }







  if ((VAR_24 > 0) &&
   (VAR_22 & VAR_3))
   FUNC_7(VAR_20, VAR_24, 1);
 }

 if (VAR_24 > 0) {
  unsigned int VAR_27;

  if (FUNC_28(VAR_24 != VAR_21->m_len)) {
   FUNC_25(VAR_20->i_sb,
         "ES len assertion failed for inode "
         "%lu: retval %d != map->m_len %d",
         VAR_20->i_ino, VAR_24, VAR_21->m_len);
   FUNC_2(1);
  }
  if (VAR_22 & VAR_7 &&
      VAR_21->m_flags & VAR_10 &&
      VAR_21->m_flags & VAR_11) {
   VAR_25 = FUNC_19(VAR_20, VAR_21->m_lblk,
       VAR_21->m_pblk, VAR_21->m_len);
   if (VAR_25) {
    VAR_24 = VAR_25;
    goto out_sem;
   }
  }





  if ((VAR_22 & VAR_6) &&
      FUNC_13(VAR_20, VAR_21->m_lblk, ((void*)0), &VAR_23)) {
   if (FUNC_12(&VAR_23))
    goto out_sem;
  }
  VAR_27 = VAR_21->m_flags & VAR_12 ?
    VAR_15 : VAR_16;
  if (!(VAR_22 & VAR_3) &&
      !(VAR_27 & VAR_16) &&
      FUNC_15(VAR_20, &FUNC_9, VAR_21->m_lblk,
           VAR_21->m_lblk + VAR_21->m_len - 1))
   VAR_27 |= VAR_14;
  VAR_25 = FUNC_8(VAR_20, VAR_21->m_lblk, VAR_21->m_len,
         VAR_21->m_pblk, VAR_27);
  if (VAR_25 < 0) {
   VAR_24 = VAR_25;
   goto out_sem;
  }
 }

out_sem:
 FUNC_30((&FUNC_1(VAR_20)->i_data_sem));
 if (VAR_24 > 0 && VAR_21->m_flags & VAR_10) {
  VAR_25 = FUNC_3(VAR_20, VAR_21);
  if (VAR_25 != 0)
   return VAR_25;






  if (VAR_21->m_flags & VAR_11 &&
      !(VAR_21->m_flags & VAR_12) &&
      !(VAR_22 & VAR_7) &&
      !FUNC_18(VAR_20) &&
      FUNC_23(VAR_20)) {
   loff_t VAR_28 =
    (loff_t)VAR_21->m_lblk << VAR_20->i_blkbits;
   loff_t VAR_29 = (loff_t)VAR_21->m_len << VAR_20->i_blkbits;

   if (VAR_22 & VAR_4)
    VAR_25 = FUNC_20(VAR_19, VAR_20,
      VAR_28, VAR_29);
   else
    VAR_25 = FUNC_21(VAR_19, VAR_20,
      VAR_28, VAR_29);
   if (VAR_25)
    return VAR_25;
  }
 }
 return VAR_24;
}
