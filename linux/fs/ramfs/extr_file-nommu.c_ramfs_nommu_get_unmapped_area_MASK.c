
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct file {int dummy; } ;
typedef unsigned long loff_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct inode* FUNC_0 (struct file*) ;
 unsigned long FUNC_1 (int ,unsigned long*,unsigned long,struct page**) ;
 unsigned long FUNC_2 (struct inode*) ;
 struct page** FUNC_3 (unsigned long,int,int ) ;
 int FUNC_4 (struct page**) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static unsigned long FUNC_7(struct file *VAR_4,
         unsigned long VAR_5, unsigned long VAR_6,
         unsigned long VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct inode *VAR_14 = FUNC_0(VAR_4);
 struct page **VAR_15 = ((void*)0), **VAR_16, *VAR_17;
 loff_t VAR_18;


 VAR_10 = (VAR_6 + VAR_3 - 1) >> VAR_2;
 VAR_18 = FUNC_2(VAR_14);

 VAR_13 = -VAR_0;
 VAR_9 = (VAR_18 + VAR_3 - 1) >> VAR_2;
 if (VAR_7 >= VAR_9)
  goto out;

 if (VAR_9 - VAR_7 < VAR_10)
  goto out;


 VAR_15 = FUNC_3(VAR_10, sizeof(struct page *), VAR_1);
 if (!VAR_15)
  goto out_free;

 VAR_11 = FUNC_1(VAR_14->i_mapping, &VAR_7, VAR_10, VAR_15);
 if (VAR_11 != VAR_10)
  goto out_free_pages;


 VAR_16 = VAR_15;
 VAR_17 = *VAR_16++;
 VAR_17++;
 for (VAR_12 = VAR_10; VAR_12 > 1; VAR_12--)
  if (*VAR_16++ != VAR_17++)
   goto out_free_pages;


 VAR_13 = (unsigned long) FUNC_5(VAR_15[0]);

out_free_pages:
 VAR_16 = VAR_15;
 for (VAR_12 = VAR_11; VAR_12 > 0; VAR_12--)
  FUNC_6(*VAR_16++);
out_free:
 FUNC_4(VAR_15);
out:
 return VAR_13;
}
