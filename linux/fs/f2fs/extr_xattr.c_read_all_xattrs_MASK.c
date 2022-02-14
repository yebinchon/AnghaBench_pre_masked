
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_xattr_header {void* h_refcount; void* h_magic; } ;
typedef scalar_t__ nid_t ;
struct TYPE_2__ {scalar_t__ i_xattr_nid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct f2fs_xattr_header* FUNC_2 (void*) ;
 scalar_t__ VAR_4 ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ,scalar_t__,int ) ;
 unsigned int FUNC_5 (struct inode*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (struct inode*,struct page*,void*) ;
 int FUNC_9 (struct inode*,void*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_5, struct page *VAR_6,
       void **VAR_7)
{
 struct f2fs_xattr_header *VAR_8;
 nid_t VAR_9 = FUNC_0(VAR_5)->i_xattr_nid;
 unsigned int VAR_10 = VAR_3;
 unsigned int VAR_11 = FUNC_5(VAR_5);
 void *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(FUNC_1(VAR_5),
   VAR_11 + VAR_10 + VAR_4, VAR_2);
 if (!VAR_12)
  return -VAR_0;


 if (VAR_11) {
  VAR_13 = FUNC_8(VAR_5, VAR_6, VAR_12);
  if (VAR_13)
   goto fail;
 }


 if (VAR_9) {
  VAR_13 = FUNC_9(VAR_5, VAR_12);
  if (VAR_13)
   goto fail;
 }

 VAR_8 = FUNC_2(VAR_12);


 if (FUNC_7(VAR_8->h_magic) != VAR_1) {
  VAR_8->h_magic = FUNC_3(VAR_1);
  VAR_8->h_refcount = FUNC_3(1);
 }
 *VAR_7 = VAR_12;
 return 0;
fail:
 FUNC_6(VAR_12);
 return VAR_13;
}
