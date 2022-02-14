
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bonding {int dev; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct bonding *VAR_1, __be32 VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_2 == FUNC_0(VAR_1->dev, 0, VAR_2))
  return 1;

 FUNC_2();
 if (FUNC_1(VAR_1->dev, VAR_0, &VAR_2))
  VAR_3 = 1;
 FUNC_3();

 return VAR_3;
}
