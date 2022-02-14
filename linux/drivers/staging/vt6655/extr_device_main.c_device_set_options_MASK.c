
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bbp_type; scalar_t__ long_retry; scalar_t__ short_retry; } ;
struct vnt_private {int bUpdateBBVGA; scalar_t__ byBBType; scalar_t__ byShortPreamble; scalar_t__ byPreambleType; scalar_t__ byLongRetryLimit; scalar_t__ byShortRetryLimit; int byAutoFBCtrl; scalar_t__ byPacketType; TYPE_1__ opts; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(struct vnt_private *VAR_1)
{
 VAR_1->byShortRetryLimit = VAR_1->opts.short_retry;
 VAR_1->byLongRetryLimit = VAR_1->opts.long_retry;
 VAR_1->byBBType = VAR_1->opts.bbp_type;
 VAR_1->byPacketType = VAR_1->byBBType;
 VAR_1->byAutoFBCtrl = VAR_0;
 VAR_1->bUpdateBBVGA = 1;
 VAR_1->byPreambleType = 0;

 FUNC_0(" byShortRetryLimit= %d\n", (int)VAR_1->byShortRetryLimit);
 FUNC_0(" byLongRetryLimit= %d\n", (int)VAR_1->byLongRetryLimit);
 FUNC_0(" byPreambleType= %d\n", (int)VAR_1->byPreambleType);
 FUNC_0(" byShortPreamble= %d\n", (int)VAR_1->byShortPreamble);
 FUNC_0(" byBBType= %d\n", (int)VAR_1->byBBType);
}
