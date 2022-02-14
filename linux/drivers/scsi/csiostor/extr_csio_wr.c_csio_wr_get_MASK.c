
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint32_t ;
typedef int uint16_t ;
struct csio_wrm {int free_qidx; struct csio_q** q_arr; } ;
struct csio_wr_pair {uintptr_t size1; uintptr_t size2; int * addr2; void* addr1; } ;
struct csio_qstatus_page {int cidx; } ;
struct csio_q {uintptr_t pidx; int cidx; int credits; int inc_idx; int * vstart; scalar_t__ vwrap; int * owner; } ;
struct csio_hw {int dummy; } ;


 uintptr_t FUNC_0 (uintptr_t,uintptr_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct csio_q*,int ) ;
 uintptr_t VAR_0 ;
 int VAR_1 ;
 struct csio_wrm* FUNC_3 (struct csio_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(struct csio_hw *VAR_7, int VAR_8, uint32_t VAR_9,
     struct csio_wr_pair *VAR_10)
{
 struct csio_wrm *VAR_11 = FUNC_3(VAR_7);
 struct csio_q *VAR_12 = VAR_11->q_arr[VAR_8];
 void *VAR_13 = (void *)((uintptr_t)(VAR_12->vstart) +
      (VAR_12->pidx * VAR_0));
 struct csio_qstatus_page *VAR_14 = (struct csio_qstatus_page *)VAR_12->vwrap;
 uint16_t VAR_15 = VAR_12->cidx = FUNC_4(VAR_14->cidx);
 uint16_t VAR_16 = VAR_12->pidx;
 uint32_t VAR_17 = FUNC_0(VAR_9, VAR_0);
 int VAR_18 = VAR_17 / VAR_0;
 int VAR_19;

 FUNC_1(VAR_12->owner != ((void*)0));
 FUNC_1((VAR_8 >= 0) && (VAR_8 < VAR_11->free_qidx));
 FUNC_1(VAR_15 <= VAR_12->credits);


 if (VAR_16 > VAR_15) {
  VAR_19 = VAR_12->credits - (VAR_16 - VAR_15) - 1;
 } else if (VAR_15 > VAR_16) {
  VAR_19 = VAR_15 - VAR_16 - 1;
 } else {

  VAR_19 = VAR_12->credits;
  FUNC_2(VAR_12, VAR_3);
 }





 if (!VAR_19 || (VAR_18 > VAR_19)) {
  FUNC_2(VAR_12, VAR_4);
  return -VAR_1;
 }
 if (FUNC_5(((uintptr_t)VAR_13 + VAR_17) > (uintptr_t)(VAR_12->vwrap))) {
  VAR_10->addr1 = VAR_13;
  VAR_10->size1 = (uint32_t)((uintptr_t)VAR_12->vwrap - (uintptr_t)VAR_13);
  VAR_10->addr2 = VAR_12->vstart;
  VAR_10->size2 = VAR_17 - VAR_10->size1;
  VAR_12->pidx = (uint16_t)(FUNC_0(VAR_10->size2, VAR_0) /
       VAR_0);
  FUNC_2(VAR_12, VAR_5);
  FUNC_2(VAR_12, VAR_2);
 } else {
  VAR_10->addr1 = VAR_13;
  VAR_10->size1 = VAR_17;
  VAR_10->addr2 = ((void*)0);
  VAR_10->size2 = 0;
  VAR_12->pidx += (uint16_t)VAR_18;


  if (FUNC_5(VAR_12->pidx == VAR_12->credits)) {
   VAR_12->pidx = 0;
   FUNC_2(VAR_12, VAR_5);
  }
 }

 VAR_12->inc_idx = (uint16_t)VAR_18;

 FUNC_2(VAR_12, VAR_6);

 return 0;
}
