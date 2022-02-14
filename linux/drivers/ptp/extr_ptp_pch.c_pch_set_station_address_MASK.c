
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct pch_dev {TYPE_1__* regs; } ;
typedef int s32 ;
struct TYPE_2__ {int * ts_st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int,int *) ;
 struct pch_dev* FUNC_4 (struct pci_dev*) ;

int FUNC_5(u8 *VAR_2, struct pci_dev *VAR_3)
{
 s32 VAR_4;
 struct pch_dev *VAR_5 = FUNC_4(VAR_3);


 if ((VAR_5->regs == ((void*)0)) || VAR_2 == (u8 *)((void*)0)) {
  FUNC_1(&VAR_3->dev,
   "invalid params returning PCH_INVALIDPARAM\n");
  return VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  u32 VAR_6;
  s32 VAR_7;

  VAR_7 = FUNC_2(VAR_2[VAR_4 * 3]);
  if (VAR_7 < 0) {
   FUNC_1(&VAR_3->dev,
    "invalid params returning PCH_INVALIDPARAM\n");
   return VAR_0;
  }
  VAR_6 = VAR_7 * 16;
  VAR_7 = FUNC_2(VAR_2[(VAR_4 * 3) + 1]);
  if (VAR_7 < 0) {
   FUNC_1(&VAR_3->dev,
    "invalid params returning PCH_INVALIDPARAM\n");
   return VAR_0;
  }
  VAR_6 += VAR_7;

  if ((VAR_4 < 5) && (VAR_2[(VAR_4 * 3) + 2] != ':')) {
   FUNC_1(&VAR_3->dev,
    "invalid params returning PCH_INVALIDPARAM\n");
   return VAR_0;
  }



  FUNC_0(&VAR_3->dev, "invoking pch_station_set\n");
  FUNC_3(VAR_6, &VAR_5->regs->ts_st[VAR_4]);
 }
 return 0;
}
