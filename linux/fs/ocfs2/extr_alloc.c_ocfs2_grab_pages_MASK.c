
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef unsigned long loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_2 ;
 struct page* FUNC_2 (struct address_space*,unsigned long,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct page**,int) ;

int FUNC_5(struct inode *VAR_3, loff_t VAR_4, loff_t VAR_5,
       struct page **VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct address_space *VAR_10 = VAR_3->i_mapping;
 unsigned long VAR_11;
 loff_t VAR_12;

 FUNC_0(VAR_4 > VAR_5);

 VAR_8 = 0;
 VAR_12 = FUNC_1(VAR_5);
 VAR_11 = VAR_4 >> VAR_2;
 do {
  VAR_6[VAR_8] = FUNC_2(VAR_10, VAR_11, VAR_1);
  if (!VAR_6[VAR_8]) {
   VAR_9 = -VAR_0;
   FUNC_3(VAR_9);
   goto out;
  }

  VAR_8++;
  VAR_11++;
 } while (VAR_11 < (VAR_12 >> VAR_2));

out:
 if (VAR_9 != 0) {
  if (VAR_6)
   FUNC_4(VAR_6, VAR_8);
  VAR_8 = 0;
 }

 *VAR_7 = VAR_8;

 return VAR_9;
}
