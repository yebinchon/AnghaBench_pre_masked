
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_len; int iov_base; } ;
struct compat_iovec {int iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iovec*,void*,size_t) ;

__attribute__((used)) static int FUNC_2(struct iovec *VAR_2, void *VAR_3,
         size_t VAR_4, unsigned VAR_5,
         bool VAR_6)
{
 if (VAR_5 * sizeof(struct iovec) != VAR_4)
  return -VAR_1;

 FUNC_1(VAR_2, VAR_3, VAR_4);
 return 0;
}
