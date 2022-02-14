
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_priv {struct dpaa_bp** dpaa_bps; } ;
struct dpaa_bp {int percpu_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpaa_bp*,int*) ;
 int* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dpaa_priv *VAR_2)
{
 struct dpaa_bp *VAR_3;
 int *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3 = VAR_2->dpaa_bps[VAR_6];
  if (!VAR_3)
   return -VAR_1;
  VAR_4 = FUNC_1(VAR_3->percpu_count);
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
