
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_multiple_rw {unsigned int* sg_len; int do_write; int do_nonblock_req; int prepare; int len; int size; } ;
struct mmc_test_card {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mmc_test_card*,struct mmc_test_multiple_rw*) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_2)
{
 unsigned int VAR_3[] = {1, 1 << 3, 1 << 4, 1 << 5, 1 << 6,
     1 << 7, 1 << 8, 1 << 9};
 struct mmc_test_multiple_rw VAR_4 = {
  .sg_len = VAR_3,
  .size = VAR_1,
  .len = FUNC_0(VAR_3),
  .do_write = 1,
  .do_nonblock_req = 1,
  .prepare = VAR_0,
 };

 return FUNC_1(VAR_2, &VAR_4);
}
