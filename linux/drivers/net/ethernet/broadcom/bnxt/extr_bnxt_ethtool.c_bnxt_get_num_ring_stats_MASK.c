
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int cp_nr_rings; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0) +
      FUNC_0(VAR_1) +
      FUNC_1(VAR_2);
 return VAR_3 * VAR_2->cp_nr_rings;
}
