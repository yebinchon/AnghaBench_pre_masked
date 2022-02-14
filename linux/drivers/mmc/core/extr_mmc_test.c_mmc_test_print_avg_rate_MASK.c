
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {int sg_len; } ;
struct mmc_test_card {TYPE_2__ area; TYPE_1__* card; } ;
struct TYPE_3__ {int host; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,struct timespec64*) ;
 int FUNC_2 (struct mmc_test_card*,unsigned int,unsigned int,struct timespec64,unsigned int,unsigned int) ;
 int FUNC_3 (char*,int ,unsigned int,unsigned int,unsigned int,unsigned int,char*,int ,int ,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 struct timespec64 FUNC_4 (struct timespec64,struct timespec64) ;

__attribute__((used)) static void FUNC_5(struct mmc_test_card *VAR_0, uint64_t VAR_1,
        unsigned int VAR_2, struct timespec64 *VAR_3,
        struct timespec64 *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7 = VAR_1 >> 9;
 uint64_t VAR_8 = VAR_1 * VAR_2;
 struct timespec64 VAR_9;

 VAR_9 = FUNC_4(*VAR_4, *VAR_3);

 VAR_5 = FUNC_1(VAR_8, &VAR_9);
 VAR_6 = FUNC_1(VAR_2 * 100, &VAR_9);

 FUNC_3("%s: Transfer of %u x %u sectors (%u x %u%s KiB) took "
    "%llu.%09u seconds (%u kB/s, %u KiB/s, "
    "%u.%02u IOPS, sg_len %d)\n",
    FUNC_0(VAR_0->card->host), VAR_2, VAR_7, VAR_2,
    VAR_7 >> 1, (VAR_7 & 1 ? ".5" : ""),
    (u64)VAR_9.tv_sec, (u32)VAR_9.tv_nsec,
    VAR_5 / 1000, VAR_5 / 1024, VAR_6 / 100, VAR_6 % 100,
    VAR_0->area.sg_len);

 FUNC_2(VAR_0, VAR_2, VAR_7, VAR_9, VAR_5, VAR_6);
}
