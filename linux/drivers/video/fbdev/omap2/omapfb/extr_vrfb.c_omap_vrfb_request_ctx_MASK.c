
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct vrfb {int context; scalar_t__* paddr; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (struct vrfb*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (struct vrfb*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__,int ,char*) ;
 int FUNC_8 (int,int*) ;

int FUNC_9(struct vrfb *VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 u8 VAR_10;
 int VAR_11;

 FUNC_0("request ctx\n");

 FUNC_3(&VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10)
  if ((VAR_4 & (1 << VAR_10)) == 0)
   break;

 if (VAR_10 == VAR_6) {
  FUNC_6("vrfb: no free contexts\n");
  VAR_11 = -VAR_0;
  goto out;
 }

 FUNC_0("found free ctx %d\n", VAR_10);

 FUNC_8(VAR_10, &VAR_4);

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->context = VAR_10;

 for (VAR_8 = 0; VAR_8 < 4; ++VAR_8) {
  VAR_9 = VAR_5[VAR_10].base + FUNC_1(VAR_8);
  if (!FUNC_7(VAR_9, VAR_2, "vrfb")) {
   FUNC_6("vrfb: failed to reserve VRFB "
     "area for ctx %d, rotation %d\n",
     VAR_10, VAR_8 * 90);
   FUNC_5(VAR_7);
   VAR_11 = -VAR_1;
   goto out;
  }

  VAR_7->paddr[VAR_8] = VAR_9;

  FUNC_0("VRFB %d/%d: %lx\n", VAR_10, VAR_8*90, VAR_7->paddr[VAR_8]);
 }

 VAR_11 = 0;
out:
 FUNC_4(&VAR_3);
 return VAR_11;
}
