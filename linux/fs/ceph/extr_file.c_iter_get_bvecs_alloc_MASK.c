
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;
struct bio_vec {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct iov_iter*,size_t,struct bio_vec*) ;
 size_t FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (struct iov_iter*,int ) ;
 int FUNC_3 (struct iov_iter*,size_t) ;
 int FUNC_4 (struct iov_iter*,size_t) ;
 int FUNC_5 (struct bio_vec*) ;
 struct bio_vec* FUNC_6 (int,int,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct iov_iter *VAR_4, size_t VAR_5,
        struct bio_vec **VAR_6, int *VAR_7)
{
 struct bio_vec *VAR_8;
 size_t VAR_9 = FUNC_1(VAR_4);
 ssize_t VAR_10;
 int VAR_11;

 FUNC_4(VAR_4, VAR_5);
 VAR_11 = FUNC_2(VAR_4, VAR_2);
 FUNC_3(VAR_4, VAR_9);





 VAR_8 = FUNC_6(VAR_11, sizeof(*VAR_8), VAR_1 | VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_8);
 if (VAR_10 < 0) {



  FUNC_5(VAR_8);
  return VAR_10;
 }

 *VAR_6 = VAR_8;
 *VAR_7 = VAR_11;
 return VAR_10;
}
