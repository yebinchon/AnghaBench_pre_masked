
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct mmc_test_card {TYPE_1__* card; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int,struct timespec64*) ;
 int FUNC_2 (struct mmc_test_card*,int,unsigned int,struct timespec64,unsigned int,unsigned int) ;
 int FUNC_3 (char*,int ,unsigned int,unsigned int,char*,int ,int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 struct timespec64 FUNC_4 (struct timespec64,struct timespec64) ;

__attribute__((used)) static void FUNC_5(struct mmc_test_card *VAR_0, uint64_t VAR_1,
    struct timespec64 *VAR_2, struct timespec64 *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6 = VAR_1 >> 9;
 struct timespec64 VAR_7;

 VAR_7 = FUNC_4(*VAR_3, *VAR_2);

 VAR_4 = FUNC_1(VAR_1, &VAR_7);
 VAR_5 = FUNC_1(100, &VAR_7);

 FUNC_3("%s: Transfer of %u sectors (%u%s KiB) took %llu.%09u "
    "seconds (%u kB/s, %u KiB/s, %u.%02u IOPS)\n",
    FUNC_0(VAR_0->card->host), VAR_6, VAR_6 >> 1,
    (VAR_6 & 1 ? ".5" : ""), (u64)VAR_7.tv_sec,
    (u32)VAR_7.tv_nsec, VAR_4 / 1000, VAR_4 / 1024,
    VAR_5 / 100, VAR_5 % 100);

 FUNC_2(VAR_0, 1, VAR_6, VAR_7, VAR_4, VAR_5);
}
