
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct iomap_page {int uptodate; } ;
struct inode {unsigned int i_blkbits; } ;
struct TYPE_2__ {struct inode* host; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 struct iomap_page* FUNC_5 (struct page*) ;

__attribute__((used)) static void
FUNC_6(struct page *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct iomap_page *VAR_4 = FUNC_5(VAR_1);
 struct inode *VAR_5 = VAR_1->mapping->host;
 unsigned VAR_6 = VAR_2 >> VAR_5->i_blkbits;
 unsigned VAR_7 = (VAR_2 + VAR_3 - 1) >> VAR_5->i_blkbits;
 unsigned int VAR_8;
 bool VAR_9 = 1;

 if (VAR_4) {
  for (VAR_8 = 0; VAR_8 < VAR_0 / FUNC_2(VAR_5); VAR_8++) {
   if (VAR_8 >= VAR_6 && VAR_8 <= VAR_7)
    FUNC_3(VAR_8, VAR_4->uptodate);
   else if (!FUNC_4(VAR_8, VAR_4->uptodate))
    VAR_9 = 0;
  }
 }

 if (VAR_9 && !FUNC_0(VAR_1))
  FUNC_1(VAR_1);
}
