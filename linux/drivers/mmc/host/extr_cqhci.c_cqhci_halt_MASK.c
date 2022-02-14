
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_host {int wait_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cqhci_host*) ;
 int FUNC_1 (struct cqhci_host*,int ) ;
 int FUNC_2 (struct cqhci_host*,int ) ;
 int FUNC_3 (struct cqhci_host*,int ,int ) ;
 int FUNC_4 (struct mmc_host*) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int,scalar_t__) ;

__attribute__((used)) static bool FUNC_8(struct mmc_host *VAR_3, unsigned int VAR_4)
{
 struct cqhci_host *VAR_5 = VAR_3->cqe_private;
 bool VAR_6;
 u32 VAR_7;

 if (FUNC_0(VAR_5))
  return 1;

 FUNC_2(VAR_5, VAR_2);

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 VAR_7 |= VAR_1;
 FUNC_3(VAR_5, VAR_7, VAR_0);

 FUNC_7(VAR_5->wait_queue, FUNC_0(VAR_5),
      FUNC_5(VAR_4) + 1);

 FUNC_2(VAR_5, 0);

 VAR_6 = FUNC_0(VAR_5);

 if (!VAR_6)
  FUNC_6("%s: cqhci: Failed to halt\n", FUNC_4(VAR_3));

 return VAR_6;
}
