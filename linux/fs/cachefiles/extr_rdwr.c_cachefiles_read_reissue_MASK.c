
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int flags; int index; struct address_space* mapping; } ;
struct cachefiles_one_read {int op_link; int monitor; struct page* back_page; } ;
struct cachefiles_object {int work_lock; int backer; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_4__ {int i_ino; struct address_space* i_mapping; } ;
struct TYPE_3__ {int (* readpage ) (int *,struct page*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct page*,int *) ;
 TYPE_2__* FUNC_7 (int ) ;
 struct page* FUNC_8 (struct address_space*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;

__attribute__((used)) static int FUNC_16(struct cachefiles_object *VAR_3,
       struct cachefiles_one_read *VAR_4)
{
 struct address_space *VAR_5 = FUNC_7(VAR_3->backer)->i_mapping;
 struct page *VAR_6 = VAR_4->back_page, *VAR_7;
 int VAR_8;

 FUNC_4("{ino=%lx},{%lx,%lx}",
        FUNC_7(VAR_3->backer)->i_ino,
        VAR_6->index, VAR_6->flags);


 if (VAR_6->mapping != VAR_5) {
  FUNC_5(" = -ENODATA [mapping]");
  return -VAR_2;
 }

 VAR_7 = FUNC_8(VAR_5, VAR_6->index);
 if (!VAR_7) {
  FUNC_5(" = -ENODATA [gone]");
  return -VAR_2;
 }

 if (VAR_6 != VAR_7) {
  FUNC_10(VAR_7);
  FUNC_5(" = -ENODATA [different]");
  return -VAR_2;
 }



 FUNC_10(VAR_7);

 FUNC_0(&VAR_4->op_link);
 FUNC_6(VAR_6, &VAR_4->monitor);

 if (FUNC_14(VAR_6)) {
  VAR_8 = -VAR_1;
  if (FUNC_1(VAR_6))
   goto unlock_discard;
  VAR_8 = 0;
  if (FUNC_2(VAR_6))
   goto unlock_discard;

  FUNC_3("reissue read");
  VAR_8 = VAR_5->a_ops->readpage(((void*)0), VAR_6);
  if (VAR_8 < 0)
   goto unlock_discard;
 }




 if (FUNC_14(VAR_6)) {
  FUNC_3("jumpstart %p {%lx}", VAR_6, VAR_6->flags);
  FUNC_15(VAR_6);
 }


 FUNC_5(" = -EINPROGRESS");
 return -VAR_0;

unlock_discard:
 FUNC_15(VAR_6);
 FUNC_11(&VAR_3->work_lock);
 FUNC_9(&VAR_4->op_link);
 FUNC_12(&VAR_3->work_lock);
 FUNC_5(" = %d", VAR_8);
 return VAR_8;
}
