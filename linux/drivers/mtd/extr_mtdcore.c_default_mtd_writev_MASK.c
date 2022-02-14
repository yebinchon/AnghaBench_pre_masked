
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct kvec {size_t iov_len; int iov_base; } ;
typedef size_t loff_t ;


 int FUNC_0 (struct mtd_info*,size_t,size_t,size_t*,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, const struct kvec *VAR_1,
         unsigned long VAR_2, loff_t VAR_3, size_t *VAR_4)
{
 unsigned long VAR_5;
 size_t VAR_6 = 0, VAR_7;
 int VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (!VAR_1[VAR_5].iov_len)
   continue;
  VAR_8 = FUNC_0(VAR_0, VAR_3, VAR_1[VAR_5].iov_len, &VAR_7,
    VAR_1[VAR_5].iov_base);
  VAR_6 += VAR_7;
  if (VAR_8 || VAR_7 != VAR_1[VAR_5].iov_len)
   break;
  VAR_3 += VAR_1[VAR_5].iov_len;
 }
 *VAR_4 = VAR_6;
 return VAR_8;
}
