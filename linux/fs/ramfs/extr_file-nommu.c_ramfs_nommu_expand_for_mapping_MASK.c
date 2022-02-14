
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ,unsigned long,int ) ;
 struct page* FUNC_4 (int ,unsigned int) ;
 unsigned int FUNC_5 (size_t) ;
 int FUNC_6 (struct inode*,size_t) ;
 int FUNC_7 (struct inode*,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,int ,size_t) ;
 void* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,unsigned int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct page*) ;

int FUNC_15(struct inode *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 struct page *VAR_10;
 unsigned VAR_11;
 void *VAR_12;
 int VAR_13;
 gfp_t VAR_14 = FUNC_8(VAR_5->i_mapping);


 VAR_11 = FUNC_5(VAR_6);
 if (FUNC_13(VAR_11 >= VAR_2))
  return -VAR_0;

 VAR_13 = FUNC_7(VAR_5, VAR_6);
 if (VAR_13)
  return VAR_13;

 FUNC_6(VAR_5, VAR_6);



 VAR_10 = FUNC_4(VAR_14, VAR_11);
 if (!VAR_10)
  return -VAR_1;


 VAR_8 = 1UL << VAR_11;
 VAR_7 = (VAR_6 + VAR_4 - 1) >> VAR_3;

 FUNC_12(VAR_10, VAR_11);


 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++)
  FUNC_2(VAR_10 + VAR_9);


 VAR_6 = VAR_4 * VAR_7;
 VAR_12 = FUNC_10(VAR_10);
 FUNC_9(VAR_12, 0, VAR_6);


 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  struct page *VAR_15 = VAR_10 + VAR_9;

  VAR_13 = FUNC_3(VAR_15, VAR_5->i_mapping, VAR_9,
     VAR_14);
  if (VAR_13 < 0)
   goto add_error;


  FUNC_0(VAR_15);
  FUNC_1(VAR_15);

  FUNC_14(VAR_15);
  FUNC_11(VAR_15);
 }

 return 0;

add_error:
 while (VAR_9 < VAR_7)
  FUNC_2(VAR_10 + VAR_9++);
 return VAR_13;
}
