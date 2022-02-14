
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvcalls_data_intf {int in_cons; int in_prod; scalar_t__ in_error; } ;
struct pvcalls_data {int in; } ;
struct iov_iter {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,size_t,struct iov_iter*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct pvcalls_data_intf *VAR_2,
         struct pvcalls_data *VAR_3,
         struct iov_iter *VAR_4,
         size_t VAR_5, int VAR_6)
{
 RING_IDX VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 RING_IDX VAR_12 = FUNC_0(VAR_1);
 int32_t VAR_13;

 VAR_7 = VAR_2->in_cons;
 VAR_8 = VAR_2->in_prod;
 VAR_13 = VAR_2->in_error;

 FUNC_5();

 VAR_9 = FUNC_3(VAR_8, VAR_7, VAR_12);
 VAR_10 = FUNC_2(VAR_8, VAR_12);
 VAR_11 = FUNC_2(VAR_7, VAR_12);

 if (VAR_9 == 0)
  return VAR_13 ?: VAR_9;

 if (VAR_5 > VAR_9)
  VAR_5 = VAR_9;

 if (VAR_10 > VAR_11) {
  VAR_5 = FUNC_1(VAR_3->in + VAR_11, VAR_5, VAR_4);
 } else {
  if (VAR_5 > (VAR_12 - VAR_11)) {
   int VAR_14 = FUNC_1(VAR_3->in + VAR_11,
         VAR_12 - VAR_11, VAR_4);
   if (VAR_14 != VAR_12 - VAR_11) {
    VAR_5 = VAR_14;
    goto out;
   }
   VAR_5 = VAR_14 + FUNC_1(VAR_3->in, VAR_5 - VAR_14, VAR_4);
  } else {
   VAR_5 = FUNC_1(VAR_3->in + VAR_11, VAR_5, VAR_4);
  }
 }
out:

 FUNC_4();
 if (!(VAR_6 & VAR_0))
  VAR_2->in_cons += VAR_5;

 return VAR_5;
}
