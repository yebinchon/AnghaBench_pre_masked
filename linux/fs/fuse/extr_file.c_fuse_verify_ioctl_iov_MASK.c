
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iovec {size_t iov_len; } ;
struct fuse_conn {int max_pages; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct fuse_conn *VAR_2, struct iovec *VAR_3,
     size_t VAR_4)
{
 size_t VAR_5;
 u32 VAR_6 = VAR_2->max_pages << VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_3++) {
  if (VAR_3->iov_len > (size_t) VAR_6)
   return -VAR_0;
  VAR_6 -= VAR_3->iov_len;
 }
 return 0;
}
