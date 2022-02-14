
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_msg {int* data; scalar_t__ size; scalar_t__ pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvec_msg*) ;

__attribute__((used)) static size_t FUNC_1(struct nvec_msg *VAR_3)
{
 bool VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = (VAR_3->data[0] & 0x60) >> 5;


 if (!VAR_4 || VAR_5 == VAR_2)
  return (VAR_3->pos || VAR_3->size) ? (VAR_3->data[1] + 2) : 0;
 else if (VAR_5 == VAR_0)
  return 2;
 else if (VAR_5 == VAR_1)
  return 3;
 return 0;
}
