
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct pdaloc TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hfa384x {TYPE_1__* wlandev; } ;
typedef int __le16 ;
struct pdaloc {int cardaddr; int auxctl; } ;
struct TYPE_3__ {int netdev; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct hfa384x*,int,int,void*,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,int ,char*) ;
 int FUNC_8 (int ,char*,size_t) ;
 int FUNC_9 (char*) ;

int FUNC_10(struct hfa384x *VAR_6, void *VAR_7, unsigned int VAR_8)
{
 int VAR_9 = 0;
 __le16 *VAR_10 = VAR_7;
 int VAR_11 = 0;
 int VAR_12 = 1;
 int VAR_13 = 0;
 size_t VAR_14;
 u16 VAR_15;
 u16 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 struct pdaloc {
  u32 cardaddr;
  u16 auxctl;
 } VAR_19[] = {
  {
  VAR_3, 0}, {
  VAR_1, 0}, {
  VAR_2, 0}
 };


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_19); VAR_14++) {

  VAR_17 = FUNC_2(VAR_19[VAR_14].cardaddr);
  VAR_18 = FUNC_1(VAR_19[VAR_14].cardaddr);


  VAR_9 = FUNC_3(VAR_6, VAR_17, VAR_18, VAR_7,
     VAR_8);

  if (VAR_9) {
   FUNC_8(VAR_6->wlandev->netdev,
        "Read from index %zd failed, continuing\n",
        VAR_14);
   continue;
  }


  VAR_11 = 1;
  VAR_12 = 1;
  while (VAR_11 && VAR_12) {
   VAR_15 = FUNC_5(VAR_10[VAR_13]) * 2;
   VAR_16 = FUNC_5(VAR_10[VAR_13 + 1]);

   if (VAR_15 > VAR_5 || VAR_15 == 0) {
    FUNC_6(VAR_6->wlandev->netdev,
        "pdrlen invalid=%d\n", VAR_15);
    VAR_11 = 0;
    break;
   }

   if (!FUNC_4(VAR_16)) {
    FUNC_6(VAR_6->wlandev->netdev, "pdrcode invalid=%d\n",
        VAR_16);
    VAR_11 = 0;
    break;
   }

   if (VAR_16 == VAR_4)
    VAR_12 = 0;


   if (VAR_12) {

    VAR_13 += FUNC_5(VAR_10[VAR_13]) + 1;
   }
  }
  if (VAR_11) {
   FUNC_7(VAR_6->wlandev->netdev,
        "PDA Read from 0x%08x in %s space.\n",
        VAR_19[VAR_14].cardaddr,
        VAR_19[VAR_14].auxctl == 0 ? "EXTDS" :
        VAR_19[VAR_14].auxctl == 1 ? "NV" :
        VAR_19[VAR_14].auxctl == 2 ? "PHY" :
        VAR_19[VAR_14].auxctl == 3 ? "ICSRAM" :
        "<bogus auxctl>");
   break;
  }
 }
 VAR_9 = VAR_11 ? 0 : -VAR_0;

 if (VAR_9)
  FUNC_9("Failure: pda is not okay\n");

 return VAR_9;
}
