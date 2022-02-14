
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_2)
{
 int VAR_3;

 if (VAR_2->if_flags & VAR_0)
  return;

 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1);
 if (!VAR_3)
  VAR_2->if_flags |= VAR_0;
}
