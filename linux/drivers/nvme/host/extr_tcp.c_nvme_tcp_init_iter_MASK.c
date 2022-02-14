
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bio_vec {int dummy; } ;
struct request {int rq_flags; struct bio_vec special_vec; } ;
struct TYPE_3__ {size_t iov_offset; } ;
struct nvme_tcp_request {TYPE_1__ iter; struct bio* curr_bio; } ;
struct TYPE_4__ {unsigned int bi_size; size_t bi_bvec_done; } ;
struct bio {TYPE_2__ bi_iter; int bi_io_vec; } ;


 int VAR_0 ;
 struct bio_vec* FUNC_0 (int ,TYPE_2__) ;
 int FUNC_1 (struct bio*) ;
 struct request* FUNC_2 (struct nvme_tcp_request*) ;
 unsigned int FUNC_3 (struct request*) ;
 int FUNC_4 (TYPE_1__*,unsigned int,struct bio_vec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct nvme_tcp_request *VAR_1,
  unsigned int VAR_2)
{
 struct request *VAR_3 = FUNC_2(VAR_1);
 struct bio_vec *VAR_4;
 unsigned int VAR_5;
 int VAR_6;
 size_t VAR_7;

 if (VAR_3->rq_flags & VAR_0) {
  VAR_4 = &VAR_3->special_vec;
  VAR_6 = 1;
  VAR_5 = FUNC_3(VAR_3);
  VAR_7 = 0;
 } else {
  struct bio *VAR_8 = VAR_1->curr_bio;

  VAR_4 = FUNC_0(VAR_8->bi_io_vec, VAR_8->bi_iter);
  VAR_6 = FUNC_1(VAR_8);
  VAR_5 = VAR_8->bi_iter.bi_size;
  VAR_7 = VAR_8->bi_iter.bi_bvec_done;
 }

 FUNC_4(&VAR_1->iter, VAR_2, VAR_4, VAR_6, VAR_5);
 VAR_1->iter.iov_offset = VAR_7;
}
