
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;
struct gfs2_inode {TYPE_1__ i_inode; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int VAR_2 ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,void*,unsigned int) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct address_space*,unsigned long,int ,int *) ;

int FUNC_7(struct gfs2_inode *VAR_3, char *VAR_4, loff_t *VAR_5,
                       unsigned VAR_6)
{
 struct address_space *VAR_7 = VAR_3->i_inode.i_mapping;
 unsigned long VAR_8 = *VAR_5 >> VAR_0;
 unsigned VAR_9 = *VAR_5 & (VAR_1 - 1);
 unsigned VAR_10 = 0;
 unsigned VAR_11;
 struct page *VAR_12;
 void *VAR_13;

 do {
  VAR_11 = VAR_6 - VAR_10;
  if (VAR_9 + VAR_6 > VAR_1)
   VAR_11 = VAR_1 - VAR_9;
  VAR_12 = FUNC_6(VAR_7, VAR_8, VAR_2, ((void*)0));
  if (FUNC_0(VAR_12))
   return FUNC_1(VAR_12);
  VAR_13 = FUNC_2(VAR_12);
  FUNC_4(VAR_4 + VAR_10, VAR_13 + VAR_9, VAR_11);
  FUNC_3(VAR_13);
  FUNC_5(VAR_12);
  VAR_10 += VAR_11;
  VAR_8++;
  VAR_9 = 0;
 } while(VAR_10 < VAR_6);
 (*VAR_5) += VAR_6;
 return VAR_6;
}
