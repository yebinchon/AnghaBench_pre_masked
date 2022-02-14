
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {TYPE_1__* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct file*,int ,unsigned int,long long) ;
 struct page* FUNC_1 (struct address_space*,int,unsigned int) ;
 int FUNC_2 (struct file*,struct page*) ;
 int FUNC_3 (struct file*,struct page*) ;
 scalar_t__ FUNC_4 (struct file*,struct page*,int,unsigned int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, struct address_space *VAR_4,
   loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
   struct page **VAR_8, void **VAR_9)
{
 int VAR_10;
 pgoff_t VAR_11 = VAR_5 >> VAR_2;
 struct page *VAR_12;
 int VAR_13 = 0;

 FUNC_0(VAR_1, "NFS: write_begin(%pD2(%lu), %u@%lld)\n",
  VAR_3, VAR_4->host->i_ino, VAR_6, (long long) VAR_5);

start:
 VAR_12 = FUNC_1(VAR_4, VAR_11, VAR_7);
 if (!VAR_12)
  return -VAR_0;
 *VAR_8 = VAR_12;

 VAR_10 = FUNC_2(VAR_3, VAR_12);
 if (VAR_10) {
  FUNC_6(VAR_12);
  FUNC_5(VAR_12);
 } else if (!VAR_13 &&
     FUNC_4(VAR_3, VAR_12, VAR_5, VAR_6)) {
  VAR_13 = 1;
  VAR_10 = FUNC_3(VAR_3, VAR_12);
  FUNC_5(VAR_12);
  if (!VAR_10)
   goto start;
 }
 return VAR_10;
}
