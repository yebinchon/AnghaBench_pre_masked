
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_mppe_state {struct ppp_mppe_state* sha1; int tfm; int sha1_digest; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ppp_mppe_state*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct ppp_mppe_state *VAR_1 = (struct ppp_mppe_state *) VAR_0;
 if (VAR_1) {
  FUNC_1(VAR_1->sha1_digest);
  FUNC_0(VAR_1->sha1->tfm);
  FUNC_2(VAR_1->sha1);
  FUNC_2(VAR_1);
 }
}
