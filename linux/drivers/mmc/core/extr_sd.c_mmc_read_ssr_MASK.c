
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ sda_specx; scalar_t__ sda_spec3; } ;
struct TYPE_5__ {unsigned int erase_timeout; unsigned int erase_offset; int au; } ;
struct TYPE_4__ {int cmdclass; } ;
struct mmc_card {TYPE_3__ scr; int erase_arg; int * raw_ssr; int host; TYPE_2__ ssr; TYPE_1__ csd; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct mmc_card*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_7(struct mmc_card *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 __be32 *VAR_11;
 u32 VAR_12[4] = {};
 u8 VAR_13;
 int VAR_14;

 if (!(VAR_6->csd.cmdclass & VAR_0)) {
  FUNC_6("%s: card lacks mandatory SD Status function\n",
   FUNC_5(VAR_6->host));
  return 0;
 }

 VAR_11 = FUNC_3(sizeof(VAR_6->raw_ssr), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 if (FUNC_4(VAR_6, VAR_11)) {
  FUNC_6("%s: problem reading SD Status register\n",
   FUNC_5(VAR_6->host));
  FUNC_2(VAR_11);
  return 0;
 }

 for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
  VAR_6->raw_ssr[VAR_14] = FUNC_1(VAR_11[VAR_14]);

 FUNC_2(VAR_11);





 VAR_7 = FUNC_0(VAR_6->raw_ssr, 428 - 384, 4);
 if (VAR_7) {
  if (VAR_7 <= 9 || VAR_6->scr.sda_spec3) {
   VAR_6->ssr.au = VAR_5[VAR_7];
   VAR_8 = FUNC_0(VAR_6->raw_ssr, 408 - 384, 16);
   VAR_9 = FUNC_0(VAR_6->raw_ssr, 402 - 384, 6);
   if (VAR_8 && VAR_9) {
    VAR_10 = FUNC_0(VAR_6->raw_ssr, 400 - 384, 2);
    VAR_6->ssr.erase_timeout = (VAR_9 * 1000) / VAR_8;
    VAR_6->ssr.erase_offset = VAR_10 * 1000;
   }
  } else {
   FUNC_6("%s: SD Status: Invalid Allocation Unit size\n",
    FUNC_5(VAR_6->host));
  }
 }




 VAR_12[3] = VAR_6->raw_ssr[6];
 VAR_13 = FUNC_0(VAR_12, 313 - 288, 1);
 VAR_6->erase_arg = (VAR_6->scr.sda_specx && VAR_13) ?
       VAR_3 : VAR_4;

 return 0;
}
