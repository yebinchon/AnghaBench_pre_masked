
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_iter {scalar_t__ ofs; int * page; int kaddr; int blkaddr; int sb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xattr_iter*,int) ;

__attribute__((used)) static inline int FUNC_7(struct xattr_iter *VAR_1)
{
 if (VAR_1->ofs < VAR_0)
  return 0;

 FUNC_6(VAR_1, 1);

 VAR_1->blkaddr += FUNC_2(VAR_1->ofs);

 VAR_1->page = FUNC_4(VAR_1->sb, VAR_1->blkaddr);
 if (FUNC_0(VAR_1->page)) {
  int VAR_2 = FUNC_1(VAR_1->page);

  VAR_1->page = ((void*)0);
  return VAR_2;
 }

 VAR_1->kaddr = FUNC_5(VAR_1->page);
 VAR_1->ofs = FUNC_3(VAR_1->ofs);
 return 0;
}
