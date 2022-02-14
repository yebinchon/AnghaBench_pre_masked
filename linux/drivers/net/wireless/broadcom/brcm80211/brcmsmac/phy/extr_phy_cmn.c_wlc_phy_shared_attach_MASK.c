
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_phy_params {int boardflags2; int boardflags; int boardrev; int boardtype; int sromrev; int chippkg; int chiprev; int chip; int did; int vid; int corerev; int unit; int physhim; } ;
struct shared_phy {int rssi_mode; int glacial_timer; int slow_timer; int fast_timer; int boardflags2; int boardflags; int boardrev; int boardtype; int sromrev; int chippkg; int chiprev; int chip; int did; int vid; int corerev; int unit; int physhim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct shared_phy* FUNC_0 (int,int ) ;

struct shared_phy *FUNC_1(struct shared_phy_params *VAR_5)
{
 struct shared_phy *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct shared_phy), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->physhim = VAR_5->physhim;
 VAR_6->unit = VAR_5->unit;
 VAR_6->corerev = VAR_5->corerev;

 VAR_6->vid = VAR_5->vid;
 VAR_6->did = VAR_5->did;
 VAR_6->chip = VAR_5->chip;
 VAR_6->chiprev = VAR_5->chiprev;
 VAR_6->chippkg = VAR_5->chippkg;
 VAR_6->sromrev = VAR_5->sromrev;
 VAR_6->boardtype = VAR_5->boardtype;
 VAR_6->boardrev = VAR_5->boardrev;
 VAR_6->boardflags = VAR_5->boardflags;
 VAR_6->boardflags2 = VAR_5->boardflags2;

 VAR_6->fast_timer = VAR_1;
 VAR_6->slow_timer = VAR_3;
 VAR_6->glacial_timer = VAR_2;

 VAR_6->rssi_mode = VAR_4;

 return VAR_6;
}
