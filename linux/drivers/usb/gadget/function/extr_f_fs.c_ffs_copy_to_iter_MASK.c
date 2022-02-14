
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int,struct iov_iter*) ;
 int FUNC_1 (struct iov_iter*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(void *VAR_1, int VAR_2, struct iov_iter *VAR_3)
{
 ssize_t VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (FUNC_2(VAR_4 == VAR_2))
  return VAR_4;

 if (FUNC_4(FUNC_1(VAR_3)))
  return -VAR_0;
 FUNC_3("functionfs read size %d > requested size %zd, dropping excess data. "
        "Align read buffer size to max packet size to avoid the problem.\n",
        VAR_2, VAR_4);

 return VAR_4;
}
