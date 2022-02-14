
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct inode {int dummy; } ;
struct extent_map {scalar_t__ block_start; scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*,struct extent_map*) ;
 struct extent_map* FUNC_1 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct extent_map*) ;
 int FUNC_3 (struct extent_map*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, u64 VAR_2, u32 VAR_3,
          u64 *VAR_4, u64 *VAR_5, u64 *VAR_6,
          int VAR_7)
{
 struct extent_map *VAR_8;
 int VAR_9 = 1;
 bool VAR_10 = 1;
 bool VAR_11 = 1;





 if (VAR_2 < *VAR_6)
  return 1;

 *VAR_5 = 0;

 VAR_8 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_8)
  return 0;


 if (VAR_8->block_start >= VAR_0) {
  VAR_9 = 0;
  goto out;
 }

 if (!*VAR_6)
  VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_1, VAR_8);




 if (!VAR_7 && (*VAR_4 == 0 || *VAR_4 >= VAR_3) &&
     (VAR_8->len >= VAR_3 || (!VAR_10 && !VAR_11)))
  VAR_9 = 0;
out:
 if (VAR_9) {
  *VAR_6 = FUNC_2(VAR_8);
 } else {
  *VAR_4 = 0;
  *VAR_5 = FUNC_2(VAR_8);
  *VAR_6 = 0;
 }

 FUNC_3(VAR_8);
 return VAR_9;
}
