
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_power {int nvec; } ;


 int FUNC_0 (char*) ;
 char VAR_0 ;
 char VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct nvec_power *VAR_3)
{
 int VAR_4;
 char VAR_5[] = { VAR_0, VAR_1 };

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_5[1] = VAR_2[VAR_4];
  FUNC_1(VAR_3->nvec, VAR_5, 2);
 }
}
