
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b44 {int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b44*,int ) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct b44 *VAR_5)
{
 FUNC_1(VAR_5);

 FUNC_2(VAR_5);

 FUNC_4(VAR_5->dev, "powering down PHY\n");
 FUNC_3(VAR_5, VAR_3, VAR_4);


 if (VAR_5->flags & VAR_2)
  FUNC_0(VAR_5, VAR_0);
 else
  FUNC_0(VAR_5, VAR_1);
}
