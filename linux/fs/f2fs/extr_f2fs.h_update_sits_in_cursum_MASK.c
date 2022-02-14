
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_journal {int n_sits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct f2fs_journal*) ;

__attribute__((used)) static inline int FUNC_2(struct f2fs_journal *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0);

 VAR_0->n_sits = FUNC_0(VAR_2 + VAR_1);
 return VAR_2;
}
