
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rocker_port {int pport; int dev; struct rocker* rocker; } ;
struct rocker {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rocker const*,int ) ;

__attribute__((used)) static void FUNC_3(const struct rocker_port *VAR_1)
{
 const struct rocker *VAR_2 = VAR_1->rocker;
 u64 VAR_3 = FUNC_2(VAR_2, VAR_0);
 bool VAR_4;

 VAR_4 = VAR_3 & (1 << VAR_1->pport);
 if (VAR_4)
  FUNC_1(VAR_1->dev);
 else
  FUNC_0(VAR_1->dev);
}
