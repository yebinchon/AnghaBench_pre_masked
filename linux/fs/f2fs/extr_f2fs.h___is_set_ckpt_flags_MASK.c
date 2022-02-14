
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_checkpoint {int ckpt_flags; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct f2fs_checkpoint *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0->ckpt_flags);

 return VAR_2 & VAR_1;
}
