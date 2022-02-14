
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_channel {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct gb_channel *VAR_3)
{
 return !!(VAR_3->mode & (VAR_0 | VAR_2
       | VAR_1));
}
