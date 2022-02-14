
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MT2063_ExclZone_t {struct MT2063_ExclZone_t* next_; } ;
struct MT2063_AvoidSpursData_t {size_t nZones; struct MT2063_ExclZone_t* usedZones; struct MT2063_ExclZone_t* MT2063_ExclZones; struct MT2063_ExclZone_t* freeZones; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static struct MT2063_ExclZone_t *FUNC_1(struct MT2063_AvoidSpursData_t
         *VAR_0,
         struct MT2063_ExclZone_t *VAR_1)
{
 struct MT2063_ExclZone_t *VAR_2;

 FUNC_0(2, "\n");


 if (VAR_0->freeZones != ((void*)0)) {

  VAR_2 = VAR_0->freeZones;
  VAR_0->freeZones = VAR_2->next_;
 } else {

  VAR_2 = &VAR_0->MT2063_ExclZones[VAR_0->nZones];
 }

 if (VAR_1 != ((void*)0)) {
  VAR_2->next_ = VAR_1->next_;
  VAR_1->next_ = VAR_2;
 } else {

  VAR_2->next_ = VAR_0->usedZones;
  VAR_0->usedZones = VAR_2;
 }

 VAR_0->nZones++;
 return VAR_2;
}
