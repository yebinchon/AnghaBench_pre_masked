
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef struct page* pgoff_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct page* FUNC_1 (struct address_space*,struct page*,unsigned int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_2, struct inode *VAR_3,
        pgoff_t VAR_4, pgoff_t VAR_5, struct page *VAR_6[2])
{
 struct address_space *VAR_7[2];
 unsigned VAR_8 = VAR_0;

 FUNC_0(!VAR_2 || !VAR_3);
 if (VAR_2 < VAR_3) {
  VAR_7[0] = VAR_2->i_mapping;
  VAR_7[1] = VAR_3->i_mapping;
 } else {
  FUNC_3(VAR_4, VAR_5);
  VAR_7[0] = VAR_3->i_mapping;
  VAR_7[1] = VAR_2->i_mapping;
 }

 VAR_6[0] = FUNC_1(VAR_7[0], VAR_4, VAR_8);
 if (!VAR_6[0])
  return -VAR_1;

 VAR_6[1] = FUNC_1(VAR_7[1], VAR_5, VAR_8);
 if (!VAR_6[1]) {
  FUNC_4(VAR_6[0]);
  FUNC_2(VAR_6[0]);
  return -VAR_1;
 }





 FUNC_5(VAR_6[0]);
 FUNC_5(VAR_6[1]);
 if (VAR_2 > VAR_3)
  FUNC_3(VAR_6[0], VAR_6[1]);

 return 0;
}
