
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvcalls_data_intf {scalar_t__ out_error; scalar_t__ out_cons; scalar_t__ out_prod; } ;
struct pvcalls_data {scalar_t__ out; } ;
struct iov_iter {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,struct iov_iter*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct pvcalls_data_intf *VAR_2,
   struct pvcalls_data *VAR_3,
   struct iov_iter *VAR_4,
   int VAR_5)
{
 RING_IDX VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 RING_IDX VAR_11 = FUNC_0(VAR_1);
 int32_t VAR_12;

 VAR_12 = VAR_2->out_error;
 if (VAR_12 < 0)
  return VAR_12;
 VAR_6 = VAR_2->out_cons;
 VAR_7 = VAR_2->out_prod;

 FUNC_4();

 VAR_8 = FUNC_3(VAR_7, VAR_6, VAR_11);
 if (VAR_8 > VAR_11)
  return -VAR_0;
 if (VAR_8 == VAR_11)
  return 0;
 if (VAR_5 > VAR_11 - VAR_8)
  VAR_5 = VAR_11 - VAR_8;

 VAR_9 = FUNC_2(VAR_7, VAR_11);
 VAR_10 = FUNC_2(VAR_6, VAR_11);

 if (VAR_9 < VAR_10) {
  VAR_5 = FUNC_1(VAR_3->out + VAR_9, VAR_5, VAR_4);
 } else {
  if (VAR_5 > VAR_11 - VAR_9) {
   int VAR_13 = FUNC_1(VAR_3->out + VAR_9,
           VAR_11 - VAR_9, VAR_4);
   if (VAR_13 != VAR_11 - VAR_9) {
    VAR_5 = VAR_13;
    goto out;
   }
   VAR_5 = VAR_13 + FUNC_1(VAR_3->out, VAR_5 - VAR_13, VAR_4);
  } else {
   VAR_5 = FUNC_1(VAR_3->out + VAR_9, VAR_5, VAR_4);
  }
 }
out:

 FUNC_5();
 VAR_2->out_prod += VAR_5;

 return VAR_5;
}
