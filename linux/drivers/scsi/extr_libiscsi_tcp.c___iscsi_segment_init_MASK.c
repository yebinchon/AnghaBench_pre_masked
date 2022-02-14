
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_segment {size_t total_size; struct ahash_request* hash; int * done; } ;
struct ahash_request {int dummy; } ;
typedef int iscsi_segment_done_fn_t ;


 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct iscsi_segment*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct iscsi_segment *VAR_0, size_t VAR_1,
       iscsi_segment_done_fn_t *VAR_2, struct ahash_request *VAR_3)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->total_size = VAR_1;
 VAR_0->done = VAR_2;

 if (VAR_3) {
  VAR_0->hash = VAR_3;
  FUNC_0(VAR_3);
 }
}
