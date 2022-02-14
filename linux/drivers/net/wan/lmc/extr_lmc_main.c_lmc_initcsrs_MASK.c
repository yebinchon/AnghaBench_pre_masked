
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* csr_15; void* csr_14; void* csr_13; void* csr_12; void* csr_11; void* csr_10; void* csr_9; void* csr_missed_frames; void* csr_intr; void* csr_command; void* csr_status; void* csr_txlist; void* csr_rxlist; void* csr_rxpoll; void* csr_txpoll; void* csr_busmode; } ;
struct TYPE_5__ {int lmc_device; TYPE_1__ lmc_csrs; } ;
typedef TYPE_2__ lmc_softc_t ;
typedef void* lmc_csrptr_t ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(lmc_softc_t * const VAR_0, lmc_csrptr_t VAR_1,
                         size_t VAR_2)
{
    FUNC_0(VAR_0->lmc_device, "lmc_initcsrs in");
    VAR_0->lmc_csrs.csr_busmode = VAR_1 + 0 * VAR_2;
    VAR_0->lmc_csrs.csr_txpoll = VAR_1 + 1 * VAR_2;
    VAR_0->lmc_csrs.csr_rxpoll = VAR_1 + 2 * VAR_2;
    VAR_0->lmc_csrs.csr_rxlist = VAR_1 + 3 * VAR_2;
    VAR_0->lmc_csrs.csr_txlist = VAR_1 + 4 * VAR_2;
    VAR_0->lmc_csrs.csr_status = VAR_1 + 5 * VAR_2;
    VAR_0->lmc_csrs.csr_command = VAR_1 + 6 * VAR_2;
    VAR_0->lmc_csrs.csr_intr = VAR_1 + 7 * VAR_2;
    VAR_0->lmc_csrs.csr_missed_frames = VAR_1 + 8 * VAR_2;
    VAR_0->lmc_csrs.csr_9 = VAR_1 + 9 * VAR_2;
    VAR_0->lmc_csrs.csr_10 = VAR_1 + 10 * VAR_2;
    VAR_0->lmc_csrs.csr_11 = VAR_1 + 11 * VAR_2;
    VAR_0->lmc_csrs.csr_12 = VAR_1 + 12 * VAR_2;
    VAR_0->lmc_csrs.csr_13 = VAR_1 + 13 * VAR_2;
    VAR_0->lmc_csrs.csr_14 = VAR_1 + 14 * VAR_2;
    VAR_0->lmc_csrs.csr_15 = VAR_1 + 15 * VAR_2;
    FUNC_0(VAR_0->lmc_device, "lmc_initcsrs out");
}
