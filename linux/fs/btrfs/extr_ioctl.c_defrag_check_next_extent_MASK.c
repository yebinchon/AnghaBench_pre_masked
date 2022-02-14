
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; scalar_t__ block_start; scalar_t__ block_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct extent_map* FUNC_0 (struct inode*,scalar_t__) ;
 int FUNC_1 (struct extent_map*) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static bool FUNC_3(struct inode *VAR_2, struct extent_map *VAR_3)
{
 struct extent_map *VAR_4;
 bool VAR_5 = 1;


 if (VAR_3->start + VAR_3->len >= FUNC_2(VAR_2))
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3->start + VAR_3->len);
 if (!VAR_4 || VAR_4->block_start >= VAR_0)
  VAR_5 = 0;
 else if ((VAR_3->block_start + VAR_3->block_len == VAR_4->block_start) &&
   (VAR_3->block_len > VAR_1 && VAR_4->block_len > VAR_1))
  VAR_5 = 0;

 FUNC_1(VAR_4);
 return VAR_5;
}
