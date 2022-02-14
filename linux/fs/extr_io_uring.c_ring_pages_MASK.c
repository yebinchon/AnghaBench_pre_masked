
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {int dummy; } ;


 int FUNC_0 (int,unsigned int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,unsigned int,int *) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned VAR_0, unsigned VAR_1)
{
 size_t VAR_2;

 VAR_2 = (size_t)1 << FUNC_1(
  FUNC_2(VAR_0, VAR_1, ((void*)0)));
 VAR_2 += (size_t)1 << FUNC_1(
  FUNC_0(sizeof(struct io_uring_sqe), VAR_0));

 return VAR_2;
}
