
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;
struct ffs_epfile {int read_buffer; } ;
struct ffs_buffer {int length; int storage; int data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,struct ffs_buffer*) ;
 int FUNC_1 (void*,int,struct iov_iter*) ;
 int FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (struct ffs_buffer*) ;
 struct ffs_buffer* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,void*,int) ;
 int FUNC_7 (char*,int,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct ffs_epfile *VAR_3,
          void *VAR_4, int VAR_5,
          struct iov_iter *VAR_6)
{
 struct ffs_buffer *VAR_7;

 ssize_t VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (FUNC_5(VAR_5 == VAR_8))
  return VAR_8;

 if (FUNC_8(FUNC_2(VAR_6)))
  return -VAR_0;


 FUNC_7("functionfs read size %d > requested size %zd, splitting request into multiple reads.",
  VAR_5, VAR_8);

 VAR_5 -= VAR_8;
 VAR_7 = FUNC_4(sizeof(*VAR_7) + VAR_5, VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_7->length = VAR_5;
 VAR_7->data = VAR_7->storage;
 FUNC_6(VAR_7->storage, VAR_4 + VAR_8, VAR_5);







 if (FUNC_8(FUNC_0(&VAR_3->read_buffer, ((void*)0), VAR_7)))
  FUNC_3(VAR_7);

 return VAR_8;
}
