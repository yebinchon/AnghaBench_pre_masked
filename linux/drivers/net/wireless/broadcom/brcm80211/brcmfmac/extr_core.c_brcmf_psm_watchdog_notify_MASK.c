
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {int bus_if; } ;
struct brcmf_if {struct brcmf_pub* drvr; int bsscfgidx; } ;
struct brcmf_event_msg {int datalen; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,void*,int ) ;

__attribute__((used)) static int FUNC_3(struct brcmf_if *VAR_1,
         const struct brcmf_event_msg *VAR_2,
         void *VAR_3)
{
 struct brcmf_pub *VAR_4 = VAR_1->drvr;
 int VAR_5;

 FUNC_1(VAR_0, "enter: bsscfgidx=%d\n", VAR_1->bsscfgidx);

 FUNC_0(VAR_4, "PSM's watchdog has fired!\n");

 VAR_5 = FUNC_2(VAR_1->drvr->bus_if, VAR_3,
      VAR_2->datalen);
 if (VAR_5)
  FUNC_0(VAR_4, "Failed to get memory dump, %d\n", VAR_5);

 return VAR_5;
}
