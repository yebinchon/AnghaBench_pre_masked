
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct extent_map {scalar_t__ block_start; int flags; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct extent_map*) ;
 int FUNC_2 (struct extent_map*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct extent_map* FUNC_3 (int ,int *,int ,int ,int const,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct extent_map*) ;
 int FUNC_6 (int ,int const) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5,
       u64 VAR_6)
{
 const u64 VAR_7 = FUNC_4(VAR_5);
 struct extent_map *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_6(VAR_6, VAR_7);
 VAR_8 = FUNC_3(FUNC_0(VAR_5), ((void*)0), 0, VAR_6, VAR_7, 0);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 if (VAR_8->block_start == VAR_1)
  VAR_9 = VAR_2;
 else if (FUNC_7(VAR_0, &VAR_8->flags))
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_4;

 FUNC_5(VAR_8);
 return VAR_9;
}
