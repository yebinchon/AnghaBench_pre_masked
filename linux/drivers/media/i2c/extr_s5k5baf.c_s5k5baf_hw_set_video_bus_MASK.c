
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct s5k5baf {scalar_t__ bus_type; int nlanes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct s5k5baf*) ;
 int FUNC_1 (struct s5k5baf*,int ,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct s5k5baf *VAR_3)
{
 u16 VAR_4;

 if (VAR_3->bus_type == VAR_2)
  VAR_4 = VAR_0;
 else
  VAR_4 = 0;

 FUNC_1(VAR_3, VAR_1,
     VAR_3->nlanes, VAR_4, 1);

 return FUNC_0(VAR_3);
}
