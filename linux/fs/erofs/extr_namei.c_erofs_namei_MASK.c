
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {scalar_t__ len; scalar_t__ name; } ;
struct page {unsigned int file_type; int nid; } ;
struct inode {int i_size; } ;
struct erofs_qstr {scalar_t__ end; scalar_t__ name; } ;
struct erofs_dirent {unsigned int file_type; int nid; } ;
typedef int erofs_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct inode*,struct erofs_qstr*,int*) ;
 struct page* FUNC_4 (struct erofs_qstr*,void*,int ,int) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct inode *VAR_2,
  struct qstr *VAR_3,
  erofs_nid_t *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 struct page *VAR_7;
 void *VAR_8;
 struct erofs_dirent *VAR_9;
 struct erofs_qstr VAR_10;

 if (!VAR_2->i_size)
  return -VAR_0;

 VAR_10.name = VAR_3->name;
 VAR_10.end = VAR_3->name + VAR_3->len;

 VAR_6 = 0;
 VAR_7 = FUNC_3(VAR_2, &VAR_10, &VAR_6);

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_5(VAR_7);

 if (VAR_6)
  VAR_9 = FUNC_4(&VAR_10, VAR_8, VAR_1, VAR_6);
 else
  VAR_9 = (struct erofs_dirent *)VAR_8;

 if (!FUNC_0(VAR_9)) {
  *VAR_4 = FUNC_7(VAR_9->nid);
  *VAR_5 = VAR_9->file_type;
 }

 FUNC_6(VAR_8);
 FUNC_8(VAR_7);

 return FUNC_2(VAR_9);
}
