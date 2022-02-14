
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct iov_iter {unsigned long nr_segs; size_t count; size_t iov_offset; struct bio_vec const* bvec; } ;
struct io_uring_sqe {int addr; int buf_index; int len; } ;
struct io_ring_ctx {unsigned int nr_user_bufs; struct io_mapped_ubuf* user_bufs; } ;
struct io_mapped_ubuf {size_t ubuf; size_t len; struct bio_vec* bvec; int nr_bvecs; } ;
struct bio_vec {size_t bv_len; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct iov_iter*,size_t) ;
 int FUNC_3 (struct iov_iter*,int,struct bio_vec*,int ,size_t) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct io_ring_ctx *VAR_3, int VAR_4,
      const struct io_uring_sqe *VAR_5,
      struct iov_iter *VAR_6)
{
 size_t VAR_7 = FUNC_0(VAR_5->len);
 struct io_mapped_ubuf *VAR_8;
 unsigned VAR_9, VAR_10;
 size_t VAR_11;
 u64 VAR_12;


 if (FUNC_4(!VAR_3->user_bufs))
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_5->buf_index);
 if (FUNC_4(VAR_10 >= VAR_3->nr_user_bufs))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_10, VAR_3->nr_user_bufs);
 VAR_8 = &VAR_3->user_bufs[VAR_9];
 VAR_12 = FUNC_0(VAR_5->addr);


 if (VAR_12 + VAR_7 < VAR_12)
  return -VAR_0;

 if (VAR_12 < VAR_8->ubuf || VAR_12 + VAR_7 > VAR_8->ubuf + VAR_8->len)
  return -VAR_0;





 VAR_11 = VAR_12 - VAR_8->ubuf;
 FUNC_3(VAR_6, VAR_4, VAR_8->bvec, VAR_8->nr_bvecs, VAR_11 + VAR_7);

 if (VAR_11) {
  const struct bio_vec *VAR_13 = VAR_8->bvec;

  if (VAR_11 <= VAR_13->bv_len) {
   FUNC_2(VAR_6, VAR_11);
  } else {
   unsigned long VAR_14;


   VAR_11 -= VAR_13->bv_len;
   VAR_14 = 1 + (VAR_11 >> VAR_2);

   VAR_6->bvec = VAR_13 + VAR_14;
   VAR_6->nr_segs -= VAR_14;
   VAR_6->count -= VAR_13->bv_len + VAR_11;
   VAR_6->iov_offset = VAR_11 & ~VAR_1;
  }
 }

 return 0;
}
