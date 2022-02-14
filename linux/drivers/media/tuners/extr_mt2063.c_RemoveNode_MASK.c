
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MT2063_ExclZone_t {struct MT2063_ExclZone_t* next_; } ;
struct MT2063_AvoidSpursData_t {int nZones; struct MT2063_ExclZone_t* freeZones; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static struct MT2063_ExclZone_t *FUNC_1(struct MT2063_AvoidSpursData_t
         *VAR_0,
         struct MT2063_ExclZone_t *VAR_1,
         struct MT2063_ExclZone_t
         *VAR_2)
{
 struct MT2063_ExclZone_t *VAR_3 = VAR_2->next_;

 FUNC_0(2, "\n");


 if (VAR_1 != ((void*)0))
  VAR_1->next_ = VAR_3;


 VAR_2->next_ = VAR_0->freeZones;
 VAR_0->freeZones = VAR_2;


 VAR_0->nZones--;

 return VAR_3;
}
