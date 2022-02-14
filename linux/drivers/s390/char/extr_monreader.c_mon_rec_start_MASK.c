
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mon_msg {scalar_t__ mca_offset; } ;


 scalar_t__ FUNC_0 (struct mon_msg*) ;

__attribute__((used)) static inline u32 FUNC_1(struct mon_msg *VAR_0)
{
 return *((u32 *) (FUNC_0(VAR_0) + VAR_0->mca_offset + 4));
}
