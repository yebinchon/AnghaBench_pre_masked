
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MT2063_ExclZone_t {int max_; int min_; struct MT2063_ExclZone_t* next_; } ;
struct MT2063_AvoidSpursData_t {int f_if1_Center; int f_if1_bw; struct MT2063_ExclZone_t* usedZones; } ;


 struct MT2063_ExclZone_t* FUNC_0 (struct MT2063_AvoidSpursData_t*,struct MT2063_ExclZone_t*) ;
 struct MT2063_ExclZone_t* FUNC_1 (struct MT2063_AvoidSpursData_t*,struct MT2063_ExclZone_t*,struct MT2063_ExclZone_t*) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(struct MT2063_AvoidSpursData_t *VAR_0,
          u32 VAR_1, u32 VAR_2)
{
 struct MT2063_ExclZone_t *VAR_3 = VAR_0->usedZones;
 struct MT2063_ExclZone_t *VAR_4 = ((void*)0);
 struct MT2063_ExclZone_t *VAR_5 = ((void*)0);

 FUNC_2(2, "\n");


 if ((VAR_2 > (VAR_0->f_if1_Center - (VAR_0->f_if1_bw / 2)))
     && (VAR_1 < (VAR_0->f_if1_Center + (VAR_0->f_if1_bw / 2)))
     && (VAR_1 < VAR_2)) {
  while ((VAR_3 != ((void*)0)) && (VAR_3->max_ < VAR_1)) {
   VAR_4 = VAR_3;
   VAR_3 = VAR_3->next_;
  }

  if ((VAR_3 != ((void*)0)) && (VAR_3->min_ < VAR_2)) {

   if (VAR_1 < VAR_3->min_)
    VAR_3->min_ = VAR_1;
   if (VAR_2 > VAR_3->max_)
    VAR_3->max_ = VAR_2;
  } else {
   VAR_3 = FUNC_0(VAR_0, VAR_4);
   VAR_3->min_ = VAR_1;
   VAR_3->max_ = VAR_2;
  }


  VAR_5 = VAR_3->next_;
  while ((VAR_5 != ((void*)0)) && (VAR_5->min_ < VAR_3->max_)) {
   if (VAR_5->max_ > VAR_3->max_)
    VAR_3->max_ = VAR_5->max_;

   VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_5);
  }
 }
}
