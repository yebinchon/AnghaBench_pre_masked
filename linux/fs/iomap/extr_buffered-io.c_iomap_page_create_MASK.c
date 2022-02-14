
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap_page {int uptodate; int write_count; int read_count; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 struct iomap_page* FUNC_5 (int,int) ;
 int FUNC_6 (struct page*,unsigned long) ;
 struct iomap_page* FUNC_7 (struct page*) ;

__attribute__((used)) static struct iomap_page *
FUNC_8(struct inode *VAR_4, struct page *VAR_5)
{
 struct iomap_page *VAR_6 = FUNC_7(VAR_5);

 if (VAR_6 || FUNC_4(VAR_4) == VAR_1)
  return VAR_6;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_0 | VAR_3);
 FUNC_1(&VAR_6->read_count, 0);
 FUNC_1(&VAR_6->write_count, 0);
 FUNC_2(VAR_6->uptodate, VAR_1 / VAR_2);





 FUNC_3(VAR_5);
 FUNC_6(VAR_5, (unsigned long)VAR_6);
 FUNC_0(VAR_5);
 return VAR_6;
}
