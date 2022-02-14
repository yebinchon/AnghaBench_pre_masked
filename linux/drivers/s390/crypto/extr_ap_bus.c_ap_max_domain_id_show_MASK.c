
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct bus_type *VAR_3, char *VAR_4)
{
 int VAR_5;

 if (VAR_1)
  VAR_5 = VAR_2 ? : -1;
 else
  VAR_5 = 15;
 return FUNC_0(VAR_4, VAR_0, "%d\n", VAR_5);
}
