
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct l2t_data {int l2t_size; } ;


 unsigned int FUNC_0 (int const,int,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct l2t_data *VAR_0, const u32 *VAR_1,
        int VAR_2)
{
 unsigned int VAR_3 = VAR_0->l2t_size / 2;

 return FUNC_0(*VAR_1, VAR_2, 0) % VAR_3;
}
