
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_fw {int dummy; } ;
struct sym_chip {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sym_fw VAR_4 ;
 struct sym_fw VAR_5 ;

struct sym_fw *
FUNC_0(struct sym_chip *VAR_6)
{
 if (VAR_6->features & VAR_1)
  return &VAR_5;




 else
  return ((void*)0);
}
