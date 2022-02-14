
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcon_priv {int load_time; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct dcon_priv *VAR_1)
{
 ktime_t VAR_2, VAR_3;

 while (1) {
  VAR_3 = FUNC_0();
  VAR_2 = FUNC_1(VAR_3, VAR_1->load_time);
  if (FUNC_2(VAR_2) > VAR_0 * 20)
   break;
  FUNC_3(4);
 }
}
