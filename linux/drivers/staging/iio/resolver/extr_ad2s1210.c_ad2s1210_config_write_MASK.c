
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ad2s1210_state {int * tx; int sdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ad2s1210_state*) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ad2s1210_state *VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_1);
 VAR_1->tx[0] = VAR_2;
 VAR_3 = FUNC_1(VAR_1->sdev, VAR_1->tx, 1);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
