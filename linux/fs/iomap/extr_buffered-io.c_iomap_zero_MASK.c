
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap {int dummy; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,unsigned int,int ,struct page**,struct iomap*) ;
 int FUNC_1 (struct inode*,int ,unsigned int,unsigned int,struct page*,struct iomap*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, loff_t VAR_2, unsigned VAR_3,
  unsigned VAR_4, struct iomap *VAR_5)
{
 struct page *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_0, &VAR_6,
       VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_6);

 return FUNC_1(VAR_1, VAR_2, VAR_4, VAR_4, VAR_6, VAR_5);
}
