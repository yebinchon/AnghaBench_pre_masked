
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;
struct ffs_epfile {int read_buffer; } ;
struct ffs_buffer {scalar_t__ data; scalar_t__ length; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 struct ffs_buffer* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,struct ffs_buffer*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,struct iov_iter*) ;
 int FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (struct ffs_buffer*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct ffs_buffer* FUNC_5 (int *,int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct ffs_epfile *VAR_2,
       struct iov_iter *VAR_3)
{





 struct ffs_buffer *VAR_4 = FUNC_5(&VAR_2->read_buffer, ((void*)0));
 ssize_t VAR_5;
 if (!VAR_4 || VAR_4 == VAR_1)
  return 0;

 VAR_5 = FUNC_1(VAR_4->data, VAR_4->length, VAR_3);
 if (VAR_4->length == VAR_5) {
  FUNC_3(VAR_4);
  return VAR_5;
 }

 if (FUNC_4(FUNC_2(VAR_3))) {
  VAR_5 = -VAR_0;
 } else {
  VAR_4->length -= VAR_5;
  VAR_4->data += VAR_5;
 }

 if (FUNC_0(&VAR_2->read_buffer, ((void*)0), VAR_4))
  FUNC_3(VAR_4);

 return VAR_5;
}
