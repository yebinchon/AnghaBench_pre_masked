
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_flowring_ring {int blocked; scalar_t__ status; } ;
struct brcmf_flowring {int nrofrings; int block_lock; int dev; struct brcmf_flowring_ring** rings; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct brcmf_flowring*,int) ;
 struct brcmf_if* FUNC_1 (struct brcmf_pub*,scalar_t__) ;
 int FUNC_2 (struct brcmf_if*,int ,int) ;
 struct brcmf_bus* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct brcmf_flowring *VAR_2, u16 VAR_3,
     bool VAR_4)
{
 struct brcmf_flowring_ring *VAR_5;
 struct brcmf_bus *VAR_6;
 struct brcmf_pub *VAR_7;
 struct brcmf_if *VAR_8;
 bool VAR_9;
 int VAR_10;
 u8 VAR_11;
 unsigned long VAR_12;

 FUNC_4(&VAR_2->block_lock, VAR_12);

 VAR_5 = VAR_2->rings[VAR_3];
 if (VAR_5->blocked == VAR_4) {
  FUNC_5(&VAR_2->block_lock, VAR_12);
  return;
 }
 VAR_11 = FUNC_0(VAR_2, VAR_3);

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_2->nrofrings; VAR_10++) {
  if ((VAR_2->rings[VAR_10]) && (VAR_10 != VAR_3)) {
   VAR_5 = VAR_2->rings[VAR_10];
   if ((VAR_5->status == VAR_1) &&
       (FUNC_0(VAR_2, VAR_10) == VAR_11)) {
    if (VAR_5->blocked) {
     VAR_9 = 1;
     break;
    }
   }
  }
 }
 VAR_2->rings[VAR_3]->blocked = VAR_4;
 if (VAR_9) {
  FUNC_5(&VAR_2->block_lock, VAR_12);
  return;
 }

 VAR_6 = FUNC_3(VAR_2->dev);
 VAR_7 = VAR_6->drvr;
 VAR_8 = FUNC_1(VAR_7, VAR_11);
 FUNC_2(VAR_8, VAR_0, VAR_4);

 FUNC_5(&VAR_2->block_lock, VAR_12);
}
