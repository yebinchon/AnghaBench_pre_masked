
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_io_tree {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct extent_io_tree*,int ,int,int) ;
 int FUNC_1 (int *,struct extent_io_tree*,int ,int *) ;
 int FUNC_2 (struct extent_io_tree*,int,int*,int*,int) ;
 int FUNC_3 (struct extent_io_tree*,int,int,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct extent_io_tree VAR_11;
 u64 VAR_12, VAR_13;
 int VAR_14 = -VAR_2;

 FUNC_5("running find_first_clear_extent_bit test");
 FUNC_1(((void*)0), &VAR_11, VAR_3, ((void*)0));





 FUNC_3(&VAR_11, VAR_4, VAR_7 - 1,
   VAR_1 | VAR_0);

 FUNC_2(&VAR_11, VAR_8, &VAR_12, &VAR_13,
        VAR_1 | VAR_0);

 if (VAR_12 != 0 || VAR_13 != VAR_4 - 1) {
  FUNC_4("error finding beginning range: start %llu end %llu",
    VAR_12, VAR_13);
  goto out;
 }


 FUNC_3(&VAR_11, VAR_6, VAR_9 - 1,
   VAR_1 | VAR_0);




 FUNC_2(&VAR_11, 12 * VAR_4, &VAR_12, &VAR_13,
        VAR_1 | VAR_0);

 if (VAR_12 != VAR_7 || VAR_13 != VAR_6 - 1) {
  FUNC_4("error finding trimmed range: start %llu end %llu",
    VAR_12, VAR_13);
  goto out;
 }





 FUNC_2(&VAR_11, VAR_5, &VAR_12, &VAR_13,
        VAR_1 | VAR_0);

 if (VAR_12 != VAR_7 || VAR_13 != VAR_6 - 1) {
  FUNC_4("error finding next unalloc range: start %llu end %llu",
    VAR_12, VAR_13);
  goto out;
 }





 FUNC_3(&VAR_11, VAR_9, VAR_9 + VAR_10 - 1, VAR_0);
 FUNC_2(&VAR_11, VAR_9 + VAR_4, &VAR_12, &VAR_13,
        VAR_1);

 if (VAR_12 != VAR_9 || VAR_13 != VAR_9 + VAR_10 - 1) {
  FUNC_4("error finding exact range: start %llu end %llu",
    VAR_12, VAR_13);
  goto out;
 }

 FUNC_2(&VAR_11, VAR_9 - VAR_10, &VAR_12, &VAR_13,
        VAR_1);





 if (VAR_12 != VAR_9 || VAR_13 != VAR_9 + VAR_10 - 1) {
  FUNC_4("error finding next alloc range: start %llu end %llu",
    VAR_12, VAR_13);
  goto out;
 }





 FUNC_2(&VAR_11, -1, &VAR_12, &VAR_13, VAR_1);
 if (VAR_12 != VAR_9 + VAR_10 || VAR_13 != -1) {
  FUNC_4(
  "error handling beyond end of range search: start %llu end %llu",
   VAR_12, VAR_13);
  goto out;
 }

 VAR_14 = 0;
out:
 FUNC_0(&VAR_11, 0, (u64)-1, VAR_1 | VAR_0);

 return VAR_14;
}
