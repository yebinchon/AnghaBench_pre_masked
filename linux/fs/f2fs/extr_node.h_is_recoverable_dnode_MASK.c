
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_checkpoint {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_checkpoint* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct f2fs_checkpoint*,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct f2fs_checkpoint*) ;
 int FUNC_5 (struct f2fs_checkpoint*) ;

__attribute__((used)) static inline bool FUNC_6(struct page *VAR_2)
{
 struct f2fs_checkpoint *VAR_3 = FUNC_0(FUNC_1(VAR_2));
 __u64 VAR_4 = FUNC_5(VAR_3);


 if (FUNC_2(VAR_3, VAR_1))
  return (VAR_4 << 32) == (FUNC_3(VAR_2) << 32);

 if (FUNC_2(VAR_3, VAR_0))
  VAR_4 |= (FUNC_4(VAR_3) << 32);

 return VAR_4 == FUNC_3(VAR_2);
}
