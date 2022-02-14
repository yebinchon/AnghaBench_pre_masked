
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct firmware {int size; scalar_t__ data; } ;
typedef int off_t ;


 int FUNC_0 (int *,int,int ,int *) ;

__attribute__((used)) static bool FUNC_1(const struct firmware *VAR_0,
      off_t VAR_1, u16 *VAR_2)
{
 return FUNC_0((u16 *) VAR_0->data,
      VAR_0->size / sizeof(u16),
      VAR_1, VAR_2);
}
