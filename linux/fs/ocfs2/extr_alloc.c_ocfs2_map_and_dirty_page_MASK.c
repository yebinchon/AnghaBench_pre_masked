
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {scalar_t__ index; } ;
struct inode {int dummy; } ;
typedef unsigned int loff_t ;
typedef int handle_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct inode*,unsigned int,unsigned int) ;
 int FUNC_4 (struct page*,int *,struct inode*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int VAR_1 ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *,int ,unsigned int,unsigned int,int*,int ) ;
 int FUNC_8 (struct page*,unsigned int,unsigned int) ;

void FUNC_9(struct inode *VAR_2, handle_t *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5,
         struct page *VAR_6, int VAR_7, u64 *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 loff_t VAR_11 = ((loff_t)VAR_6->index << VAR_0) + VAR_4;
 loff_t VAR_12 = VAR_5 - VAR_4;

 VAR_9 = FUNC_4(VAR_6, VAR_8, VAR_2, VAR_4, VAR_5, 0);
 if (VAR_9)
  FUNC_2(VAR_9);

 if (VAR_7)
  FUNC_8(VAR_6, VAR_4, VAR_5);






 VAR_9 = FUNC_7(VAR_3, FUNC_6(VAR_6),
    VAR_4, VAR_5, &VAR_10,
    VAR_1);
 if (VAR_9 < 0)
  FUNC_2(VAR_9);
 else if (FUNC_5(VAR_2)) {
  VAR_9 = FUNC_3(VAR_3, VAR_2,
       VAR_11, VAR_12);
  if (VAR_9 < 0)
   FUNC_2(VAR_9);
 }

 if (!VAR_10)
  FUNC_0(VAR_6);

 FUNC_1(VAR_6);
}
