
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_bdev; } ;
struct page {int index; } ;
struct inode {struct super_block* i_sb; } ;
struct erofs_map_blocks {int m_flags; scalar_t__ m_plen; scalar_t__ m_llen; int m_pa; int m_la; } ;
struct TYPE_2__ {int bi_sector; int bi_size; } ;
struct bio {int bi_max_vecs; TYPE_1__ bi_iter; int bi_opf; int bi_end_io; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;
typedef scalar_t__ erofs_off_t ;
typedef scalar_t__ erofs_blk_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (void*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bio* FUNC_3 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int VAR_7 ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct bio*,struct page*,int,int ) ;
 struct bio* FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (struct bio*,int ) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct page* FUNC_15 (struct super_block*,scalar_t__) ;
 int FUNC_16 (struct inode* const,struct erofs_map_blocks*,int ) ;
 int VAR_8 ;
 int FUNC_17 (struct page*) ;
 void* FUNC_18 (struct page*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (void*,void*,int) ;
 int FUNC_21 (void*,int ,void*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct bio*) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*,int ,int) ;

__attribute__((used)) static inline struct bio *FUNC_26(struct bio *VAR_9,
           struct address_space *VAR_10,
           struct page *VAR_11,
           erofs_off_t *VAR_12,
           unsigned int VAR_13,
           bool VAR_14)
{
 struct inode *const VAR_15 = VAR_10->host;
 struct super_block *const VAR_16 = VAR_15->i_sb;
 erofs_off_t VAR_17 = (erofs_off_t)VAR_11->index;
 int VAR_18;

 FUNC_1(!VAR_13);

 if (FUNC_6(VAR_11)) {
  VAR_18 = 0;
  goto has_updated;
 }


 if (VAR_9 &&

     *VAR_12 + 1 != VAR_17) {
submit_bio_retry:
  FUNC_23(VAR_9);
  VAR_9 = ((void*)0);
 }

 if (!VAR_9) {
  struct erofs_map_blocks VAR_19 = {
   .m_la = FUNC_12(VAR_17),
  };
  erofs_blk_t VAR_20;
  unsigned int VAR_21;

  VAR_18 = FUNC_16(VAR_15, &VAR_19, VAR_1);
  if (VAR_18)
   goto err_out;


  if (!(VAR_19.m_flags & VAR_2)) {
   FUNC_25(VAR_11, 0, VAR_6);
   FUNC_8(VAR_11);


   goto has_updated;
  }


  FUNC_1(VAR_19.m_plen != VAR_19.m_llen);

  VAR_20 = FUNC_13(VAR_19.m_pa);
  VAR_21 = FUNC_14(VAR_19.m_pa);


  if (VAR_19.m_flags & VAR_3) {
   void *VAR_22, *VAR_23;
   struct page *VAR_24;

   FUNC_1(VAR_19.m_plen > VAR_6);

   VAR_24 = FUNC_15(VAR_15->i_sb, VAR_20);

   if (FUNC_4(VAR_24)) {
    VAR_18 = FUNC_5(VAR_24);
    goto err_out;
   }

   VAR_22 = FUNC_18(VAR_24);
   VAR_23 = FUNC_18(VAR_11);
   FUNC_20(VAR_23, VAR_22 + VAR_21, VAR_19.m_plen);
   FUNC_21(VAR_23 + VAR_19.m_plen, 0, VAR_6 - VAR_19.m_plen);
   FUNC_19(VAR_23);
   FUNC_19(VAR_22);
   FUNC_17(VAR_11);

   FUNC_8(VAR_11);

   FUNC_24(VAR_24);
   FUNC_22(VAR_24);


   goto has_updated;
  }


  FUNC_1(FUNC_14(VAR_19.m_pa));


  if (VAR_13 > FUNC_2(VAR_19.m_plen, VAR_6))
   VAR_13 = FUNC_2(VAR_19.m_plen, VAR_6);
  if (VAR_13 > VAR_0)
   VAR_13 = VAR_0;

  VAR_9 = FUNC_10(VAR_4, VAR_13);

  VAR_9->bi_end_io = VAR_8;
  FUNC_11(VAR_9, VAR_16->s_bdev);
  VAR_9->bi_iter.bi_sector = (sector_t)VAR_20 <<
   VAR_5;
  VAR_9->bi_opf = VAR_7;
 }

 VAR_18 = FUNC_9(VAR_9, VAR_11, VAR_6, 0);

 if (VAR_18 < VAR_6)
  goto submit_bio_retry;

 *VAR_12 = VAR_17;


 if (VAR_9->bi_iter.bi_size >= VAR_9->bi_max_vecs * VAR_6) {

  VAR_18 = 0;
  goto submit_bio_out;
 }

 return VAR_9;

err_out:

 if (!VAR_14) {
  FUNC_7(VAR_11);
  FUNC_0(VAR_11);
 }
has_updated:
 FUNC_24(VAR_11);


 if (VAR_9)
submit_bio_out:
  FUNC_23(VAR_9);
 return VAR_18 ? FUNC_3(VAR_18) : ((void*)0);
}
