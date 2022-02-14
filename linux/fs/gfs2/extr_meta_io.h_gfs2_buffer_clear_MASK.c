
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_size; int b_data; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct buffer_head *VAR_0)
{
 FUNC_0(VAR_0->b_data, 0, VAR_0->b_size);
}
