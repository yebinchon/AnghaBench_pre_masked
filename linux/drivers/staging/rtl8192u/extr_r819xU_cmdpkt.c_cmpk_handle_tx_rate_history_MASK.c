
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int ** ht_mcs; int * ofdm; int * cck; } ;
struct TYPE_9__ {TYPE_2__ txrate; } ;
struct r8192_priv {TYPE_3__ stats; } ;
struct net_device {int dummy; } ;
typedef int pu1Byte ;
struct TYPE_10__ {scalar_t__** ht_mcs; scalar_t__* ofdm; scalar_t__* cck; } ;
typedef TYPE_4__ cmpk_tx_rahis_t ;
struct TYPE_7__ {int (* GetHwRegHandler ) (TYPE_5__*,int ,int ) ;} ;
struct TYPE_11__ {TYPE_1__ HalFunc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4, u8 *VAR_5)
{
 cmpk_tx_rahis_t *VAR_6;
 u8 VAR_7, VAR_8;
 u16 VAR_9 = sizeof(cmpk_tx_rahis_t);
 u32 *VAR_10;
 struct r8192_priv *VAR_11 = FUNC_0(VAR_4);
 VAR_10 = (u32 *)VAR_5;




 for (VAR_7 = 0; VAR_7 < (VAR_9/4); VAR_7++) {
  u16 VAR_12, VAR_13;

  VAR_12 = VAR_10[VAR_7] & 0x0000FFFF;
  VAR_13 = VAR_10[VAR_7] >> 16;
  VAR_10[VAR_7] = (VAR_12 << 16) | VAR_13;
 }

 VAR_6 = (cmpk_tx_rahis_t *)VAR_5;

 if (VAR_6 == ((void*)0))
  return;

 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {

  if (VAR_7 < 4)
   VAR_11->stats.txrate.cck[VAR_7] += VAR_6->cck[VAR_7];


  if (VAR_7 < 8)
   VAR_11->stats.txrate.ofdm[VAR_7] += VAR_6->ofdm[VAR_7];

  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
   VAR_11->stats.txrate.ht_mcs[VAR_8][VAR_7] += VAR_6->ht_mcs[VAR_8][VAR_7];
 }
}
