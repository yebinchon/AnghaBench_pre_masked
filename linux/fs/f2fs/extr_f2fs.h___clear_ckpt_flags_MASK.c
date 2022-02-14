
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_checkpoint {int ckpt_flags; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct f2fs_checkpoint *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_1(VAR_0->ckpt_flags);
 VAR_2 &= (~VAR_1);
 VAR_0->ckpt_flags = FUNC_0(VAR_2);
}
