
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; scalar_t__ iov_base; } ;



__attribute__((used)) static inline size_t FUNC_0(struct iovec *VAR_0)
{
 return (size_t)VAR_0->iov_base + VAR_0->iov_len;
}
