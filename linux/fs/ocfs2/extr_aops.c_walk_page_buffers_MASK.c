
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;
typedef int handle_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int *,struct buffer_head*) ;

int FUNC_2( handle_t *VAR_0,
   struct buffer_head *VAR_1,
   unsigned VAR_2,
   unsigned VAR_3,
   int *VAR_4,
   int (*VAR_5)( handle_t *VAR_6,
     struct buffer_head *VAR_7))
{
 struct buffer_head *VAR_8;
 unsigned VAR_9, VAR_10;
 unsigned VAR_11 = VAR_1->b_size;
 int VAR_12, VAR_13 = 0;
 struct buffer_head *VAR_14;

 for ( VAR_8 = VAR_1, VAR_9 = 0;
  VAR_13 == 0 && (VAR_8 != VAR_1 || !VAR_9);
      VAR_9 = VAR_10, VAR_8 = VAR_14)
 {
  VAR_14 = VAR_8->b_this_page;
  VAR_10 = VAR_9 + VAR_11;
  if (VAR_10 <= VAR_2 || VAR_9 >= VAR_3) {
   if (VAR_4 && !FUNC_0(VAR_8))
    *VAR_4 = 1;
   continue;
  }
  VAR_12 = (*VAR_5)(VAR_0, VAR_8);
  if (!VAR_13)
   VAR_13 = VAR_12;
 }
 return VAR_13;
}
