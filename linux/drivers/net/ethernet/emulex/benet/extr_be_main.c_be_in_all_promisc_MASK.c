
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int if_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct be_adapter *VAR_1)
{
 return (VAR_1->if_flags & VAR_0) ==
   VAR_0;
}
