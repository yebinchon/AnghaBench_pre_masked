
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mon_msg {int mca_offset; } ;


 scalar_t__ FUNC_0 (struct mon_msg*) ;

__attribute__((used)) static inline u8 FUNC_1(struct mon_msg *VAR_0, u8 VAR_1)
{
 return *((u8 *) FUNC_0(VAR_0) + VAR_0->mca_offset + VAR_1);
}
