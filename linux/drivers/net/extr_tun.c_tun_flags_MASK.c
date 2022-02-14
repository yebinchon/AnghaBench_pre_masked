
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct tun_struct *VAR_4)
{
 return VAR_4->flags & (VAR_3 | VAR_0 | VAR_2 | VAR_1);
}
