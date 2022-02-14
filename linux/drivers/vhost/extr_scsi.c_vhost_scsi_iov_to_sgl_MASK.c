
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_scsi_cmd {int dummy; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct iov_iter {int dummy; } ;


 scalar_t__ FUNC_0 (struct iov_iter*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct vhost_scsi_cmd*,struct iov_iter*,struct scatterlist*,int) ;

__attribute__((used)) static int
FUNC_4(struct vhost_scsi_cmd *VAR_0, bool VAR_1,
        struct iov_iter *VAR_2,
        struct scatterlist *VAR_3, int VAR_4)
{
 struct scatterlist *VAR_5 = VAR_3;
 int VAR_6;

 while (FUNC_0(VAR_2)) {
  VAR_6 = FUNC_3(VAR_0, VAR_2, VAR_3, VAR_1);
  if (VAR_6 < 0) {
   while (VAR_5 < VAR_3) {
    struct page *VAR_7 = FUNC_2(VAR_5++);
    if (VAR_7)
     FUNC_1(VAR_7);
   }
   return VAR_6;
  }
  VAR_3 += VAR_6;
 }
 return 0;
}
