
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct file {int dummy; } ;
struct address_space {TYPE_1__* host; } ;
typedef int loff_t ;
struct TYPE_6__ {unsigned int write_io; } ;
struct TYPE_5__ {int i_ino; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,char*,struct file*,int ,unsigned int,long long) ;
 scalar_t__ FUNC_4 (struct nfs_open_context*,TYPE_1__*) ;
 struct nfs_open_context* FUNC_5 (struct file*) ;
 unsigned int FUNC_6 (struct page*) ;
 int FUNC_7 (struct file*,struct page*,unsigned int,unsigned int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,unsigned int,int) ;
 int FUNC_12 (struct page*,int ,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_2, struct address_space *VAR_3,
   loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
   struct page *VAR_7, void *VAR_8)
{
 unsigned VAR_9 = VAR_4 & (VAR_1 - 1);
 struct nfs_open_context *VAR_10 = FUNC_5(VAR_2);
 int VAR_11;

 FUNC_3(VAR_0, "NFS: write_end(%pD2(%lu), %u@%lld)\n",
  VAR_2, VAR_3->host->i_ino, VAR_5, (long long) VAR_4);





 if (!FUNC_1(VAR_7)) {
  unsigned VAR_12 = FUNC_6(VAR_7);
  unsigned VAR_13 = VAR_9 + VAR_6;

  if (VAR_12 == 0) {
   FUNC_12(VAR_7, 0, VAR_9,
     VAR_13, VAR_1);
   FUNC_2(VAR_7);
  } else if (VAR_13 >= VAR_12) {
   FUNC_11(VAR_7, VAR_13, VAR_1);
   if (VAR_9 == 0)
    FUNC_2(VAR_7);
  } else
   FUNC_11(VAR_7, VAR_12, VAR_1);
 }

 VAR_11 = FUNC_7(VAR_2, VAR_7, VAR_9, VAR_6);

 FUNC_10(VAR_7);
 FUNC_9(VAR_7);

 if (VAR_11 < 0)
  return VAR_11;
 FUNC_0(VAR_3->host)->write_io += VAR_6;

 if (FUNC_4(VAR_10, VAR_3->host)) {
  VAR_11 = FUNC_8(VAR_3->host);
  if (VAR_11 < 0)
   return VAR_11;
 }

 return VAR_6;
}
