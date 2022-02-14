
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ pre_chk; } ;
union cvmx_gmxx_rxx_frm_ctl {TYPE_5__ s; int u64; } ;
typedef int u8 ;
struct TYPE_24__ {int err_code; } ;
struct TYPE_14__ {TYPE_9__ snoip; } ;
struct TYPE_19__ {int ipprt; } ;
struct TYPE_23__ {int len; TYPE_4__ cn38xx; } ;
struct TYPE_21__ {int addr; } ;
struct TYPE_22__ {TYPE_6__ s; } ;
struct TYPE_16__ {int pknd; } ;
struct TYPE_17__ {TYPE_1__ cn68xx; } ;
struct TYPE_18__ {TYPE_2__ pip; } ;
struct TYPE_15__ {TYPE_10__ word2; TYPE_8__ word1; TYPE_7__ packet_ptr; TYPE_3__ word0; } ;
typedef TYPE_11__ cvmx_wqe_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int,...) ;

__attribute__((used)) static inline int FUNC_8(cvmx_wqe_t *VAR_1)
{
 int VAR_2;

 if (FUNC_6(VAR_0))
  VAR_2 = VAR_1->word0.pip.cn68xx.pknd;
 else
  VAR_2 = VAR_1->word1.cn38xx.ipprt;

 if ((VAR_1->word2.snoip.err_code == 10) && (VAR_1->word1.len <= 64)) {






 } else if (VAR_1->word2.snoip.err_code == 5 ||
     VAR_1->word2.snoip.err_code == 7) {
  int VAR_3 = FUNC_3(VAR_2);
  int VAR_4 = FUNC_2(VAR_2);
  union cvmx_gmxx_rxx_frm_ctl VAR_5;

  VAR_5.u64 =
      FUNC_5(FUNC_0(VAR_4, VAR_3));
  if (VAR_5.s.pre_chk == 0) {
   u8 *VAR_6 =
       FUNC_4(VAR_1->packet_ptr.s.addr);
   int VAR_7 = 0;

   while (VAR_7 < VAR_1->word1.len - 1) {
    if (*VAR_6 != 0x55)
     break;
    VAR_6++;
    VAR_7++;
   }

   if (*VAR_6 == 0xd5) {

    VAR_1->packet_ptr.s.addr += VAR_7 + 1;
    VAR_1->word1.len -= VAR_7 + 5;
   } else if ((*VAR_6 & 0xf) == 0xd) {

    VAR_1->packet_ptr.s.addr += VAR_7;
    VAR_1->word1.len -= VAR_7 + 4;
    for (VAR_7 = 0; VAR_7 < VAR_1->word1.len; VAR_7++) {
     *VAR_6 =
         ((*VAR_6 & 0xf0) >> 4) |
         ((*(VAR_6 + 1) & 0xf) << 4);
     VAR_6++;
    }
   } else {
    FUNC_7("Port %d unknown preamble, packet dropped\n",
         VAR_2);
    FUNC_1(VAR_1);
    return 1;
   }
  }
 } else {
  FUNC_7("Port %d receive error code %d, packet dropped\n",
       VAR_2, VAR_1->word2.snoip.err_code);
  FUNC_1(VAR_1);
  return 1;
 }

 return 0;
}
